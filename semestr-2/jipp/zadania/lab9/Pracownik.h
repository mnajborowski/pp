#pragma once
#include <iostream>
#include <string>
#include <vector>

class Pracownik {
protected:
	std::string imie, nazwisko, stanowisko;
public:
	Pracownik(std::string imie, std::string nazwisko, std::string stanowisko) : imie(imie), nazwisko(nazwisko), stanowisko(stanowisko) {};
	virtual float obliczWynagrodzenieMiesieczne() = 0;
};

class PracownikEtatowy : public Pracownik {
	float wynagrodzenie;
public:
	PracownikEtatowy(std::string imie, std::string nazwisko, std::string stanowisko, float wynagrodzenie) : Pracownik(imie, nazwisko, stanowisko), wynagrodzenie(wynagrodzenie) {};
	float obliczWynagrodzenieMiesieczne() override;
};

class Firma {
	std::vector<Pracownik*> lista;
public:
	void dodaj(Pracownik* p);
	void wyswietl();
	float obliczSumeWynagrodzen();
};