#include <iostream>
#include <array>
#include <vector>
#include <random>
#include <cstring>

using IntMatrix = std::vector<std::vector<int>>;

int randomInt(int min, int max) {
    static std::default_random_engine e{};
    std::uniform_int_distribution<int> d(min, max);
    return d(e);
}

IntMatrix createMatrix(std::array<unsigned int, 2> shape) {
    std::vector<std::vector<int>> matrix(shape[0], std::vector<int>(shape[1]));
    for (int i = 0; i < shape[0]; i++) {
        for (int j = 0; j < shape[1]; j++) matrix[i][j] = 0;
    }
    return matrix;
}

IntMatrix randomMatrix(std::array<unsigned int, 2> shape, int min, int max) {
    std::vector<std::vector<int>> matrix(shape[0], std::vector<int>(shape[1]));
    for (int i = 0; i < shape[0]; i++) {
        for (int j = 0; j < shape[1]; j++) matrix[i][j] = randomInt(min, max);
    }
    return matrix;
}

std::vector<int> randomVector(unsigned int size, int min, int max) {
    std::vector<int> v(size);
    for (int i = 0; i < v.size(); i++) v[i] = randomInt(min, max);
    return v;
}

int skalarny(int size, std::vector<int> v1, std::vector<int> v2) {
    int iloczyn;
    for (int i = 0; i < size; i++) iloczyn = iloczyn + (v1[i] * v2[i]);
    return iloczyn;
}

void print(std::vector<int> v) {
    std::cout << "[";
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i];
        if (i < v.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl << std::endl;
}

void print(std::vector<std::vector<int>> matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            std::cout << matrix[i][j];
            if (j < matrix[0].size() - 1) std::cout << "  ";
        }
        if (i < matrix.size() - 1) std::cout << std::endl;
    }
    std::cout << std::endl << std::endl;
}

float sum(std::vector<float> v) {
    float suma = 0;
    for (int i = 0; i < v.size(); i++) suma = suma + v[i];
    return suma;
}

float average(std::vector<float> v) {
    float srednia;
    srednia = sum(v) / v.size();
    return srednia;
}

std::array<float, 2> minmax(std::vector<float> v) {
    std::array<float, 2> arr;
    float min = v[0], max = v[0];
    for (int i = 0; i < v.size(); i++) if (min > v[i]) min = v[i];
    for (int i = 0; i < v.size(); i++) if (max < v[i]) max = v[i];
    arr[0] = min;
    arr[1] = max;
    return arr;
};

void zadanie1() {
    std::cout << "Zadanie 1" << std::endl << std::endl;
    int sum = 0;
    std::array<int, 100> arr;
    for (int i = 0; i < 100; i++) {
        arr[i] = i + 100;
        std::cout << arr[i] << std::endl;
    }
    for (auto a : arr) {
        sum = sum + a;
    }
    std::cout << "Suma elementow: " << sum << std::endl << std::endl;
}

void zadanie2() {
    std::cout << "Zadanie 2" << std::endl << std::endl;
    unsigned int n;
    std::cout << "Podaj rozmair wektora: ";
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < v.size(); i++) v[i] = i + 1;
    print(v);
}

void zadanie3() {
    std::cout << "Zadanie 3" << std::endl << std::endl;
    unsigned int n;
    std::cout << "Podaj rozmiar wektora: ";
    std::cin >> n;
    std::vector<float> v(n);
    std::cout << "Podaj kolejne wartosci elementow wektora: " << std::endl;
    for (int i = 0; i < v.size(); i++) std::cin >> v[i];
    std::cout << "Suma elementow: " << sum(v) << std::endl;
    std::cout << "Srednia elementow: " << average(v) << std::endl;
    std::cout << "Minimum wektora: " << minmax(v)[0] << std::endl;
    std::cout << "Maksimum wektora: " << minmax(v)[1] << std::endl << std::endl;
}

void zadanie4() {
    std::cout << "Zadanie 4" << std::endl << std::endl;
    unsigned int size;
    int min, max;
    std::cout << "Podaj rozmiar wektora: ";
    std::cin >> size;
    std::cout << "Podaj przedzial losowych elementow wektora: " << std::endl;
    std::cout << "Od: ";
    std::cin >> min;
    std::cout << "Do: ";
    std::cin >> max;
    print(randomVector(size, min, max));
}

void zadanie5() {
    std::cout << "Zadanie 5" << std::endl << std::endl;
    unsigned int n;
    std::cout << "Podaj rozmiar wektora: ";
    std::cin >> n;
    std::vector<int> v1, v2;
    v1 = randomVector(n, 3, 27);
    v2 = randomVector(n, 3, 27);
    print(v1);
    print(v2);
    std::cout << "Iloczyn skalarny: " << skalarny(n, v1, v2) << std::endl << std::endl;
}

void zadanie6() {
    std::cout << "Zadanie 6" << std::endl << std::endl;
    std::string napis, n_duzy, n_maly, n_odwrotnie;
    std::cout << "Podaj napis: ";
    std::cin.ignore();
    getline(std::cin, napis);
    n_duzy = n_maly = n_odwrotnie = napis;
    std::cout << std::endl;
    for (int i = 0; i < napis.size(); i++)
        if (isdigit(napis[i]) == 0 && isupper(napis[i]) == 0)
            n_duzy[i] = toupper(napis[i]);
    std::cout << "a) " << n_duzy << std::endl;
    for (int i = 0; i < napis.size(); i++)
        if (isdigit(napis[i]) == 0 && islower(napis[i]) == 0)
            n_maly[i] = tolower(napis[i]);
    std::cout << "b) " << n_maly << std::endl;
    for (int i = 0; i < napis.size(); i++) {
        if (isdigit(napis[i]) == 0 && isupper(napis[i]) == 0) n_odwrotnie[i] = toupper(napis[i]);
        else if (isdigit(napis[i]) == 0 && islower(napis[i]) == 0) n_odwrotnie[i] = tolower(napis[i]);
    }
    std::cout << "c) " << n_odwrotnie << std::endl << std::endl;
}

void zadanie7() {
    std::cout << "Zadanie 7" << std::endl << std::endl;
    std::string napis, odwrotny, bez_spacji, odwr_bez_spacji;
    std::cin.ignore();
    do {
        std::cout << "Podaj napis o dlugosci do 30 znakow: ";
        getline(std::cin, napis);
    } while (napis.size() > 30);
    std::cout << std::endl;
    for (int i = 0; i < napis.size(); i++) odwrotny += napis[napis.size() - (i + 1)];
    std::cout << "Napis odwrotny: " << odwrotny << std::endl;
    for (int i = 0; i < napis.size(); i++) if (napis[i] != ' ') bez_spacji += napis[i];
    for (int i = 0; i < napis.size(); i++) if (odwrotny[i] != ' ') odwr_bez_spacji += odwrotny[i];
    if (bez_spacji == odwr_bez_spacji && bez_spacji.size() % 2 == 0)
        std::cout << "Napis jest palindromem parzystym" << std::endl;
    if (bez_spacji == odwr_bez_spacji && bez_spacji.size() % 2 != 0)
        std::cout << "Napis jest palindromem nieparzystym" << std::endl;
    std::cout << std::endl;
}

void zadanie8() {
    std::cout << "Zadanie 8" << std::endl << std::endl;
    std::array<unsigned int, 2> arr;
    int min, max;
    std::cout << "a)" << std::endl << "Podaj wymiary macierzy:" << std::endl << "Ilosc wierszy: ";
    std::cin >> arr[0];
    std::cout << "Ilosc kolumn: ";
    std::cin >> arr[1];
    print(createMatrix(arr));
    std::cout << "b)" << std::endl << "Podaj wymiary macierzy:" << std::endl << "Ilosc wierszy: ";
    std::cin >> arr[0];
    std::cout << "Ilosc kolumn: ";
    std::cin >> arr[1];
    std::cout << "Podaj przedzial losowych elementow macierzy: " << std::endl;
    std::cout << "Od: ";
    std::cin >> min;
    std::cout << "Do: ";
    std::cin >> max;
    print(randomMatrix(arr, min, max));
}

void zadanie9() {
    std::cout << "Zadanie 9" << std::endl << std::endl;
    std::cout << "Moim zdaniem uzywanie tego typu aliasow upraszcza czytanie kodu zrodlowego." << std::endl
              << std::endl;

}

int main() {
    int x;
    do {
        std::cout << "Jakie zadanie chcesz wykonac (1-9)(0 = wyjscie): ";
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
            case 5: {
                zadanie5();
                break;
            }
            case 6: {
                zadanie6();
                break;
            }
            case 7: {
                zadanie7();
                break;
            }
            case 8: {
                zadanie8();
                break;
            }
            case 9: {
                zadanie9();
                break;
            }
        }
    } while (x != 0);
    return 0;
}