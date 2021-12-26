#include <iostream>
#include <fstream>
#include <vector>
#include <array>
#include <ctime>
#include <random>

int randomInt(int min, int max) {
    static std::default_random_engine e{};
    std::uniform_int_distribution<int> d(min, max);
    return d(e);
}

void print(const std::vector<int> &v) {
    std::cout << "[";
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i];
        if (i < v.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

float sum(const std::vector<int> &v) {
    float suma = 0;
    for (int i = 0; i < v.size(); i++) suma = suma + v[i];
    return suma;
}

float average(const std::vector<int> &v) {
    float srednia;
    srednia = sum(v) / v.size();
    return srednia;
}

std::array<float, 2> minmax(const std::vector<int> &v) {
    std::array<float, 2> arr;
    float min = v[0], max = v[0];
    for (int i = 0; i < v.size(); i++) if (min > v[i]) min = v[i];
    for (int i = 0; i < v.size(); i++) if (max < v[i]) max = v[i];
    arr[0] = min;
    arr[1] = max;
    return arr;
};

bool equals(const std::vector<int> &v1, const std::vector<int> &v2) {
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i] || v1.size() != v2.size()) return false;
        else return true;
    }
}

std::vector<int> add(const std::vector<int> &v1, const std::vector<int> &v2) {
    int size;
    size = v1.size();
    if (v2.size() > v1.size()) size = v2.size();
    std::vector<int> v(size);
    for (int i = 0; i < v1.size(); i++) v[i] += v1[i];
    for (int i = 0; i < v2.size(); i++) v[i] += v2[i];
    return v;
}

std::vector<int> subtract(const std::vector<int> &v1, const std::vector<int> &v2) {
    int size;
    size = v1.size();
    if (v2.size() > v1.size()) size = v2.size();
    std::vector<int> v(size);
    for (int i = 0; i < size; i++) v[i] = v1[i] - v2[i];
    return v;
}

std::vector<int> multiply(const std::vector<int> &v1, int skalar) {
    std::vector<int> v;
    for (int i = 0; i < v1.size(); i++) v.push_back(v1[i] * skalar);
    return v;
}

std::vector<int> randomVector(unsigned int size) {
    std::vector<int> v(size);
    for (int i = 0; i < v.size(); i++) v[i] = rand();
    return v;
}

std::vector<int> randomVector2(unsigned int size) {
    std::vector<int> v(size);
    for (int i = 0; i < v.size(); i++) v[i] = randomInt(-999, 999);
    return v;
}

void writeVector(const std::vector<int> &vec, const std::string &fileName) {
    std::ofstream output;
    output.open(fileName);
    if (output) {
        for (int i = 0; i < vec.size(); i++) {
            output << vec[i];
            if (i < vec.size() - 1) output << " ";
        }
    }
    output.close();
}

std::vector<int> readVector(const std::string &FileName) {
    std::vector<int> v;
    std::ifstream input;
    input.open(FileName);
    if (input) {
        int buffer;
        while (input >> buffer) {
            v.push_back(buffer);
        }
    }
    input.close();
    return v;
}

void bubbleSort(std::vector<int> &v) {
    int n = v.size();
    do {
        int temp;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] > v[i + 1]) {
                temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
            }
        }
        n = n - 1;
    } while (n > 1);
}

using IntMatrix = std::vector<std::vector<int>>;

using DoubleMatrix = std::vector<std::vector<double>>;

IntMatrix createMatrix(int m, int n) {
    std::vector<std::vector<int>> matrix(m, std::vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) matrix[i][j] = 0;
    }
    return matrix;
}

IntMatrix randomMatrix(int m, int n, int min, int max) {
    std::vector<std::vector<int>> matrix(m, std::vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) matrix[i][j] = randomInt(min, max);
    }
    return matrix;
}

DoubleMatrix randomDoubleMatrix(int m, int n) {
    std::vector<std::vector<double>> matrix(m, std::vector<double>(n));
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) matrix[i][j] = rand() % 10 + 1;
    }
    return matrix;
}

IntMatrix add(const IntMatrix &m1, const IntMatrix &m2) {
    std::vector<int> temp;
    IntMatrix m;
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

IntMatrix subtract(const IntMatrix &m1, const IntMatrix &m2) {
    std::vector<int> temp;
    IntMatrix m;
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

IntMatrix multiply(const IntMatrix &m1, const IntMatrix &m2) {
    int result = 0;
    std::vector<int> temp;
    IntMatrix m;
    for (int i = 0; i < m1.size(); i++) {
        for (int j = 0; j < m2[0].size(); j++) {
            for (int k = 0; k < m2.size(); k++) {
                result += m1[i][k] * m2[k][j];
            }
            temp.push_back(result);
            result = 0;
        }
        m.push_back(temp);
        temp.clear();
    }
    return m;
}

void print(const std::vector<std::vector<int>> &matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            std::cout << matrix[i][j];
            if (j < matrix[0].size() - 1) std::cout << "  ";
        }
        if (i < matrix.size() - 1) std::cout << std::endl;
    }
    std::cout << std::endl << std::endl;
}

void printDouble(const std::vector<std::vector<double>> &matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            std::cout << matrix[i][j];
            if (j < matrix[0].size() - 1) std::cout << "  ";
        }
        if (i < matrix.size() - 1) std::cout << std::endl;
    }
    std::cout << std::endl << std::endl;
}

double inv(double x) {
    return 1 / x;
}

double inv_square(double x) {
    return 1 / pow(x, 2);
}

void forEach(std::vector<std::vector<double>> &m, double(&fun)(double)) {
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m[0].size(); j++) {
            m[i][j] = fun(m[i][j]);
        }
    }
}

void zadanie1() {
    std::cout << "Zadanie 1" << std::endl << std::endl;
    std::cout << "Powinna byc uzyta stala referencja" << std::endl << std::endl;
}

void zadanie2() {
    std::cout << "Zadanie 2" << std::endl << std::endl;
    int skalar;
    unsigned int size;
    std::cout << "Podaj rozmiar wektorow: ";
    std::cin >> size;
    std::cout << std::endl;
    std::vector<int> v1 = randomVector(size), v2 = randomVector(size);
    /*std::cout<<"Podaj ilosc elementow w wektorze 1: ";
    std::cin>>n;
    std::cout<<"Podaj ilosc elementow w wektorze 2: ";
    std::cin>>m;
    std::vector<float> v1(n), v2(m);
    for (int i=0; i<v1.size(); i++) {
        std::cout<<"Podaj element "<<i<<" wektora 1: ";
        std::cin>>v1[i];
        if (i==v1.size()-1) std::cout<<std::endl;
    }
    for (int i=0; i<v2.size(); i++) {
        std::cout<<"Podaj element "<<i<<" wektora 2: ";
        std::cin>>v2[i];
        if (i==v2.size()-1) std::cout<<std::endl;

    }*/
    std::cout << "Wektor 1: ";
    print(v1);
    std::cout << "Wektor 2: ";
    print(v2);
    std::cout << std::endl;
    if (equals(v1, v1)) std::cout << "Jeden wektor jest sobie rowny" << std::endl;
    else std::cout << "Jeden wektor nie jest sobie rowny! :O" << std::endl;
    if (equals(v1, v2)) std::cout << "Dwa wektory sa rowne!" << std::endl << std::endl;
    else std::cout << "Dwa wektory nie sa rowne :(" << std::endl << std::endl;
    std::cout << "Wynik dodawania: ";
    print(add(v1, v2));
    std::cout << "Wynik odejmowania: ";
    print(subtract(v1, v2));
    std::cout << std::endl;
    std::cout << "Podaj skalar, przez ktory chcesz przemnozyc wektor: ";
    std::cin >> skalar;
    std::cout << "Wynik mnozenia wektora 1 przez skalar: ";
    print(multiply(v1, skalar));
    std::cout << std::endl;
}

void zadanie3() {
    std::cout << "Zadanie 3" << std::endl << std::endl;
    writeVector(randomVector(100), "wektor");
    std::cout << "Wektor zostal zapisany do pliku 'wektor'" << std::endl << std::endl;

}

void zadanie4() {
    std::cout << "Zadanie 4" << std::endl << std::endl;
    print(readVector("wektor"));
}

void zadanie5() {
    //podawany wektor powinien być przekazywany przez rekurencje
    std::cout << "Zadanie 5" << std::endl << std::endl;
    std::cout << "Podaj dlugosc wektora: ";
    int n;
    std::cin >> n;
    std::cout << std::endl;
    std::vector<int> v = randomVector2(n);
    std::cout << "Nieposortowany: ";
    print(v);
    bubbleSort(v);
    std::cout << "Posortowany: ";
    print(v);
    std::cout << std::endl;
}

void zadanie6() {
    std::cout << "Zadanie 6" << std::endl << std::endl;
    int m, n;
    std::cout << "Podaj wymiary macierzy:" << std::endl << "Ilosc wierszy: ";
    std::cin >> m;
    std::cout << "Ilosc kolumn: ";
    std::cin >> n;
    IntMatrix A = createMatrix(m, n);
    print(A);
    IntMatrix B = randomMatrix(m, n, -10, 10);
    print(B);
}

void zadanie7() {
    std::cout << "Zadanie 7" << std::endl << std::endl;
    int m, n;
    std::cout << "Podaj wymiary macierzy:" << std::endl << "Ilosc wierszy: ";
    std::cin >> m;
    std::cout << "Ilosc kolumn: ";
    std::cin >> n;
    IntMatrix A = randomMatrix(m, n, -16, -4);
    print(A);
    IntMatrix B = randomMatrix(m, n, -16, -4);
    print(B);
    std::cout << "Wynik dodawania macierzy: " << std::endl;
    print(add(A, B));
    std::cout << "Wynik odejmowania macierzy: " << std::endl;
    print(subtract(A, B));
    std::cout << std::endl;
}

void zadanie8() {
    std::cout << "Zadanie 8" << std::endl << std::endl;
    int m, n, p;
    std::cout << "Podaj wymiary macierzy: " << std::endl << "Ilosc wierszy macierzy 1: ";
    std::cin >> m;
    std::cout << "Ilosc kolumn macierzy 1 oraz wierszy macierzy 2: ";
    std::cin >> n;
    std::cout << "Ilosc kolumn macierzy 2: ";
    std::cin >> p;
    IntMatrix A = randomMatrix(m, n, 1, 14);
    print(A);
    IntMatrix B = randomMatrix(n, p, 1, 14);
    print(B);
    std::cout << "Wynik mnozenia macierzy: " << std::endl;
    print(multiply(A, B));
    std::cout << std::endl;
}

void zadanie9() {
    std::cout << "Zadanie 9" << std::endl << std::endl;
    DoubleMatrix m = randomDoubleMatrix(3, 3);
    std::cout << "Macierz 3x3 losowych liczb od 1 do 10: " << std::endl;
    printDouble(m);
    std::cout << "Spierwiastkowane wartosci macierzy: " << std::endl;
    forEach(m, sqrt);
    printDouble(m);
    std::cout << "Odwrocone wartosci poprzedniej macierzy: " << std::endl;
    forEach(m, inv);
    printDouble(m);
    std::cout << "Odwrocone kwadraty wartosci poprzedniej macierzy: " << std::endl;
    forEach(m, inv);
    printDouble(m);
}

int main() {
    std::srand(std::time(NULL));
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