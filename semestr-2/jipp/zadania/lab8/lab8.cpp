// lab8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>

bool sortBySecond(const std::pair<std::string, int> &a, const std::pair<std::string, int> &b) {
	return a.second > b.second;
}

void zadanie1() {
	std::cout << "Zadanie 1" << std::endl << std::endl;
	std::vector<std::string> v;
	std::string word;
	std::ifstream input;
	input.open("macbeth.txt");
	if (input) {
		while (!input.eof()) {
			input >> word;
			word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
			std::transform(word.begin(), word.end(), word.begin(), tolower);
			v.push_back(word);
		}
	}
	input.close();
	int liczba_slow = 0;
	for (auto &a : v) {
		std::cout << a << std::endl;
		liczba_slow++;
	}
	std::cout << liczba_slow << std::endl;
}

void zadanie2() {
	std::cout << "Zadanie 2" << std::endl << std::endl;
	std::vector<std::string> v;
	std::string word;
	std::ifstream input;
	input.open("macbeth.txt");
	if (input) {
		while (!input.eof()) {
			input >> word;
				word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
				std::transform(word.begin(), word.end(), word.begin(), tolower);
				v.push_back(word);
		}
	}
	input.close();
	std::sort(v.begin(), v.end());
	std::map<std::string, int> map;
	for (int i = 0; i < v.size(); i++) {
		++map[v[i]];
	}
	std::map<std::string, int>::iterator it = map.begin();
	/*while (it != map.end())
	{
		std::cout << it->first << " :: " << it->second << std::endl;
		it++;
	}*/
	std::cout << "Wystepuje " << map.size() << " unikalnych wyrazow" << std::endl;
	std::cout << "Slowo 'Macbeth' wystepuje " << map["macbeth"] << " razy" << std::endl;
}

void zadanie3() {
	std::cout << "Zadanie 3" << std::endl << std::endl;
	std::vector<std::pair<std::string, int>> v;
	std::map<std::string, int> map;
	std::string word;
	std::ifstream input;
	input.open("macbeth.txt");
	if (input) {
		while (!input.eof()) {
			input >> word;
			word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
			std::transform(word.begin(), word.end(), word.begin(), tolower);
			++map[word];
		}
	}
	input.close();
	for (auto &x : map) {
		v.push_back(x);
	}
	std::sort(v.begin(), v.end(), sortBySecond);
	std::cout << "20 najczesciej wystepujacych slow w pliku: " << std::endl;
	for (int i = 0; i < 20; i++) {
		std::cout << v[i].first << " - " << v[i].second << " razy" << std::endl;
	}
}


int main() {
	int x;
	do {
		std::cout << "Ktore zadanie chcesz wykonac (1-3)(0 = wyjscie): ";
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
		}
	} while (x != 0);
	return 0;
}
