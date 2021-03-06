// lab3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Figures.h"

void zadanie1() {
	//a)
	std::cout << "Zadanie 1" << std::endl << std::endl;
	//Shape k1("ksztalt");
	Rectangle p1("prostokat", 10, 5);
	Square kw1("kwadrat", 5);
	//std::cout << "Pole ksztaltu: " << k1.area() << std::endl;
	std::cout << "Pole prostokata: " << p1.area() << std::endl;
	std::cout << "Pole kwadratu: " << kw1.area() << std::endl;
	std::cout << std::endl;
	//b)
	Shape &k2 = p1;
	Rectangle &p2 = kw1;
	Shape &k3 = kw1;
	std::cout << "Pole prostokata zarzutowanego na ksztalt (referencja): " << k2.area() << std::endl;
	std::cout << "Pole kwadratu zarzutowanego na prostokat (referencja): " << p2.area() << std::endl;
	std::cout << "Pole kwadratu zarzutowanego na ksztalt (referencja): " << k3.area() << std::endl;
	std::cout << std::endl;
	//c)
	Shape *k2_ptr = &p1;
	Rectangle *p2_ptr = &kw1;
	Shape *k3_ptr = &kw1;
	std::cout << "Pole prostokata zarzutowanego na ksztalt (wskaznik): " << k2_ptr->area() << std::endl;
	std::cout << "Pole kwadratu zarzutowanego na prostokat (wskaznik): " << p2_ptr->area() << std::endl;
	std::cout << "Pole kwadratu zarzutowanego na ksztalt (wskaznik): " << k3_ptr->area() << std::endl;
	std::cout << std::endl;
	//d) nie mozna utworzyc obiektow klasy ktore maja metode czysto wirtualna
	//e) nie moge zarzutowac obiektu klasy Square na klasy wyrzej w hierarchii
}

void zadanie2() {
	std::cout << "Zadanie 2" << std::endl << std::endl;
	Cylinder c1(10, 2);
	std::cout << "Pole cylindra: " << c1.area() << std::endl;
	std::cout << "Objetosc cylindra: " << c1.volume() << std::endl;
}

int main() {
	int x;
	do {
		std::cout << "Ktore zadanie chcesz wykonac (1-2)(0 = wyjscie): ";
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
		}
	} while (x != 0);
	return 0;
}

