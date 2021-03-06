// lab7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <list>
#include <functional>
#include <cmath>

int randomInt(int min, int max) {
	static std::default_random_engine e{};
	std::uniform_int_distribution<int> d(min, max);
	return d(e);
}

void zadanie1() {
	std::cout << "Zadanie 1" << std::endl << std::endl;
	int n, co_usunac;
	std::cout << "Ile liczb chcesz wylosowac: ";
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		v[i] = randomInt(-20, 20);
	}
	for (int i = 0; i < n; i++) {
		std::cout << v[i];
		if (i<n - 1) std::cout << " ";
	}
	std::cout << std::endl;
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
		std::cout << *it;
		if (it != v.end() - 1) std::cout << " ";
	}
	std::cout << std::endl;
	std::cout << "Podaj wartosc, ktora chcesz usunac z wektora: ";
	std::cin >> co_usunac;
	v.erase(std::remove(v.begin(), v.end(), co_usunac), v.end());
	for (auto a : v) {
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

void zadanie2() {
	std::cout << "Zadanie 2" << std::endl << std::endl;
	int n, co_usunac;
	std::cout << "Ile liczb chcesz wylosowac: ";
	std::cin >> n;
	std::list<int> l;
	for (int i = 0; i < n; i++) {
		l.push_front(randomInt(-20, 20));
	}
	for (auto a : l) std::cout << a << " ";
	std::cout << std::endl;
	for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "Podaj wartosc, ktora chcesz usunac z listy: ";
	std::cin >> co_usunac;
	l.erase(std::remove(l.begin(), l.end(), co_usunac), l.end());
	for (auto a : l) {
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

void zadanie3() {
	std::cout << "Zadanie 3" << std::endl << std::endl;
	int n, co_usunac;
	std::cout << "Ile liczb chcesz wylosowac: ";
	std::cin >> n;
	std::list<int> l;
	for (int i = 0; i < n; i++) {
		l.push_front(randomInt(-20, 20));
	}
	for (auto a : l) std::cout << a << " ";
	std::cout << std::endl;
	for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "Podaj wartosc, ktora chcesz usunac z listy: ";
	std::cin >> co_usunac;
	auto result = std::find(l.begin(), l.end(), co_usunac);
	l.erase(result);
	for (auto a : l) {
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

void zadanie4() {
	std::cout << "Zadanie 4" << std::endl << std::endl;
	int n, co_usunac;
	std::cout << "Ile liczb chcesz wylosowac: ";
	std::cin >> n;
	std::list<int> l;
	for (int i = 0; i < n; i++) {
		l.push_front(randomInt(-20, 20));
	}
	for (auto a : l) std::cout << a << " ";
	std::cout << std::endl;
	auto result = std::min_element(l.begin(), l.end());
	std::list<int>::iterator it = result;
	std::cout << "Minimalna wartosc na liscie: " << *it << std::endl;
	result = std::max_element(l.begin(), l.end());
	it = result;
	std::cout << "Maksymalna wartosc na liscie: " << *it << std::endl;
}

void zadanie5() {
	std::cout << "Zadanie 5" << std::endl << std::endl;
	int n, co_usunac;
	std::cout << "Ile liczb chcesz wylosowac: ";
	std::cin >> n;
	std::list<int> l;
	for (int i = 0; i < n; i++) {
		l.push_front(randomInt(-20, 20));
	}
	for (auto a : l) std::cout << a << " ";
	std::cout << std::endl;
	l.sort();
	for (auto a : l) std::cout << a << " ";
	std::cout << std::endl;
	l.sort(std::greater<int>());
	for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it) {
		std::cout << *it << " ";
		*it = abs(*it);
	}
	std::cout << std::endl;
	l.sort();
	for (auto a : l) std::cout << a << " ";
	std::cout << std::endl;
}

int main() {
	int x;
	do {
		std::cout << "Ktore zadanie chcesz wykonac (1-5)(0 = wyjscie): ";
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
		case 3:
		{
			zadanie3();
			break;
		}
		case 4: {
			zadanie4();
			break;
		}
		case 5: {
			zadanie5();
			break;
		}
		}
	} while (x != 0);
	return 0;
}