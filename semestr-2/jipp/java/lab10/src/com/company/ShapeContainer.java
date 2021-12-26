package com.company;
import java.util.ArrayList;
import java.util.List;

public class ShapeContainer {
    private List<Shape> shapes = new ArrayList<>();

    public void add(Shape sh) {
        shapes.add(sh);
    }

    public void areas() {
        for (Shape s : shapes) {
            System.out.println("Pole obiektu " + s.name + ": " + s.area());
        }
    }

    public void perimeters() {
        for (Shape s : shapes) {
            System.out.println("Obwod obiektu " + s.name + ": " + s.perimeter());
        }
    }
}