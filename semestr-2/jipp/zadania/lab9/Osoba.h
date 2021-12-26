#pragma once
#include <iostream>
#include <string>
#include <cstdint>

struct Osoba {
	uint64_t pesel;
	std::string imie, nazwisko;

	Osoba(uint64_t pesel, std::string imie, std::string nazwisko);
};

inline bool checkPesel(uint64_t pesel);