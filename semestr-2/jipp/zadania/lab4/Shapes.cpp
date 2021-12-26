#include "stdafx.h"
#include "Shapes.h"

Shape::Shape(std::string name) {
	std::cout << "Konstruktor obiektu typu Shape zostal wywolany!" << std::endl;
	this->name = name;
}

Shape::~Shape() {
	std::cout << "Destruktor obiektu typu Shape zostal wywolany!" << std::endl;
}

void Shape::setName(std::string name) {
	this->name = name;
}

std::string Shape::getName() {
	return name;
}

Rectangle::Rectangle(std::string name, double width, double height) : Shape(name) {
	std::cout << "Konstruktor obiektu typu Rectangle zostal wywolany!" << std::endl;
	this->width = width;
	this->height = height;
}

Rectangle::~Rectangle() {
	std::cout << "Destruktor obiektu typu Rectangle zostal wywolany!" << std::endl;
}

double Rectangle::area() {
	return width * height;
}

double Rectangle::perimeter() {
	return 2 * width + 2 * height;
}

Square::Square(std::string name, double width) : Rectangle(name, width, width) {
	std::cout << "Konstruktor obiektu typu Square zostal wywolany!" << std::endl;
}

Square::~Square() {
	std::cout << "Destruktor obiektu typu Square zostal wywolany!" << std::endl;
}

double Square::area() {
	return width * width;
}

double Square::perimeter() {
	return 4 * width;
}

Circle::Circle(std::string name, double radius) : Shape(name), radius(radius) {
	std::cout << "Konstruktor obiektu klasy Circle zostal wywolany!" << std::endl;
}

Circle::~Circle() {
	std::cout << "Destruktor obiektu klasy Circle zostal wywolany!" << std::endl;
}

double Circle::area() {
	return 3.14 * radius * radius;
}

double Circle::perimeter() {
	return 2 * 3.14*radius;
}

Elipse::Elipse(std::string name, double a, double b) : Shape(name), a(a), b(b) {
	std::cout << "Konstruktor obiektu klasy Elipse zostal wywolany!" << std::endl;
}

Elipse::~Elipse() {
	std::cout << "Dekstruktor obiektu klasy Elipse zostal wywoalny!" << std::endl;
}

double Elipse::area() {
	return 3.14*a*b;
}

double Elipse::perimeter() {
	return 3.14*(3 / 2 * (a + b) - sqrt(a*b));
}

void ShapeContainer::add(Shape* s) {
	shapes.push_back(s);
}

void ShapeContainer::displayAll() const {
	for (Shape* s : shapes) {
		std::cout << "Obiekt " << s->getName() << " ma pole rowne " << s->area() << " oraz obwod rowny " << s->perimeter() << std::endl;
	}
}

double ShapeContainer::totalArea() const {
	double sum = 0;
	for (Shape* s : shapes) {
		sum = sum + s->area();
	}
	return sum;
}

std::vector<Shape*> ShapeContainer::getGreaterThan(double area) {
	std::vector<Shape*> v;
	for (Shape* s : shapes) {
		if (s->area()>area) v.push_back(s);
	}
	return v;
}