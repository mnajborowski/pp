#include <iostream>
#include <cmath>

using namespace std;

bool triangleExists(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) return true;
    else return false;
}

float triangleArea(float a, float b, float c) {
    float p, pole;
    p = (a + b + c) / 2;
    pole = sqrt(p * (p - a) * (p - b) * (p - c));
    return pole;
}

float toDegree(float rad) {
    float kat;
    kat = rad * 180 / 3.1415;
    return kat;
}

double calculateAngle(double a, double b, double c) {
    double cos, kat;
    cos = (pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b);
    kat = acos(cos);
    kat = kat * 180 / 3.1415;
    return kat;
}

int recursiveFactorial(int n) {
    if (n == 0) return 1;
    return n * recursiveFactorial(n - 1);
}

int iterativeFactorial(int n) {
    int x = 1;
    for (int i=1; i<=n; i++) x *= i;
    return x;
}

long long recursiveFibonnaci (int zakres) {
    if (zakres<3) return 1;
    return recursiveFibonnaci(zakres-2)+recursiveFibonnaci(zakres-1);
}
long long iterativeFibonnaci (int zakres) {
    long long a=0, b=1;
    if (zakres<3) return 1;
    for (int i=1; i<zakres; i++) {
        b=b+a;
        a=b-a;
    }
    return b;
}

int main() {
    int x;
    do {
        cout << "Wybierz zadanie (1-6)(0 = wyjscie): ";
        cin >> x;
        switch (x) {
            case 1: {
                cout << "Zadanie 1" << endl << endl;
                float a, b, c;
                cout << "Podaj dlugosc bokow: " << endl;
                cin >> a >> b >> c;
                if (triangleExists(a, b, c)) cout << "Trojkat istnieje!" << endl;
                else cout << "Trojkat nieistnieje" << endl;
                cout << "Pole tego trojkata jest rowne " << triangleArea(a, b, c) << endl;
                break;
            }
            case 2: {
                float rad;
                cout << "Zadanie 2" << endl << endl;
                cout << "Podaj wartosc kata w radianach: ";
                cin >> rad;
                cout << "Wartosc kata w stopniach: " << toDegree(rad) << endl;
                break;
            }
            case 3: {
                cout << "Zadanie 3" << endl << endl;
                float a, b, c;
                cout << "Podaj dlugosc bokow: " << endl;
                cin >> a >> b >> c;
                cout << "Kat miedzy a i b: " << calculateAngle(a, b, c) << endl;
                cout << "Kat miedzy b i c: " << calculateAngle(b, c, a) << endl;
                cout << "Kat miedzy a i c: " << calculateAngle(a, c, b) << endl;
                break;
            }
            case 4: {
                cout << "Zadanie 4" << endl << endl;
                int n;
                cout << "Podaj liczbe: ";
                cin >> n;
                cout << "Wersja recursive: n! = " << recursiveFactorial(n) << endl;
                cout << "Wersja iterative: n! = " << iterativeFactorial(n) << endl << endl; //Wyniki są takie same.
                break;
            }
            case 5: {
                cout<<"Zadanie 5"<<endl<<endl;
                int zakres, i=1;
                cout<<"Podaj numer wyrazu ciagu Fibonnaciego, ktory chcesz wyswietlic: ";
                cin>>zakres;
                cout<<"Wyraz ciagu Fibonnaciego o numerze "<<zakres<<" wynosi: "<<recursiveFibonnaci(zakres)<<endl;
                cout<<"Wyrazy ciagu mniejsze od 300: "<<endl;
                while (recursiveFibonnaci(i)<300) {
                    cout<<recursiveFibonnaci(i)<<endl;
                    i++;
                }
                cout<<endl<<endl;
                break;
            }
            case 6: {
                cout<<"Zadanie 6"<<endl<<endl;
                int zakres;
                cout<<"Podaj numer wyrazu ciagu Fibonnaciego, ktory chcesz wyswietlic: ";
                cin>>zakres;
                cout<<"Wyraz ciagu Fibonnaciego o numerze "<<zakres<<" wynosi: "<<iterativeFibonnaci(zakres)<<endl<<endl;
                // Czas wykonywania funkcji w wersji iteracyjnej jest znacznie krotszy.
            }
        }
    } while (x != 0);
    return 0;
}