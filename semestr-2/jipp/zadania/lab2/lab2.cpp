// lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TimeSpan.h"
#include "BazaStudentow.h"

void zadanie1() {
	std::cout << "Zadanie 1" << std::endl << std::endl;
	unsigned int seconds;
	std::cout << "Podaj liczbe sekund: ";
	std::cin >> seconds;
	TimeSpan ts(seconds);
	ts.print();
	std::cout << std::endl;
}

void zadanie2() {
	int x;
	std::vector<Student> v;
	do {
		system("CLS");
		std::cout << "Zadanie 2 - BAZA STUDENTOW" << std::endl << std::endl;
		std::cout << "1. Dodaj nowego studenta" << std::endl;
		std::cout << "2. Drukuj liste studentow" << std::endl;
		std::cout << "3. Wyszukaj studentow o podanym numerze indeksu" << std::endl;
		std::cout << "4. Usun studentow o podanym numerze indeksu" << std::endl;
		std::cout << "5. Zapis bazy do pliku" << std::endl;
		std::cout << "6. Odczyt bazy z pliku" << std::endl;
		std::cout << "7. Wyczysc baze" << std::endl;
		std::cout << "0. Wyjscie" << std::endl;
		std::cout << "Co chcesz zrobic: ";
		std::cin >> x;
		switch (x) {
		case 1: {
			dodajStudenta(v);
			break;
		}
		case 2: {
			drukuj(v);
			break;
		}
		case 3: {
			szukaj(v);
			break;
		}
		case 4: {
			usun(v);
			break;
		}
		case 5: {
			zapis(v, "BazaStudentow.txt");
			break;
		}
		case 6: {
			v = odczyt("BazaStudentow.txt");
			break;
		}
		case 7: {
			wyczysc(v);
			break;
		}
		}
		if (x != 0) {
			std::cout << "Wcisnij ENTER";
			std::cin.ignore();
			std::cin.get();
		}
	} while (x != 0);
	system("CLS");
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

