#pragma once
#include <iostream>

class Shape {
protected:
	std::string name;
public:
	Shape(std::string name) {
		std::cout << "Konstruktor obiektu typu Shape zostal wywolany!" << std::endl;
		this->name = name;
	}

	~Shape() {
		std::cout << "Destruktor obiektu typu Shape zostal wywolany!" << std::endl;
	}

	void setName(std::string name) {
		this->name = name;
	}

	std::string getName() {
		return name;
	}

	virtual double area() = 0;

};

class Rectangle : public Shape {
protected:
	double width;
	double height;
public:
	Rectangle(std::string name, double width, double height) : Shape(name) {
		std::cout << "Konstruktor obiektu typu Rectangle zostal wywolany!" << std::endl;
		this->width = width;
		this->height = height;
	}

	~Rectangle() {
		std::cout << "Destruktor obiektu typu Rectangle zostal wywolany!" << std::endl;
	}

	virtual double area() {
		return width * height;
	}
};

class Square : public Rectangle {
public:
	Square(std::string name, double width) : Rectangle(name, width, width) {
		std::cout << "Konstruktor obiektu typu Square zostal wywolany!" << std::endl;
	}

	~Square() {
		std::cout << "Destruktor obiektu typu Square zostal wywolany!" << std::endl;
	}

	virtual double area() {
		return width * width;
	}
};

class Circle {
protected:
	double radius;
public:
	Circle(double radius) : radius(radius) {
		std::cout << "Konstruktor obiektu klasy Circle zostal wywolany!" << std::endl;
	}

	~Circle() {
		std::cout << "Destruktor obiektu klasy Circle zostal wywolany!" << std::endl;
	}

	double area() {
		return 3.14 * radius * radius;
	}
};

class Cylinder : public Circle {
protected:
	double height;
public:
	Cylinder(double radius, double height) : Circle(radius), height(height) {
		std::cout << "Konstruktor obiektu klasy Cylinder zostal wywolany!" << std::endl;
	}

	~Cylinder() {
		std::cout << "Destruktor obiektu klasy Cylinder zostal wywolany!" << std::endl;
	}

	double area() {
		return 2 * 3.14 * radius * radius + 2 * 3.14 * radius * height;
	}

	double volume() {
		return Circle::area() * height;
	}
};