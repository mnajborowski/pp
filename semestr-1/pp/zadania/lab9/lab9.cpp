#include "bst.h"

int main() {
    int x;
    std::unique_ptr<BstNode> bst;
    do {
        std::cout<<"1. Wyswietl drzewo BST [Zadanie 2]"<<std::endl;
        std::cout<<"2. Dodaj nowa liczbe do drzewa BST [Zadanie 3]"<<std::endl;
        std::cout<<"3. Dodaj 3 liczby, wykorzystujac przeciazenie operatora '<<' [Zadanie 4]"<<std::endl;
        std::cout<<"4. Wyswietl najmniejsza wartosc przechowywana na drzewie [Zadanie 5]"<<std::endl;
        std::cout<<"5. Wyswietl najwieksza wartosc przechowywana na drzewie [Zadanie 5]"<<std::endl;
        std::cout<<"6. Sprawdz, czy podana wartosc jest na drzewie [Zadanie 6]"<<std::endl;
        std::cout<<"7. Sprawdz ile elementow znajduje sie na drzewie [Zadanie 7]"<<std::endl;
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
                int a;
                std::cout<<"Podaj liczbe, ktora chcesz dodac: ";
                std::cin>>a;
                addToTree(bst, a);
                break;
            }
            case 3: {
                int a;
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
                int a;
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
            case 8: {
                unsigned int x;
                std::cin>>x;
                std::cout<<"Suma elementow: "<<sumLessThan(bst.get(), x)<<std::endl;
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
    return 0;
}