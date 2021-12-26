#pragma once
#include <iostream>
#include <memory>
#include <string>
struct VerboseObject {
	std::string name;

	VerboseObject(std::string n) {
		name = n;
		std::cout << "Konstruktor obiektu " << name << " wywolany!" << std::endl;
	}

	~VerboseObject() {
		std::cout << "Destruktor obiektu " << name << " wywolany!" << std::endl;
	}

	void metoda();
};