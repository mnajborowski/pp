package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int x = 0;
        Scanner sc = new Scanner(System.in);
        do {
            System.out.print("Ktore zadanie chcesz wykonac(2, 4, 5 lub 6)(0 = wyjscie): ");
            x = sc.nextInt();
            switch(x) {
                case 2: {
                    System.out.println("Zadanie 2\n");
                    Osoba jan = new Osoba("Jan", "Kowalski");
                    Osoba jan2 = new Osoba("Jan", "Kowalski");
                    Osoba maria = new Osoba("Maria", "Nowak");

                    System.out.printf("jan == jan : %b%n", jan == jan);
                    System.out.printf("jan == jan2 : %b%n", jan == jan2);
                    System.out.printf("jan == maria : %b%n", jan == maria);
                    System.out.printf("jan.equals(jan) : %b%n", jan.equals(jan));
                    System.out.printf("jan.equals(jan2) : %b%n", jan.equals(jan2));
                    System.out.printf("jan.equals(maria) : %b%n", jan.equals(maria));
                    break;
                }
                case 4: {
                    System.out.println("Zadanie 4\n");
                    VerboseObject o1 = new VerboseObject("o1");
                    o1.info();
                    VerboseObject o2 = new VerboseObject("o2");
                    o2.info();
                    //informacja o zniszczeniu obiektu w ogole sie nie wyswietla
                    break;
                }
                case 5: {
                    System.out.println("Zadanie 5\n");
                    Rectangle r1 = new Rectangle(3, 5, "prostokat");
                    Square s1 = new Square(5, "kwadrat");
                    System.out.println("Pole prostokata: " + r1.area());
                    System.out.println("Pole kwadratu: " + s1.area());
                    Rectangle r_s1 = (Rectangle)s1;
                    System.out.println("Pole kwadratu zarzutowanego na prostokat: " + r_s1.area());
                    Shape sh_s1 = (Shape)s1;
                    System.out.println("Pole kwadratu zarzutowanego na ksztalt: " + sh_s1.area());
                    Shape sh_r1 = (Shape)r1;
                    System.out.println("Pole prostokata zarzutowanego na ksztalt: " + sh_r1.area());
                    break;
                }
                case 6: {
                    System.out.println("Zadanie 6\n");
                    Rectangle r1 = new Rectangle(3, 5, "prostokat");
                    Square s1 = new Square(5, "kwadrat");
                    ShapeContainer shapes = new ShapeContainer();
                    shapes.add(r1);
                    shapes.add(s1);
                    shapes.areas();
                    shapes.perimeters();
                    break;
                }
            }
        } while (x!=0);    }
}
