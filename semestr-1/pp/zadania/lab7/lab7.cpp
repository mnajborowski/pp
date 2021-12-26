#include <iostream>
#include <vector>
#include <random>
#include <fstream>
#include "complex.h"

float random() {
    static std::default_random_engine e{};
    std::uniform_real_distribution<float> d;
    return d(e);
}

std::vector<float> randomVector(unsigned int size) {
    std::vector<float> v(size);
    for (int i = 0; i < v.size(); i++) v[i] = random();
    return v;
}

void writeVector(const std::vector<float> &vec, const std::string &fileName) {
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

std::vector<float> readVector(const std::string &fileName) {
    std::vector<float> v;
    std::ifstream input;
    input.open(fileName);
    if (input) {
        float buffer;
        while (input >> buffer) {
            v.push_back(buffer);
        }
    }
    input.close();
    return v;
}

void binaryWrite(std::vector<float> &vec, const std::string &fileName) {
    std::ofstream output;
    output.open(fileName, std::ios::binary);
    if (output) {
        for (int i = 0; i < vec.size(); i++) output.write(reinterpret_cast<char *> (&vec[i]), sizeof(vec[i]));
    }
    output.close();
}

std::vector<int> intBinaryRead(const std::string &fileName) {
    std::vector<int> v;
    std::ifstream input;
    input.open(fileName, std::ios::binary);
    if (input) {
        int i;
        while (input.read(reinterpret_cast<char *> (&i), sizeof(i))) {
            v.push_back(i);
        }
    }
    input.close();
    return v;
}

std::vector<float> floatBinaryRead(const std::string &fileName) {
    std::vector<float> v;
    std::ifstream input;
    input.open(fileName, std::ios::binary);
    if (input) {
        float i;
        while (input.read(reinterpret_cast<char *> (&i), sizeof(i))) {
            v.push_back(i);
        }
    }
    input.close();
    return v;
}

void printInt(std::vector<int> v) {
    std::cout << "[";
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i];
        if (i < v.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl << std::endl;
}

void printFloat(std::vector<float> v) {
    std::cout << "[";
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i];
        if (i < v.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl << std::endl;
}

void zadanie1() {
    std::cout << "Zadanie 1" << std::endl << std::endl;
    int n;
    std::cout << "Podaj ilosc liczb pseudolosowych w wektorze: ";
    std::cin >> n;
    std::vector<float> v = randomVector(n);
    writeVector(v, "tekstowy.txt");
    binaryWrite(v, "binarny.txt");
    std::cout << std::endl << std::endl;
    //wektor zapisany w trybie binarnym zajmuje mniej miejsca niz w trybie tekstowym, pliku binarnego nie da sie odczytac w notatniku
}

void zadanie2() {
    std::cout << "Zadanie 2" << std::endl << std::endl;
    std::vector<int> v1;
    std::vector<float> v2;
    v1 = intBinaryRead("binarny.txt");
    v2 = floatBinaryRead("binarny.txt");
    std::cout << "Wektor liczb calkowitych: ";
    printInt(v1);
    std::cout << "Wektor liczb zmiennoprzecinkowych: ";
    printFloat(v2);
    /*v1 = intBinaryRead("tekstowy.txt");
    v2 = floatBinaryRead("tekstowy.txt");
    std::cout<<"Wektor liczb calkowitych: ";
    printInt(v1);
    std::cout<<"Wektor liczb zmiennoprzecinkowych: ";
    printFloat(v2);*/
    //jesli wten sam sposob wczyta sie plik tekstowy, liczby w wektorze nie beda poprawne
}

void zadanie3() {
    std::cout << "Zadanie 3" << std::endl << std::endl;
    Complex z1, z2, z3;
    std::cout << "Podaj czesc rzeczywista pierwszej liczby zespolonej: ";
    std::cin >> z1.a;
    std::cout << "Podaj czesc urojona pierwszej liczby zespolonej: ";
    std::cin >> z1.b;
    std::cout << "Podaj czesc rzeczywista drugiej liczby zespolonej: ";
    std::cin >> z2.a;
    std::cout << "Podaj czesc urojona drugiej liczby zespolonej: ";
    std::cin >> z2.b;
    std::cout << std::endl;
    z3 = add(z1, z2);
    std::cout << "Suma liczb: " << z3.a << " + " << z3.b << "i" << std::endl;
    z3 = subtract(z1, z2);
    std::cout << "Roznica liczb: " << z3.a << " + " << z3.b << "i" << std::endl;
    z3 = multiply(z1, z2);
    std::cout << "Iloczyn liczb: " << z3.a << " + " << z3.b << "i" << std::endl;
    if (equals(z1, z2)) std::cout << "Liczby sa takie same.";
    else std::cout << "Liczby sa rozne.";
    std::cout << std::endl << std::endl;
}

void zadanie4() {
    std::cout << "Zadanie 4" << std::endl << std::endl;
    std::vector<Complex> v(10);
    for (int i = 0; i < v.size(); i++) {
        std::cout << "Podaj czesc rzeczywista liczby zespolonej nr " << i + 1 << ": ";
        std::cin >> v[i].a;
        std::cout << "Podaj czesc urojona liczby zespolonej nr " << i + 1 << ": ";
        std::cin >> v[i].b;
    }
    std::ofstream output;
    output.open("10zespolonych.txt", std::ios::binary);
    if (output) {
        for (int i = 0; i < v.size(); i++) {
            output.write(reinterpret_cast<char *> (&v[i]), sizeof(v[i]));
        }
    }
    output.close();
    std::cout << std::endl << std::endl;
}

void zadanie5() {
    std::cout << "Zadanie 5" << std::endl << std::endl;
    std::vector<Complex> v;
    std::ifstream input;
    input.open("10zespolonych.txt", std::ios::binary);
    if (input) {
        Complex i;
        while (input.read(reinterpret_cast<char *> (&i), sizeof(i))) {
            v.push_back(i);
        }
    }
    input.close();
    for (int i = 0; i < v.size(); i++) {
        std::cout << "Liczba zespolona nr " << i + 1 << ": " << v[i].a << " + " << v[i].b << "i" << std::endl;
    }
    std::cout << std::endl << std::endl;
}


int main() {
    int x;
    do {
        std::cout << "Jakie zadanie chcesz wykonac (1-5)(0 = wyjscie): ";
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
        }
    } while (x != 0);
    return 0;
}