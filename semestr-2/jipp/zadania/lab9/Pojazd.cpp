#include "stdafx.h"
#include "Pojazd.h"

void Rower::jedz(int odleglosc) {
	if (odleglosc > 10) {
		throw std::runtime_error("Za daleko");
	}
	std::cout << "Przejechalismy " << odleglosc << std::endl;
}

void Samochod::jedz(int odleglosc) {
	if (odleglosc < iloscPaliwa) {
		iloscPaliwa = iloscPaliwa - odleglosc;
		std::cout << "Ilosc paliwa: " << iloscPaliwa << std::endl;
	}
	else {
		throw std::runtime_error("Za malo paliwa");
	}
}

void Samochod::zatankuj(int iloscPaliwa) {
	this->iloscPaliwa = this->iloscPaliwa + iloscPaliwa;
	std::cout << "Ilosc paliwa: " << this->iloscPaliwa << std::endl;
}