// lab6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Vector.h"
#include "BinomialSolver.h"
using namespace std;

void zadanie1() {
	std::cout << "Zadanie 1" << std::endl << std::endl;
	srand(time(nullptr));
	int n;
	cout << "Podaj rozmiar wektora V1: ";
	cin >> n;
	try {
		Vector<int> v1(n);
		for (int i = 0; i < n; i++)
			v1[i] = rand() % 100;
		cout << "V1: " << v1 << endl << endl;
		cout << "Ktory element V1 chcesz wyswietlic? (od 0 do " << (n - 1) << "): ";
		cin >> n;
		cout << n << "-ty element V1 to: " << v1[n] << endl << endl;
		cout << "Podaj rozmiar wektora V2: ";
		cin >> n;
		Vector<int> v2(n);
		for (int i = 0; i < n; i++)
			v2[i] = rand() % 100;
		cout << "V2: " << v2 << endl << endl;
		cout << "V1 + V2: " << (v1 + v2) << endl;
		cout << "V1 - V2: " << (v1 - v2) << endl;
		std::cout << "Wcisnij ENTER" << std::endl;
		std::cin.get();
	}
	catch (domain_error& e) {
		cout << "Domain error" << endl;
	}
	catch (out_of_range& e) {
		cout << "Out of range" << endl;
	}
	catch (...) {
		cout << "Error." << endl;
	}
}

void zadanie2() {
	std::cout << "Zadanie 2" << std::endl << std::endl;
	try {
		BinomialSolver b1(1.0, 5.0, 3.0);
		cout << "Pierwiastki rownania x^2 + 5x + 3 = 0 to: " << endl;
		cout << "x1 = " << b1.getX1() << ", x2 = " << b1.getX2() << endl;

		BinomialSolver b2(1.0, 2.0, 1.0);
		cout << "Pierwiastki rownania x^2 + 2x + 1 = 0 to: " << endl;
		cout << "x1 = " << b2.getX1() << ", x2 = " << b2.getX2() << endl;

		BinomialSolver b3(6.0, 3.0, 9.0);
		cout << "Pierwiastki rownania 6x^2 + 3x + 9 = 0 to: " << endl;
		cout << "x1 = " << b3.getX1() << ", x2 = " << b3.getX2() << endl;
	}
	catch (no_real_solution& e) {
		cout << e.what() << endl;
	}
	catch (...) {
		cout << "Error." << endl;
	}
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