#include <iostream>
#include <cmath>

using namespace std;

void zadanie2() {
    cout<<"Zadanie 2"<<endl<<endl;
    int a, b;
    cout<<"Podaj liczbe calkowita a: ";
    cin>>a;
    cout<<"Podaj liczbe calkowita b: ";
    cin>>b;
    cout<<endl<<"Suma a i b: "<<a+b<<endl;
    cout<<"Roznica a i b: "<<a-b<<endl;
    cout<<"Iloczyn a i b: "<<a*b<<endl;
    cout<<"Iloraz a i b: "<<a/b<<endl<<endl;
    float c,d;
    cout<<"Podaj liczbe zmiennoprzecinkowa a: ";
    cin>>c;
    cout<<"Podaj liczbe zmiennoprzecinkowa b: ";
    cin>>d;
    cout<<endl<<"Suma a i b: "<<c+d<<endl;
    cout<<"Roznica a i b: "<<c-d<<endl;
    cout<<"Iloczyn a i b: "<<c*d<<endl;
    cout<<"Iloraz a i b: "<<c/d<<endl<<endl;
    cout<<"Iloraz a i b, gdy zarzutuje sie liczbe a na typ zmiennoprzecinkowy: "<<static_cast<float>(a)/b<<endl<<endl;
    cout<<"Iloraz a i b, gdy zarzutuje sie liczbe a i b na typ zmiennoprzecinkowy: "<<static_cast<float>(a)/static_cast<float>(b)<<endl<<endl;
    cout<<"W obu przypadkach wynik jest ten sam."<<endl<<endl;
}

void zadanie3() {
    cout<<"Zadanie 3"<<endl<<endl;
    cout<<"Rozmiar int: "<<sizeof(int)<<endl;
    cout<<"Rozmiar float: "<<sizeof(float)<<endl;
    cout<<"Rozmiar bool: "<<sizeof(bool)<<endl;
    cout<<"Rozmiar char: "<<sizeof(char)<<endl;
    cout<<"Rozmiar short: "<<sizeof(short)<<endl;
    cout<<"Rozmiar double: "<<sizeof(double)<<endl;
    cout<<"Rozmiar long int: "<<sizeof(int)<<endl;
    cout<<"Rozmiar long float: "<<sizeof(float)<<endl;
    cout<<"Rozmiar long bool: "<<sizeof(bool)<<endl;
    cout<<"Rozmiar long char: "<<sizeof(char)<<endl;
    cout<<"Rozmiar long short: "<<sizeof(short)<<endl;
    cout<<"Rozmiar long double: "<<sizeof(double)<<endl;
    cout<<"Rozmiar short int: "<<sizeof(int)<<endl;
    cout<<"Rozmiar short float: "<<sizeof(float)<<endl;
    cout<<"Rozmiar short bool: "<<sizeof(bool)<<endl;
    cout<<"Rozmiar short char: "<<sizeof(char)<<endl;
    cout<<"Rozmiar short short: "<<sizeof(short)<<endl;
    cout<<"Rozmiar short double: "<<sizeof(double)<<endl;
    cout<<"Rozmiar unsigned int: "<<sizeof(int)<<endl;
    cout<<"Rozmiar unsigned float: "<<sizeof(float)<<endl;
    cout<<"Rozmiar unsigned bool: "<<sizeof(bool)<<endl;
    cout<<"Rozmiar unsigned char: "<<sizeof(char)<<endl;
    cout<<"Rozmiar unsigned short: "<<sizeof(short)<<endl;
    cout<<"Rozmiar unsigned double: "<<sizeof(double)<<endl;
    cout<<"Rozmiar signed int: "<<sizeof(int)<<endl;
    cout<<"Rozmiar signed float: "<<sizeof(float)<<endl;
    cout<<"Rozmiar signed bool: "<<sizeof(bool)<<endl;
    cout<<"Rozmiar signed char: "<<sizeof(char)<<endl;
    cout<<"Rozmiar signed short: "<<sizeof(short)<<endl;
    cout<<"Rozmiar signed double: "<<sizeof(double)<<endl<<endl;
}

void zadanie4() {
    float x;

    cout<<"Zadanie 4"<<endl<<endl;
    cout<<"Podaj liczbe zmiennoprzecinkowa: ";
    cin>>x;
    cout<<"Domyslna dokladnosc: "<<x<<endl;
    cout<<"Notacja naukowa: "<<std::scientific<<x<<endl;
    cout<<"Notacja naukowa: "<<std::hexfloat<<x<<endl;
    //cout<<"Notacja naukowa: "<<std::ios_base::precision<<x<<endl;
    //cout<<"Notacja naukowa: "<<std::scientific<<std::ios_base::precision<<x<<endl;
}

void zadanie5() {
    cout<<"Zadanie 5"<<endl<<endl;
    int x, a, b;
    do {
        cout<<"1. Dodawanie"<<endl;
        cout<<"2. Odejmowanie"<<endl;
        cout<<"3. Mnozenie"<<endl;
        cout<<"4. Dzielenie"<<endl;
        cout<<"0. Wyjscie"<<endl;
        cout<<"Co chcesz zrobic (1-4)(0 = wyjscie): ";
        cin>>x;
        switch (x) {
            case 1: {
                cout<<"Podaj liczbe a: ";
                cin>>a;
                cout<<"Podaj liczbe b: ";
                cin>>b;
                cout<<"a + b = "<<a+b<<endl<<endl;
                break;
            }
            case 2: {
                cout<<"Podaj liczbe a: ";
                cin>>a;
                cout<<"Podaj liczbe b: ";
                cin>>b;
                cout<<"a - b = "<<a-b<<endl<<endl;
                break;
            }
            case 3: {
                cout<<"Podaj liczbe a: ";
                cin>>a;
                cout<<"Podaj liczbe b: ";
                cin>>b;
                cout<<"a * b = "<<a*b<<endl<<endl;
                break;
            }
            case 4: {
                cout<<"Podaj liczbe a: ";
                cin>>a;
                cout<<"Podaj liczbe b: ";
                cin>>b;
                cout<<"a / b = "<<a/b<<endl<<endl;
                break;
            }
            case 0: {
                break;
            }
        }
    } while (x!=0);
}

void zadanie6() {
    cout<<"Zadanie 6"<<endl<<endl;
    int x;
    cout<<"Podaj liczbe calkowita: ";
    cin>>x;
    cout<<"Pre i postinkrementacja: "<<++x<<"\t"<<x++<<endl;
    cout<<"Pre i postdekrementacja: "<<--x<<"\t"<<x--<<endl<<endl;
}

void zadanie7() {
    cout<<"Zadanie 7"<<endl<<endl;
    int i;
    cout<<"Petla for"<<endl<<endl;
    for (i=0; i<100; i++) cout<<i+1<<" ";
    cout<<endl<<endl<<"Petla while"<<endl<<endl;
    i=0;
    while (i<100) {cout<<i+1<<" "; i++;}
    cout<<endl<<endl<<"Petla do while"<<endl<<endl;
    i=0;
    do {
        cout<<i+1<<" ";
        i++;
    } while (i<100);
    cout<<endl<<endl;
}

void zadanie8() {
    cout<<"Zadanie 8"<<endl<<endl;
    cout<<"Liczby od 1 do 500 podzielne przez 7:"<<endl<<endl;
    for (int i=1; i<=500; i++)
    {
        if ((i%7)==0) cout<<i<<endl;
    }
    cout<<endl;
}

void zadanie9() {
    cout<<"Zadanie 9"<<endl<<endl;
    float a=0, b=0;
    cout<<"Od 1 do 10000: "<<endl;
    for (int i=0; i<10000; i++) {
        a=a+(1/pow(i, 2));
    }
    cout<<a<<endl<<endl;
    cout<<"Od 10000 do 1: "<<endl;
    for (int i=10000; i>0; i--) {
        b=b+(1/pow(i, 2));
    }
    cout<<b<<endl<<endl;
    cout<<"Te liczby nie sa takie same"<<endl<<endl;
}

void zadanie10() {
    cout<<"Zadanie 10"<<endl<<endl;
    float a=0;
    for (int i=0;i<100000;i++) a=a+(pow(-1, i)/(2*i+1));
    a=a*4;
    cout<<"Ta liczba wynosi: "<<a<<". Jest to liczba Pi"<<endl<<endl;

}

int main() {
    int x;
    do {
        cout<<"Jakie zadanie chcesz wykonac (2-10)(0 = wyjscie): ";
        cin >> x;
        switch (x) {
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
            case 10: {
                zadanie10();
                break;
            }
            case 0: {
                break;
            }
        }
    } while (x!=0);
    return 0;
}