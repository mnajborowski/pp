package com.company;

public class BinomialSolver {
    private double a, b, c;
    private double x1, x2;

    public BinomialSolver(double a, double b, double c) {
        this.a = a;
        this.b = b;
        this.c = c;
        double delta;
        delta = Math.pow(b, 2) - 4*a*c;
        if (delta < 0) throw new ArithmeticException();
        else {
            x1 = (-b - Math.sqrt(delta))/(2*a);
            x2 = (-b + Math.sqrt(delta))/(2*a);
        }
    }

    public double getA() {
        return a;
    }

    public double getB() {
        return b;
    }

    public double getC() {
        return c;
    }

    public double getX1() {
        return x1;
    }

    public double getX2() {
        return x2;
    }

    public double calculate(double x) {
        return a*Math.pow(x, 2) + b*x + c;
    }
}
