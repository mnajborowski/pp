
#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Monster {};

class Item {
private:
  std::string name_;
  float price_;

public:
  void set_name(const std::string &name) { name_ = name; }
  void set_price(const float &price) { price_ = price; }

  const std::string &get_name() const { return name_; }
  float get_price() const { return price_; }

  Item(std::string name, float price) : name_(std::move(name)), price_(price) {}

  // Je�eli chcemy korzysta� z polimorfizmu niezb�dnej est zdefiniowanie
  // wirtualnego konstruktura w klasie bazowej.
  virtual ~Item() {}
};
// --------------------------------------------------

class Weapon : public Item {
protected:
  float damage_;

public:
  // Metoda czysto-wirtualna (pure virtual) -- nie mo�na utworzy� instancji
  // klasy Weapon
  virtual void attack(Monster &monster) const = 0;

  Weapon(std::string name, float price, float damage)
      : Item(name, price), damage_(damage) {}
};

// --------------------------------------------------
class Armor : public Item {
  float block_chance_;

public:
  Armor(std::string name, float price, float block_chance)
      : Item(name, price), block_chance_(block_chance) {}
  virtual void block() const = 0;
};

// --------------- Weapon ---------------------------
class Sword : public Weapon {

public:
  Sword(std::string name, float price, float damage)
      : Weapon(name, price, damage) {}

  virtual void attack(Monster &monster) const {
    std::cout << "Cut! (" << damage_ << ")\n";
  }
};

// --------------------------------------------------
class Mace : public Weapon {

public:
  Mace(std::string name, float price, float damage)
      : Weapon(name, price, damage) {}

  virtual void attack(Monster &monster) const {
    std::cout << "Crush! (" << damage_ << ")\n";
  }
};

// -------------- Armor -----------------------------

class Shield : public Armor {
public:
  Shield(std::string name, float price, float block_chance)
      : Armor(name, price, block_chance) {}

  virtual void block() const { std::cout << "Reflect!\n"; }
};

// --------------------------------------------------
class Helm : public Armor {
public:
  Helm(std::string name, float price, float block_chance)
      : Armor(name, price, block_chance) {}

  virtual void block() const { std::cout << "Bounce!\n"; }
};

// --------------------------------------------------
// Funkcja przyjmie jako argument dowolny obiekt, kt�rego klas� bazow� jest
// Weapon
void attack_monster_ref(const Weapon &weapon) {
  Monster monster{};

  std::cout << "Aiming!\n";
  std::cout << "Steady!\n";
  // dzi�ki polimorfizmowi, wywo�ywana jest funkcja attack z klasy zwi�zanej z
  // danym obiektem, a nie z lokalnym typem Weapon
  weapon.attack(monster);
  std::cout << "--\n";
}

// --------------------------------------------------

template <typename T>
void attack_with_everything(const std::vector<T> &weapons) {

  for (const Weapon &weapon : weapons) {
    attack_monster_ref(weapon);
  }
}

// --------------------------------------------------

void attack_with_everything_ptr(
    const std::vector<std::unique_ptr<Weapon>> &weapons) {
  Monster monster{}; // przyk�adowy potworek

  for (const auto &weapon : weapons) { // poszczeg�lne elementy kolekcji s� typu
                                       // std::unique_ptr<Weapon>
    weapon->attack(monster);
  }
}

// --------------------------------------------------

void attack_monster_ptr(const std::unique_ptr<Weapon> &weapon) {
  Monster monster{}; // przyk�adowy potworek
  std::cout << "Aiming!\n";
  std::cout << "Steady!\n";
  // dzi�ki polimorfizmowi, wywo�ywana jest funkcja attack z klasy zwi�zanej z
  // danym obiektem, a nie z lokalnym typem Weapon
  weapon->attack(monster);
  std::cout << "--\n";
}

// --------------------------------------------------

// Na li�cie argument�w mo�na umie�ci� zar�wno referencj�...
void print_item_ref(const Item &item) {
  std::cout << item.get_name() << ", " << item.get_price() << "gp\n";
}
// ...jak i wska�nik na klas� bazow�
void print_item_ptr(const Item *item) {
  std::cout << item->get_name() << ", " << item->get_price() << "gp\n";
}

// --------------------------------------------------

template <typename T>
void shop_list(const std::vector<std::unique_ptr<T>> &items) {
  for (auto &item : items) {    // poszczeg�lne elementy kolekcji s� typu
                                // std::unique_ptr<T>
    print_item_ref(*item);      // wy�uskujemy element
                                // i przekazujemy przez referencj�
    print_item_ptr(item.get()); // przekazujemy surowy wska�nik
  }
}

// --------------------------------------------------
void print_header(const std::string &text, const char dash = '-') {
  const int width = 78;
  const int number_of_dashes = width - text.length() - 2;
  auto is_odd = [](int x) { return x & 1; };
  const int left_part_width = number_of_dashes / 2 + is_odd(number_of_dashes);
  const int right_part_width = number_of_dashes / 2;

  std::cout << std::string(left_part_width, dash) << ' ' << text << ' '
            << std::string(right_part_width, dash) << '\n';
}

void print_footer(const char dash = '-') {
  const int width = 78;
  std::cout << std::string(width, dash) << '\n';
}
// --------------------------------------------------
int main() {

  // polimorfizm z wykorzystaniem referencji
  {
    print_header("Polimorfizm z wykorzystaniem referencji", '#');
    // std::cout << "-------- Polimorfizm z wykorzystaniem referencji -----\n";
    // Kolekcje swords i maces mog� przechowywa� tylko obiekty typu Sword i
    // Mace. Niezale�nie od tego jak wygl�da hierarchia klas.
    std::vector<Sword> swords{{"one-handed", 50, 10}, {"two-handed", 85, 18}};
    std::vector<Mace> maces{{"hammer", 40, 12}, {"mallet", 75, 20}};

    // Dla ka�dego elementu obu kolekcji wywo�ywana jest polimorficzna funkcja
    // attack_monster_ref.
    // Jako argument przyjmuje ona referencje na Weapon. Mo�na przekaza� do niej
    // dowolny obiekt, kt�ry dziedziczy po�rednio lub bezpo�rednio po typie
    // Weapon.
    print_header("Sword attacks (for_each)");
    std::for_each(swords.begin(), swords.end(), attack_monster_ref);
    print_header("Mace attacks (for_each)");
    std::for_each(maces.begin(), maces.end(), attack_monster_ref);

    print_footer();

    // Sytuacja analogiczna jak wy�ej.
    print_header("Sword attacks (for-range)");
    for (const auto &sword : swords) {
      attack_monster_ref(sword);
    }

    print_header("Mace attacks (for-range)");
    for (const auto &mace : maces) {
      attack_monster_ref(mace);
    }

    print_footer();

    // Wywo�uje funkcj� szablonow�, kt�ra jako argument przyjmuje kolekcj� o
    // dowolnym typie element�w. Zawiera kod analogiczny z linijek wy�ej.
    print_header("Sword attacks - attack with everything");
    attack_with_everything(swords);

    print_header("Mace attacks - attack with everything");
    attack_with_everything(maces);

    print_footer();
  }

  // polimorfizm z wykorzystaniem wska�nik�w
  {
    print_header("Polimorfizm z wykorzystaniem wskaznikow", '#');

    // Kolekcja weapons mo�e przechowywa� wska�niki na obiekty dowolnych typ�w
    // pod warunkiem, �e klas� nadrz�dn� jest Weapon
    std::vector<std::unique_ptr<Weapon>> weapons;
    weapons.emplace_back(std::make_unique<Sword>("one-handed", 50, 10));
    weapons.emplace_back(std::make_unique<Sword>("two-handed", 85, 18));
    weapons.emplace_back(std::make_unique<Mace>("hammer", 40, 12));
    weapons.emplace_back(std::make_unique<Mace>("mallet", 75, 20));

    // Podobnie jak wy�ej, jednak�e klas� bazow� jest Item
    std::vector<std::unique_ptr<Item>> items;
    items.emplace_back(std::make_unique<Sword>("one-handed", 50, 10));
    items.emplace_back(std::make_unique<Sword>("two-handed", 85, 18));
    items.emplace_back(std::make_unique<Mace>("hammer", 40, 12));
    items.emplace_back(std::make_unique<Mace>("mallet", 75, 20));
    items.emplace_back(std::make_unique<Shield>("reflective shield", 10, 40));
    items.emplace_back(std::make_unique<Helm>("soldier helm", 5, 60));

    print_header("Weapon attacks (for_each, ptr)");
    std::for_each(weapons.begin(), weapons.end(), attack_monster_ptr);
    print_footer();

    print_header("Weapon attacks (for-range, ptr)");
    for (const auto &weapon : weapons) {
      attack_monster_ptr(weapon);
    }
    print_footer();

    print_header("Weapon attacks - attack with everything");
    attack_with_everything_ptr(weapons);
    print_footer();

    // Pr�buj�c wywo�a� poni�sze dostaniemy b�ad, attack_with_everything_ptr
    // wymaga obiekt�w z klas� bazow� co najmniej Weapon
    // attack_with_everything_ptr(items);

    print_header("Shop list --- weapons");
    shop_list(weapons);
    print_footer();

    print_header("Shop list --- items");
    shop_list(items);
    print_footer();
  }
}