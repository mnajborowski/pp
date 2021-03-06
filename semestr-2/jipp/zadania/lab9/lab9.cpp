// lab9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Osoba.h"
#include "Pojazd.h"
#include "Pracownik.h"

void zadanie1() {
	std::cout << "Zadanie 1" << std::endl << std::endl;
	try {
		Osoba o1(97042909097, "Michal", "Najborowski");
		std::cout << o1.imie << " " << o1.nazwisko << ", " << o1.pesel << std::endl;
	}
	catch (std::domain_error &e) {
		std::cout << e.what() << std::endl;
	}
}

void zadanie2() {
	std::cout << "Zadanie 2" << std::endl << std::endl;
	Rower *r1 = new Rower("goral");
	try {
		r1->jedz(5);
	}
	catch (std::runtime_error &e) {
		std::cout << e.what() << std::endl;
	}
	Samochod *s1 = new Samochod("fiat", 20);
	try {
		s1->jedz(30);
	}
	catch (std::runtime_error &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		s1->zatankuj(20);
		s1->jedz(30);
	}
	catch (std::runtime_error &e) {
		std::cout << e.what() << std::endl;
	}
	delete r1;
	delete s1;
}

void zadanie4() {
	std::cout << "Zadanie 4" << std::endl << std::endl;
	Firma f;
	PracownikEtatowy* p1 = new PracownikEtatowy("", "", "", 100);
	PracownikEtatowy* p2 = new PracownikEtatowy("", "", "", 200);
	std::cout << "Zarabia: " << p1->obliczWynagrodzenieMiesieczne() << std::endl;
	f.dodaj(p1);
	f.dodaj(p2);
	f.wyswietl();
	delete p1;
	delete p2;
}

int main()
{
	int x;
	do {
		std::cout << "Ktore zadanie chcesz wykonac (0 = wyjscie): ";
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
		case 4: {
			zadanie4();
			break;
		}
		}
	} while (x != 0);
    return 0;
}

