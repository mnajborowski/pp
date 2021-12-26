#include <iostream>
#include <vector>
#include <random>

struct Statystyki {
    double srednia;
    double suma;
    double max;
    double min;

    void statystyki(double *liczby, int n);
};

int randomInt(int min, int max) {
    static std::default_random_engine e{};
    std::uniform_int_distribution<int> d(min, max);
    return d(e);
}

int* randomVector(int n) {
    int *v = new int[n];
    for (int i=0; i<n; i++) v[i] = randomInt(3, 27);
    return v;
}

int* skalarny(int *v1, int *v2, int n) {
    int *v = new int[n];
    for (int i=0; i<n; i++) v[i] = v1[i] * v2[i];
    return v;
}

void printVector(int *v, int n) {
    std::cout<<"[";
    for (int i=0; i<n; i++) {
        std::cout << v[i];
        if (i<n-1) std::cout<<", ";
    }
    std::cout<<"]";
}

double* liczby(int n) {
    double *liczby = new double[n];
    for (int i=0; i<n; i++) {
        std::cout<<"Podaj liczbe zmiennoprzecinkowa nr "<<i<<": ";
        std::cin>>liczby[i];
    }
    return liczby;
}

Statystyki *statystyki(double *liczby, int n) {
    double temp = 0;
    Statystyki *stats = new Statystyki();
    for (int i=0; i<n; i++) temp = temp + liczby[i];
    stats->srednia = temp/n;
    stats->suma = temp;
    stats->max = liczby[0];
    stats->min = liczby[0];
    for (int i=0; i<n; i++) {
        if (stats->max>liczby[i]) stats->max = liczby[i];
        if (stats->min<liczby[i]) stats->min = liczby[i];
    }
    return stats;
}

void printStats(Statystyki *stats) {
    std::cout<<"Srednia: "<<stats->srednia<<std::endl;
    std::cout<<"Suma: "<<stats->suma<<std::endl;
    std::cout<<"Maksimum: "<<stats->max<<std::endl;
    std::cout<<"Minimum: "<<stats->min<<std::endl;
}

int** randomMatrix(int m, int n) {
    int **matrix = new int*[m];
    for (int i=0; i<m; i++) matrix[i] = new int[m];
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            matrix[i][j] = randomInt(-16, -4);
        }
    }
}

int** add(int** m1, int** m2, int m, int n) {
    int **wynik = new int*[m];
    for (int i=0; i<m; i++) wynik[i] = new int[m];
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            wynik[i][j] = m1[i][j] + m2[i][j];
        }
    }
    return wynik;
}

int** subtract(int** m1, int** m2, int m, int n) {
    int **wynik = new int*[m];
    for (int i=0; i<m; i++) wynik[i] = new int[m];
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            wynik[i][j] = m1[i][j] - m2[i][j];
        }
    }
    return wynik;
}

int** multiply(int** &m1, int** &m2, int m, int n, int p) {
    int result = 0;
    int** matrix = new int*[m];
    for (int i=0; i<m; i++) matrix[i] = new int[n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                result += m1[i][k] * m2[k][j];
            }
            matrix[i][j] = result;
            result = 0;
        }
    }
    return matrix;
}

void printMatrix(int** matrix, int m, int n) {
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            std::cout<<matrix[i][j];
            if (j<n-1) std::cout<<"  ";
        }
        if (i<m-1) std::cout<<std::endl;
    }
}

void zadanie1() {
    std::cout<<"Zadanie 1"<<std::endl<<std::endl;
    int *v1;
    int *v2;
    int *wynik;
    int n;
    std::cout<<"Podaj dlugosc wektorow: ";
    std::cin>>n;
    v1 = randomVector(n);
    v2 = randomVector(n);
    std::cout<<"Wektor 1: ";
    printVector(v1, n);
    std::cout<<std::endl;
    std::cout<<"Wektor 2: ";
    printVector(v2, n);
    std::cout<<std::endl;
    wynik = skalarny(v1, v2, n);
    std::cout<<"Iloczyn skalarny: ";
    printVector(wynik, n);
    std::cout<<std::endl<<std::endl;
    delete[] v1;
    delete[] v2;
    delete[] wynik;
}

void zadanie2() {
    std::cout<<"Zadanie 2"<<std::endl<<std::endl;
    Statystyki *stats;
    int n;
    double *numbers;
    std::cout<<"Podaj ilosc liczb zmiennoprzecinkowych: ";
    std::cin>>n;
    numbers = liczby(n);
    stats = statystyki(numbers, n);
    printStats(stats);
    delete stats;
    delete[] numbers;
}

void zadanie3() {
    std::cout<<"Zadanie 3"<<std::endl<<std::endl;
    int** m1;
    int** m2;
    int m, n;
    std::cout<<"Podaj wymiary macierzy"<<std::endl;
    std::cout<<"Ilosc rzedow: ";
    std::cin>>m;
    std::cout<<"Ilosc kolumn: ";
    std::cin>>n;
    m1 = randomMatrix(m, n);
    m2 = randomMatrix(m, n);
    printMatrix(m1, m, n);
    std::cout<<std::endl;
    printMatrix(m2, m, n);
    std::cout<<std::endl;
    std::cout<<"Wynik dodawania maierzy: "<<std::endl;
    printMatrix(add(m1, m2, m, n), m, n);
    std::cout<<std::endl;
    std::cout<<"Wynik odejmowania macierzy: "<<std::endl;
    printMatrix(subtract(m1, m2, m, n), m, n);
    std::cout<<std::endl;

}

int main() {
    int x;
    do {
        std::cout << "Jakie zadnaie chcesz wykonac (1-4)(0 = wyjscie): ";
        std::cin >> x;
        switch (x) {
            case 1: {
                zadanie1();
            }
            case 2: {
                zadanie2();
            }
            case 3: {
                zadanie3();
            }
        }
    } while (x!=0);
    return 0;
}