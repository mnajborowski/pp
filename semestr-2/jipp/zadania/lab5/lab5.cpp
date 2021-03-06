// lab5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Vector.h"
#include "Shapes.h"


using namespace std;
int main() {
	std::cout << "Zadanie 2" << std::endl << std::endl;
	typedef int T;
	const unsigned int d = 10;
	Vector<T> v1(d);
	for (unsigned int i = 0; i < d; i++) {
		v1[i] = (T)i;
	}
	cout << "Wektor v1: " << v1 << endl;
	Vector<T> v2 = v1 + v1;
	cout << "Wektor v2: " << v2 << endl;
	cout << "v1 == v1: " << (v1 == v1 ? "TAK" : "NIE") << endl;
	cout << "v1 != v1: " << (v1 != v1 ? "TAK" : "NIE") << endl;
	cout << "v1 == v2: " << (v1 == v2 ? "TAK" : "NIE") << endl;
	cout << "v1 != v2: " << (v1 != v2 ? "TAK" : "NIE") << endl;
	Vector<T> v3(5);
	cout << "Wektor v3: " << v3 << endl;
	cout << "v1 == v3: " << (v1 == v3 ? "TAK" : "NIE") << endl;
	v3 = v1;
	cout << "Wektor v3: " << v3 << endl;
	cout << "v1 == v3: " << (v1 == v3 ? "TAK" : "NIE") << endl;
	std::cout << std::endl << "Zadanie 3" << std::endl << std::endl;
	ShapeContainer shapes;
	Rectangle *r = new Rectangle("prostokat", 5, 2);
	Square *s = new Square("kwadrat", 5);
	Circle *c = new Circle("okrag", 2);
	Elipse *e = new Elipse("elipsa", 5, 2);
	shapes >> r >> s >> c >> e;
	shapes.displayAll();
	delete r;
	delete s;
	delete c;
	delete e;
	std::cout << std::endl << "Wcisnij ENTER" << std::endl;
	getchar();
	return 0;
}

