package com.company;

abstract class Shape {
    protected String name;

    public Shape(String name) {
        this.name = name;
        System.out.println("Konstruktor obiektu " + name + " klasy Shape zostal wywolany.");
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    abstract double area();
    abstract double perimeter();
}

class Rectangle extends Shape {
    protected double width;
    protected double height;

    public Rectangle(double width, double height, String name) {
        super(name);
        this.width = width;
        this.height = height;
        System.out.println("Konstruktor obiektu " + name + " klasy Rectangle zostal wywolany.");
    }

    @Override
    double area() {
        return width*height;
    }

    @Override
    double perimeter() {
        return 2*width+2*height;
    }
}

class Square extends Rectangle {
    public Square(double width, String name) {
        super(width, width, name);
        System.out.println("Konstruktor obiektu " + name + " klasy Square zostal wywolany.");
    }
}
