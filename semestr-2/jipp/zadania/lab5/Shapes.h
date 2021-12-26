#pragma once
#include <iostream>
#include <vector>
#include <math.h>
#include <string>

class Shape {
protected:
	std::string name;
public:
	Shape(std::string name);

	~Shape();

	void setName(std::string name);

	std::string getName();

	virtual double area() = 0;
	virtual double perimeter() = 0;
};

class Rectangle : public Shape {
protected:
	double width;
	double height;
public:
	Rectangle(std::string name, double width, double height);

	~Rectangle();

	double area();
	double perimeter();
};

class Square : public Rectangle {
public:
	Square(std::string name, double width);

	~Square();

	double area();
	double perimeter();
};

class Circle : public Shape {
protected:
	double radius;
public:
	Circle(std::string name, double radius);

	~Circle();

	double area();
	double perimeter();
};

class Elipse : public Shape {
protected:
	double a, b;
public:
	Elipse(std::string name, double a, double b);

	~Elipse();

	double area();
	double perimeter();
};

class ShapeContainer {
protected:
	std::vector<Shape*> shapes;
public:
	void add(Shape* s);
	void displayAll() const;
	double totalArea() const;
	std::vector<Shape*> getGreaterThan(double area);
	ShapeContainer& operator >> (Shape* shape);

};