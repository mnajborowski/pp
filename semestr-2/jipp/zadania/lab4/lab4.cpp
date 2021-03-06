// lab4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Shapes.h"

void zadanie1() {
	std::cout << "Zadanie 1" << std::endl << std::endl;
	ShapeContainer shapes;
	Rectangle *r = new Rectangle("prostokat", 5, 2);
	Square *s = new Square("kwadrat", 5);
	Circle *c = new Circle("okrag", 2);
	Elipse *e = new Elipse("elipsa", 5, 2);
	shapes.add(r);
	shapes.add(s);
	shapes.add(c);
	shapes.add(e);
	shapes.displayAll();
	delete r;
	delete s;
	delete c;
	delete e;
}

void zadanie2() {
	std::cout << "Zadanie 2" << std::endl << std::endl;
	double area;
	std::vector<Shape*> v;
	ShapeContainer shapes;
	Rectangle *r = new Rectangle("prostokat", 5, 2);
	Square *s = new Square("kwadrat", 5);
	Circle *c = new Circle("okrag", 2);
	Elipse *e = new Elipse("elipsa", 5, 2);
	shapes.add(r);
	shapes.add(s);
	shapes.add(c);
	shapes.add(e);
	shapes.displayAll();
	std::cout << "Suma pol wszystkich figur: " << shapes.totalArea() << std::endl;
	std::cout << "Podaj pole do wyswietlenia listy figur o polu wiekszym od podanego: ";
	std::cin >> area;
	v = shapes.getGreaterThan(area);
	for (Shape* s : v) {
		std::cout << s->getName() << std::endl;
	}
	delete r;
	delete s;
	delete c;
	delete e;
}

int main() {
	int x;
	do {
		std::cout << "Ktore zadanie chcesz wykonac (1-2)(0 = wyjscie): ";
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
		}
	} while (x != 0);
	return 0;
}

