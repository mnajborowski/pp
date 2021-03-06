// lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "VerboseObject.h"
#include "BinomialSolver.h"
#include "Complex.h"

void zadanie1() {
	std::cout << "Zadanie 1" << std::endl << std::endl;
	static VerboseObject o1("Object 1");
	o1.metoda();
	std::cout << std::endl;
	std::unique_ptr<VerboseObject> o2 = std::make_unique<VerboseObject>("Object 2");
	o2->metoda();
	std::cout << std::endl;
	VerboseObject *v3 = new VerboseObject("Object 3");
	v3->metoda();
	delete v3;
	//kolejnosc wywolywania destruktorow obiektow utworzonych automatycznie jest inna niz w przypadku utworzonych recznie
}

void zadanie2() {
	std::cout << "Zadanie 2" << std::endl << std::endl;
	BinomialSolver b1(1, -5, 4);
	std::cout << "Pierwiastki rownania x^2 - 5x + 4 = 0: " << std::endl;
	std::cout << "x1 = " << b1.getX1() << std::endl << "x2 = " << b1.getX2() << std::endl;
	std::cout << "Wartosc wielomianu x^2 - 5x + 4 dla x = 3: " << b1.calculate(3) << std::endl;
	std::cout << std::endl;
}

void zadanie3() {
	std::cout << "Zadanie 3" << std::endl << std::endl;
	std::vector<Complex> v = read("zespolone.txt");
	for (int i = 0; i < v.size(); i++) std::cout << v[i] << std::endl;
	Complex suma, iloczyn, maxComplex;
	double maxModul = 0;
	suma = v[0];
	iloczyn = v[0];
	for (int i = 1; i < v.size(); i++) {
		suma = suma + v[i];
	}
	for (int i = 1; i < v.size(); i++) {
		iloczyn = iloczyn * v[i];
	}
	for (int i = 0; i < v.size(); i++) {
		if (maxModul < modul(v[i])) {
			maxModul = modul(v[i]);
			maxComplex = v[i];
		}
	}
	std::cout << "Suma liczb zespolonych z pliku wejsciowego: " << suma << std::endl;
	std::cout << "Iloczyn liczb zespolonych z pliku wejsciowego: " << iloczyn << std::endl;
	std::cout << "Liczba zespolona, ktora ma najwiekszy modul: " << maxComplex << std::endl;
	std::cout << std::endl;
}

int main() {
	int x;
	do {
		std::cout << "Ktore zadanie chcesz wykonac (1-3)(0 = wyjscie): ";
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
		}
	} while (x != 0);
	return 0;
}


