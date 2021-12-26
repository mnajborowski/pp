#include "stdafx.h"
#include "BazaStudentow.h"

std::string Student::getFirstName() {
	return imie;
}

std::string Student::getSecondName() {
	return nazwisko;
}

std::string Student::getIndex() {
	return indeks;
}

void dodajStudenta(std::vector<Student> &v) {
	std::string imie, nazwisko, indeks;
	std::cout << "Podaj imie: ";
	std::cin >> imie;
	std::cout << "Podaj nazwisko: ";
	std::cin >> nazwisko;
	std::cout << "Podaj nr indeksu: ";
	std::cin >> indeks;
	Student s(imie, nazwisko, indeks);
	v.push_back(s);
}

void drukuj(std::vector<Student> &v) {
	if (v.empty() == 0) {
		for (int i = 0; i < v.size(); i++) {
			std::cout << v[i].getFirstName() << " " << v[i].getSecondName() << ", " << v[i].getIndex() << std::endl;
		}
	}
	else std::cout << "Lista jest pusta!" << std::endl;
}

void szukaj(std::vector<Student> &v) {
	std::string indeks;
	std::cout << "Podaj nr indeksu: ";
	std::cin >> indeks;
	if (v.empty() == 0) {
		for (int i = 0; i < v.size(); i++) {
			if (v[i].getIndex() == indeks)
				std::cout << v[i].getFirstName() << " " << v[i].getSecondName() << ", " << v[i].getIndex() << std::endl;
			else std::cout << "W bazie nie ma studenta o podanym nr ideksu" << std::endl;
		}
	}
	else std::cout << "Lista jest pusta!" << std::endl;
}

void usun(std::vector<Student> &v) {
	std::string indeks;
	std::cout << "Podaj nr indeksu: ";
	std::cin >> indeks;
	if (v.size() != 0) {
		for (int i = 0; i < v.size(); i++) {
			if (v[i].getIndex() == indeks) v.erase(v.begin() + i);
		}
	}
	else std::cout << "Lista jest pusta!" << std::endl;
}


void zapis(std::vector<Student> &v, const std::string &fileName) {
	std::string imie, nazwisko, indeks;
	std::ofstream output;
	output.open(fileName);
	if (output) {
		for (int i = 0; i < v.size(); i++) {
			imie = v[i].getFirstName();
			nazwisko = v[i].getSecondName();
			indeks = v[i].getIndex();
			output << imie << " " << nazwisko << " " << indeks;
			if (i < v.size() - 1) output << std::endl;
		}
	}
	output.close();
}

std::vector<Student> odczyt(const std::string &fileName) {
	std::vector<Student> v;
	std::string imie, nazwisko, indeks;
	std::ifstream input;
	input.open(fileName);
	if (input) {
		while (!input.eof()) {
			input >> imie >> nazwisko >> indeks;
			Student s(imie, nazwisko, indeks);
			v.push_back(s);
		}
	}
	input.close();
	return v;
}

void wyczysc(std::vector<Student> &v) {
	v.clear();
}