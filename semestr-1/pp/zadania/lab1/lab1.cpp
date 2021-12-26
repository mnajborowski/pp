#include <iostream>
#include <cmath>

using namespace std;

void zadanie1() {
    cout<<"Zadanie 1"<<endl<<endl;
    string imie, nazwisko;
    int wiek;
    cout<<"Podaj imie: ";
    cin>>imie;
    cout<<"Podaj nazwisko: ";
    cin>>nazwisko;
    cout<<"Podaj wiek: ";
    cin>>wiek;
    cout<<endl<<"Twoje imie: "<<imie<<endl;
    cout<<"Twoje nazwisko: "<<nazwisko<<endl;
    cout<<"Twoj wiek: "<<wiek<<endl<<endl;

}
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
}

void zadanie3() {
    cout<<"Zadanie 3"<<endl<<endl;
    int a, b, c;
    cout<<"Podaj dlugosc odcinka a: ";
    cin>>a;
    cout<<"Podaj dlugosc odcinka b: ";
    cin>>b;
    cout<<"Podaj dlugosc odcinka c: ";
    cin>>c;
    cout<<endl;
    if ((a+b)>c && (a+c)>b && (b+c)>a) cout<<"Z odcinkow mozna zbudowac trojkat"<<endl<<endl;
    else cout<<"Z odcinkow nie mozna zbudowac trojkata"<<endl<<endl;
}

void zadanie4() {
    cout<<"Zadanie 4"<<endl<<endl;
    float a, b, c, delta, pierw1, pierw2;
    cout<<"Podaj liczbe rzeczywista a: ";
    cin>>a;
    cout<<"Podaj liczbe rzeczywista b: ";
    cin>>b;
    cout<<"Podaj liczbe rzeczywista c: ";
    cin>>c;
    delta=pow(b,2)-4*a*c;
    //cout<<delta<<endl;
    if (delta<0) cout<<"Rownanie nie ma pierwiastkow rzeczywistych"<<endl<<endl;
    else if (delta==0) {
        pierw1=-b/2*a;
        //cout<<pierw1<<endl;
        cout<<"Rownanie ma jeden pierwiastek rzeczywisty: "<<pierw1<<endl<<endl;
    }
    else if (delta>0) {
        pierw1=(-b-sqrt(delta))/2*a;
        //cout<<pierw1<<endl;
        pierw2=(-b+sqrt(delta))/2*a;
        //cout<<pierw2<<endl;
        cout<<"Rownanie ma dwa pierwiastki rzeczywiste."<<endl<<"Suma pierwiastkow: "<<pierw1+pierw2<<endl<<endl;
    }
}

void zadanie5a() {
    cout<<"Zadanie 5a"<<endl<<endl;
    int i, n, a;
    int tab[20];
    for (i=0; i<20; i++) {
        cout<<"Podaj liczbe calkowita nr "<<i+1<<":";
        cin>>tab[i];
    }
    n=abs(tab[0]);
    for (i=0; i<20; i++) {
        if (abs(tab[i])<n) {
            n = abs(tab[i]);
            a=i;
        }
    }
    cout<<"Liczba najblizej zera: "<<tab[a]<<endl<<endl;
}

void zadanie5b() {
    cout<<"Zadanie 5b"<<endl<<endl;
    int ile, n;
    cout<<"Ile liczb chcesz podac?"<<endl;
    cin>>ile;
    int tab[ile];
    for (int i=0; i<ile; i++) {
        cout << "Podaj liczbe nr: " << i + 1<<endl;
        cin>>tab[i];
    }
    n=tab[0];
    for (int i=0; i<ile; i++) {
        if (tab[i]>n) n=tab[i];
    }
    cout<<"Najwieksza liczba: "<<n<<endl<<endl;
}

int main() {
    zadanie1();
    zadanie2();
    zadanie3();
    zadanie4();
    zadanie5a();
    zadanie5b();
    return 0;
}