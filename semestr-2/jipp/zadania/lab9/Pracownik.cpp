#include "stdafx.h"
#include "Pracownik.h"

float PracownikEtatowy::obliczWynagrodzenieMiesieczne() {
	return wynagrodzenie;
}

void Firma::dodaj(Pracownik* p) {
	lista.push_back(p);
}

void Firma::wyswietl() {
	for (auto x : lista) {
		std::cout << "Zarabia: " << x->obliczWynagrodzenieMiesieczne() << std::endl;
	}
}