#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

class Student {
private:
	std::string imie, nazwisko, indeks;
public:
	Student(std::string imie, std::string nazwisko, std::string indeks) {
		this->imie = imie;
		this->nazwisko = nazwisko;
		this->indeks = indeks;
	}

	std::string getFirstName();

	std::string getSecondName();

	std::string getIndex();
};

void dodajStudenta(std::vector<Student> &v);

void drukuj(std::vector<Student> &v);

void szukaj(std::vector<Student> &v);

void usun(std::vector<Student> &v);

void zapis(std::vector<Student> &v, const std::string &fileName);

std::vector<Student> odczyt(const std::string &fileName);

void wyczysc(std::vector<Student> &v);