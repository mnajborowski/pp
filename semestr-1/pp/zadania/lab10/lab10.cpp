#include <iostream>
#include <vector>
#include <random>
#include <memory>

double randomNumber() {
    static std::default_random_engine e{};
    std::uniform_real_distribution<double> d(0, 100);
    return d(e);
}

template <typename T>
struct Complex {
    T a, b;

    Complex() {
        a = T();
        b = T();
    }

    Complex<T> operator=(const int &liczba) {
        Complex<T> z;
        z.a = liczba;
        z.b = liczba;
        return z;
    }
};

template <typename T>
struct BstNode {
    T value;
    std::unique_ptr<BstNode> left;
    std::unique_ptr<BstNode> right;

    BstNode() {
        left = nullptr;
        right = nullptr;
    }

    BstNode(T value) : value(value) {};
};

template <typename T>
Complex<T> operator+(const Complex<T> &z1, const Complex<T> &z2) {
    Complex<T> z3;
    z3.a = z1.a + z2.a;
    z3.b = z1.b + z2.b;
    return z3;
}

template <typename T>
Complex<T> operator-(const Complex<T> &z1, const Complex<T> &z2) {
    Complex<T> z3;
    z3.a = z1.a - z2.a;
    z3.b = z1.b - z2.b;
    return z3;
}

template <typename T>
Complex<T> operator*(const Complex<T> &z1, const Complex<T> &z2) {
    Complex<T> z3;
    z3.a = (z1.a * z2.a) - (z1.b * z2.b);
    z3.b = (z1.b * z2.a) + (z1.a * z2.b);
    return z3;
}

template <typename T>
std::ostream &operator<<(std::ostream &output, const Complex<T> &z) {
    output << z.a << " + " << z.b << "i";
    return output;
}

template <typename T>
std::vector<T> add(const std::vector<T> &v1, const std::vector<T> &v2) {
    int size;
    size = v1.size();
    if (v2.size() > v1.size()) size = v2.size();
    std::vector<T> v(size);
    for (int i = 0; i < v1.size(); i++) v[i] = v[i] + v1[i];
    for (int i = 0; i < v2.size(); i++) v[i] = v[i] + v2[i];
    return v;
}

template <typename T>
std::vector<T> subtract(const std::vector<T> &v1, const std::vector<T> &v2) {
    int size;
    size = v1.size();
    if (v2.size() > v1.size()) size = v2.size();
    std::vector<T> v(size);
    for (int i = 0; i < size; i++) v[i] = v1[i] - v2[i];
    return v;
}

template <typename T>
std::vector<T> multiply(const std::vector<T> &v1, const std::vector<T> &v2) {
    int size;
    size = v1.size();
    if (v2.size() > v1.size()) size = v2.size();
    std::vector<T> v(size);
    for (int i = 0; i < size; i++) v[i] = v1[i] * v2[i];
    return v;
}

template <typename T>
std::vector<T> randomVector(unsigned int size) {
    std::vector<T> v(size);
    for (int i = 0; i < v.size(); i++) v[i] = static_cast<T>(randomNumber());
    return v;
}

template <typename T>
std::vector<Complex<T>> randomComplexVector(unsigned int size) {
    std::vector<Complex<T>> v(size);
    for (int i = 0; i < v.size(); i++) {
        v[i].a = static_cast<T>(randomNumber());
        v[i].b = static_cast<T>(randomNumber());
    }
    return v;
}

template <typename T>
std::ostream &operator<<(std::ostream &output, const std::vector<T> &v) {
    output << "[";
    for (int i = 0; i < v.size(); i++) {
        output << v[i];
        if (i < v.size() - 1) output << ", ";
    }
    output << "]" << std::endl;
    return output;
}

template <typename T>
std::ostream &operator<<(std::ostream &output, const std::vector<std::vector<T>> &matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            std::cout << matrix[i][j];
            if (j < matrix[0].size() - 1) std::cout << "  ";
        }
        if (i < matrix.size() - 1) std::cout << std::endl;
    }
    std::cout << std::endl << std::endl;
}

template <typename T>
std::vector<std::vector<T>> randomMatrix(int size) {
    std::vector<std::vector<T>> matrix(size, std::vector<T>(size));
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) matrix[i][j] = static_cast<T>(randomNumber());
    }
    return matrix;
}

template <typename T>
std::vector<std::vector<Complex<T>>> randomComplexMatrix(int size) {
    std::vector<std::vector<Complex<T>>> matrix(size, std::vector<Complex<T>>(size));
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j].a = static_cast<T>(randomNumber());
            matrix[i][j].b = static_cast<T>(randomNumber());
        }
    }
    return matrix;
}

template <typename T>
std::vector<std::vector<T>> add(const std::vector<std::vector<T>> &m1, const std::vector<std::vector<T>> &m2) {
    std::vector<T> temp;
    std::vector<std::vector<T>> m;
    if (m1.size() == m2.size() && m1[0].size() == m2[0].size()) {
        for (int i = 0; i < m1.size(); i++) {
            for (int j = 0; j < m1[0].size(); j++) {
                temp.push_back(m1[i][j] + m2[i][j]);
            }
            m.push_back(temp);
            temp.clear();
        }
        return m;
    } else std::cout << "Macierze nie maja tych samych wymiarow!!";
}

template <typename T>
std::vector<std::vector<T>> subtract(const std::vector<std::vector<T>> &m1, const std::vector<std::vector<T>> &m2) {
    std::vector<T> temp;
    std::vector<std::vector<T>> m;
    if (m1.size() == m2.size() && m1[0].size() == m2[0].size()) {
        for (int i = 0; i < m1.size(); i++) {
            for (int j = 0; j < m1[0].size(); j++) {
                temp.push_back(m1[i][j] - m2[i][j]);
            }
            m.push_back(temp);
            temp.clear();
        }
        return m;
    } else std::cout << "Macierze nie maja tych samych wymiarow!!";
}

template <typename T>
std::vector<std::vector<T>> multiply(const std::vector<std::vector<T>> &m1, const std::vector<std::vector<T>> &m2) {
    T result;
    std::vector<T> temp;
    std::vector<std::vector<T>> m;
    for (int i = 0; i < m1.size(); i++) {
        for (int j = 0; j < m2[0].size(); j++) {
            for (int k = 0; k < m2.size(); k++) {
                result = result + (m1[i][k] * m2[k][j]);
            }
            temp.push_back(result);
            result = 0;
        }
        m.push_back(temp);
        temp.clear();
    }
    return m;
}

template <typename T>
void printMatrix(const std::vector<std::vector<T>> &matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            std::cout << matrix[i][j];
            if (j < matrix[0].size() - 1) std::cout << "  ";
        }
        if (i < matrix.size() - 1) std::cout << std::endl;
    }
    std::cout << std::endl << std::endl;
}

template<typename T>
void printVector(const std::vector<T> &v) {
    std::cout << "[";
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i];
        if (i < v.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

template <typename T>
void in_order(std::ostream &output, BstNode<T> *start) {
    if (start->left!=NULL) in_order(output, start->left.get());
    output<<start->value<<std::endl;
    if (start->right!=NULL) in_order(output, start->right.get());
}

template <typename T>
void addToTree(std::unique_ptr<BstNode<T>> &bst, T value) {
    if (bst) {
        if (bst->value > value) addToTree(bst->left, value);
        if (bst->value <= value) addToTree(bst->right, value);
    }
    else bst = std::make_unique<BstNode<T>>(value);
}

template <typename T>
std::ostream &operator<<(std::ostream &output, BstNode<T> *bst) {
    in_order(output, bst);
    return output;
}

template <typename T>
std::unique_ptr<BstNode<T>> &operator<<(std::unique_ptr<BstNode<T>> &bst, T &value) {
    addToTree(bst, value);
    return bst;
}

template <typename T>
T minimum(BstNode<T> *root) {
    if (root->left!=nullptr) minimum(root->left.get());
    else return root->value;
}

template <typename T>
T maximum(BstNode<T> *root) {
    if (root->right!=nullptr) maximum(root->right.get());
    else return root->value;
}

template <typename T>
bool contains(BstNode<T> *root, int value) {
    if (root) {
        if (root->value == value) return true;
        else if (value < root->value && root->left != nullptr) return contains(root->left.get(), value);
        else if (value >= root->value && root->right != nullptr) return contains(root->right.get(), value);
        return false;
    }
}

template <typename T>
unsigned int size(BstNode<T> *root) {
    unsigned int i=0;
    if (root==nullptr) return 0;
    else {
        i++;
        if (root->left!=nullptr) i = i + size(root->left.get());
        if (root->right!=nullptr) i = i + size(root->right.get());
    }
    return i;
}

void zadanie1() {
    std::cout << "Zadanie 1" << std::endl << std::endl;
    Complex<int> z1, z2, z3;
    Complex<float> z4, z5, z6;
    Complex<double> z7, z8, z9;
    std::cout << "Podaj czesc rzeczywista pierwszej liczby zespolonej <int>: ";
    std::cin >> z1.a;
    std::cout << "Podaj czesc urojona pierwszej liczby zespolonej <int>: ";
    std::cin >> z1.b;
    std::cout << "Podaj czesc rzeczywista drugiej liczby zespolonej <int>: ";
    std::cin >> z2.a;
    std::cout << "Podaj czesc urojona drugiej liczby zespolonej <int>: ";
    std::cin >> z2.b;
    std::cout << "Podaj czesc rzeczywista pierwszej liczby zespolonej <float>: ";
    std::cin >> z4.a;
    std::cout << "Podaj czesc urojona pierwszej liczby zespolonej <float>: ";
    std::cin >> z4.b;
    std::cout << "Podaj czesc rzeczywista drugiej liczby zespolonej <float>: ";
    std::cin >> z5.a;
    std::cout << "Podaj czesc urojona drugiej liczby zespolonej <float>: ";
    std::cin >> z6.b;
    std::cout << "Podaj czesc rzeczywista pierwszej liczby zespolonej <double>: ";
    std::cin >> z7.a;
    std::cout << "Podaj czesc urojona pierwszej liczby zespolonej <double>: ";
    std::cin >> z7.b;
    std::cout << "Podaj czesc rzeczywista drugiej liczby zespolonej <double>: ";
    std::cin >> z8.a;
    std::cout << "Podaj czesc urojona drugiej liczby zespolonej <double>: ";
    std::cin >> z8.b;
    std::cout << std::endl;
    z3 = z1 + z2;
    z6 = z4 + z5;
    z9 = z7 + z8;
    std::cout << "Suma liczb zespolonych <int> wynosi: " << z3 << std::endl;
    std::cout << "Suma liczb zespolonych <float> wynosi: " << z6 << std::endl;
    std::cout << "Suma liczb zespolonych <double> wynosi: " << z9 << std::endl;
}

void zadanie2() {
    std::cout << "Zadanie 2" << std::endl << std::endl;
    std::vector<int> v1, v2;
    std::vector<float> v3, v4;
    std::vector<Complex<int>> v5, v6;
    v1 = randomVector<int>(3);
    v2 = randomVector<int>(3);
    v3 = randomVector<float>(3);
    v4 = randomVector<float>(3);
    v5 = randomComplexVector<int>(3);
    v6 = randomComplexVector<int>(3);
    printVector(v1);
    printVector(v2);
    printVector(v3);
    printVector(v4);
    printVector(v5);
    printVector(v6);
    std::cout << "Wynik dodawania dwoch wektorow <int>: " << std::endl << add(v1, v2);
    std::cout << "Wynik odejmowania dwoch wektorow <float>: " << std::endl << subtract(v3, v4);
    std::cout << "Wynik dodawania dwoch wektorow <Complex<int>>: " << std::endl << add(v5, v6);
    std::cout << "Wynik odejmowania dwoch wektorow <Complex<int>>: " << std::endl << subtract(v5, v6);
    std::cout << "Wynik mnozenia dwoch wektorow <Complex<int>>: " << std::endl << multiply(v5, v6) << std::endl;
}

void zadanie3() {
    std::cout << "Zadanie 3" << std::endl << std::endl;
    std::vector<std::vector<int>> m1, m2;
    std::vector<std::vector<double>> m3, m4;
    std::vector<std::vector<Complex<int>>> m5, m6;
    std::vector<std::vector<Complex<float>>> m7, m8;
    m1 = randomMatrix<int>(3);
    m2 = randomMatrix<int>(3);
    m3 = randomMatrix<double>(3);
    m4 = randomMatrix<double>(3);
    m5 = randomComplexMatrix<int>(3);
    m6 = randomComplexMatrix<int>(3);
    m7 = randomComplexMatrix<float>(3);
    m8 = randomComplexMatrix<float>(3);
    printMatrix(m1);
    printMatrix(m2);
    printMatrix(m3);
    printMatrix(m4);
    printMatrix(m5);
    printMatrix(m6);
    printMatrix(m7);
    printMatrix(m8);
    std::cout << "Wynik dodawania dwoch macierzy <int>: " << std::endl << add(m1, m2);
    std::cout << "Wynik odejmowania dwoch macierzy <double>: " << std::endl << add(m3, m4);
    std::cout << "Wynik dodawania dwoch macierzy <Complex<int>>: " << std::endl << add(m5, m6);
    std::cout << "Wynik odejmowania dwoch macierzy <Complex<float>>: " << std::endl << subtract(m7, m8);
    std::cout << "Wynik mnozenia dwoch macierzy <Complex<int>>: " << std::endl << multiply(m5, m6) << std::endl;
}

void zadanie4() {
    int x;
    do {
        std::cout<<"1. BST<float>"<<std::endl;
        std::cout<<"2. BST<unsigned int>"<<std::endl;
        std::cout<<"Jakiego typu drzewo chcesz utworzyc: (1-2)(0 = wyjscie): ";
        std::cin>>x;
        system("CLS");
        switch (x) {
            case 1: {
                int x;
                std::unique_ptr<BstNode<float>> bst;
                do {
                    std::cout<<"1. Wyswietl drzewo BST"<<std::endl;
                    std::cout<<"2. Dodaj nowa liczbe do drzewa BST"<<std::endl;
                    std::cout<<"3. Dodaj 3 liczby, wykorzystujac przeciazenie operatora '<<'"<<std::endl;
                    std::cout<<"4. Wyswietl najmniejsza wartosc przechowywana na drzewie"<<std::endl;
                    std::cout<<"5. Wyswietl najwieksza wartosc przechowywana na drzewie"<<std::endl;
                    std::cout<<"6. Sprawdz, czy podana wartosc jest na drzewie"<<std::endl;
                    std::cout<<"7. Sprawdz ile elementow znajduje sie na drzewie"<<std::endl;
                    std::cout<<"0. Wyjscie"<<std::endl;
                    std::cout<<"Co chcesz zrobic: ";
                    std::cin>>x;
                    switch(x) {
                        case 1: {
                            if (bst!=nullptr) std::cout<<bst.get()<<std::endl;
                            else std::cout<<"Drzewo jest puste!"<<std::endl;
                            break;
                        }
                        case 2: {
                            float a;
                            std::cout<<"Podaj liczbe, ktora chcesz dodac: ";
                            std::cin>>a;
                            addToTree(bst, a);
                            break;
                        }
                        case 3: {
                            float a;
                            std::cout<<"Podaj liczby, ktore chcesz dodac: "<<std::endl;
                            for (int i=0; i<3; i++) {
                                std::cout<<"Liczba "<<i+1<<": ";
                                std::cin>>a;
                                bst << a;
                            }
                            break;
                        }
                        case 4: {
                            std::cout<<"Minimum: "<<minimum(bst.get())<<std::endl;
                            break;
                        }
                        case 5: {
                            std::cout<<"Maksimum: "<<maximum(bst.get())<<std::endl;
                            break;
                        }
                        case 6: {
                            float a;
                            std::cout<<"Podaj szukana wartosc: ";
                            std::cin>>a;
                            if (contains(bst.get(), a)) std::cout<<"Podana wartosc znajduje sie na drzewie"<<std::endl;
                            else std::cout<<"Podana wartosc nie znajduje sie na drzewie lub drzewo jest puste"<<std::endl;
                            break;
                        }
                        case 7: {
                            std::cout<<"Ilosc elementow na drzewie: "<<size(bst.get())<<std::endl;
                            break;
                        }
                    }
                    if (x!=0) {
                        std::cout << "Wcisnij ENTER";
                        std::cin.ignore();
                        std::cin.get();
                        system("CLS");
                    }
                } while (x!=0);
                break;
            }
            case 2: {
                int x;
                std::unique_ptr<BstNode<unsigned int>> bst;
                do {
                    std::cout<<"1. Wyswietl drzewo BST"<<std::endl;
                    std::cout<<"2. Dodaj nowa liczbe do drzewa BST"<<std::endl;
                    std::cout<<"3. Dodaj 3 liczby, wykorzystujac przeciazenie operatora '<<'"<<std::endl;
                    std::cout<<"4. Wyswietl najmniejsza wartosc przechowywana na drzewie"<<std::endl;
                    std::cout<<"5. Wyswietl najwieksza wartosc przechowywana na drzewie"<<std::endl;
                    std::cout<<"6. Sprawdz, czy podana wartosc jest na drzewie"<<std::endl;
                    std::cout<<"7. Sprawdz ile elementow znajduje sie na drzewie"<<std::endl;
                    std::cout<<"0. Wyjscie"<<std::endl;
                    std::cout<<"Co chcesz zrobic: ";
                    std::cin>>x;
                    switch(x) {
                        case 1: {
                            if (bst!=nullptr) std::cout<<bst.get()<<std::endl;
                            else std::cout<<"Drzewo jest puste!"<<std::endl;
                            break;
                        }
                        case 2: {
                            unsigned int a;
                            std::cout<<"Podaj liczbe, ktora chcesz dodac: ";
                            std::cin>>a;
                            addToTree(bst, a);
                            break;
                        }
                        case 3: {
                            unsigned int a;
                            std::cout<<"Podaj liczby, ktore chcesz dodac: "<<std::endl;
                            for (int i=0; i<3; i++) {
                                std::cout<<"Liczba "<<i+1<<": ";
                                std::cin>>a;
                                bst << a;
                            }
                            break;
                        }
                        case 4: {
                            std::cout<<"Minimum: "<<minimum(bst.get())<<std::endl;
                            break;
                        }
                        case 5: {
                            std::cout<<"Maksimum: "<<maximum(bst.get())<<std::endl;
                            break;
                        }
                        case 6: {
                            unsigned int a;
                            std::cout<<"Podaj szukana wartosc: ";
                            std::cin>>a;
                            if (contains(bst.get(), a)) std::cout<<"Podana wartosc znajduje sie na drzewie"<<std::endl;
                            else std::cout<<"Podana wartosc nie znajduje sie na drzewie lub drzewo jest puste"<<std::endl;
                            break;
                        }
                        case 7: {
                            std::cout<<"Ilosc elementow na drzewie: "<<size(bst.get())<<std::endl;
                            break;
                        }
                    }
                    if (x!=0) {
                        std::cout << "Wcisnij ENTER";
                        std::cin.ignore();
                        std::cin.get();
                        system("CLS");
                    }
                } while (x!=0);
                break;
            }
        }
        system("CLS");
    } while (x!=0);
}

int main() {
    int x;
    do {
        std::cout << "Jakie zadanie chcesz wykonac (1-4)(0 = wyjscie): ";
        std::cin >> x;
        switch (x) {
            case 1: {
                zadanie1();
                break;
            }
            case 2: {
                zadanie2();
                break;
            }
            case 3: {
                zadanie3();
                break;
            }
            case 4: {
                zadanie4();
                break;
            }
        }
    } while (x != 0);
    return 0;
}