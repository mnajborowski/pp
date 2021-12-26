#pragma once
#include <iostream>
#include <string>

class Pojazd {
protected:
	std::string name;
public:
	Pojazd(std::string name) : name(name) {};
	virtual void jedz(int odleglosc) = 0;
};

class Rower : public Pojazd {
public:
	Rower(std::string name) : Pojazd(name) {};
	void jedz(int odleglosc) override;
};

class Samochod : public Pojazd {
	int iloscPaliwa = 0;
public:
	Samochod(std::string name, int iloscPaliwa) : Pojazd(name), iloscPaliwa(iloscPaliwa) {};
	void jedz(int odleglosc) override;
	void zatankuj(int iloscPaliwa);
};