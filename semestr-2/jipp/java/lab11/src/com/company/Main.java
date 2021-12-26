package com.company;

import java.util.*;

public class Main {

    public static void main(String[] args) {
        int x = 0;
        Scanner sc = new Scanner(System.in);
        do {
            System.out.print("Ktore zadanie chcesz wykonac(1, 3-7)(0 = wyjscie): ");
            x = sc.nextInt();
            switch(x) {
                case 1: {
                    System.out.println("Zadanie 1\n");
                    try {
                        BinomialSolver e1 = new BinomialSolver(1, 5, 3);
                        System.out.println("Pierwiastki rownania: ");
                        System.out.println("x1 = " + e1.getX1() + "     x2 = " + e1.getX2());
                    } catch (ArithmeticException e) {
                        e.printStackTrace();
                    }
                    try {
                        BinomialSolver e2 = new BinomialSolver(1, 2, 1);
                        System.out.println("Pierwiastki rownania: ");
                        System.out.println("x1 = " + e2.getX1() + "     x2 = " + e2.getX2());
                    } catch (ArithmeticException e) {
                        e.printStackTrace();
                    }
                    try {
                        BinomialSolver e3 = new BinomialSolver(6, 3, 9);
                        System.out.println("Pierwiastki rownania: ");
                        System.out.println("x1 = " + e3.getX1() + "     x2 = " + e3.getX2());
                    } catch (ArithmeticException e) {
                        e.printStackTrace();
                    }
                    break;
                }
                case 3: {
                    System.out.println("Zadanie 3\n");
                    Collection<Integer> list = new ArrayList<>();
                    System.out.print("Ile liczb calkowitych chcesz wylosowac: ");
                    int n = sc.nextInt();
                    Random rand = new Random();
                    for (int i = 0; i < n; i++) {
                        list.add(rand.nextInt(11));
                    }
                    for (int i : list) {
                        System.out.println(i);
                    }
                    System.out.print("Wskaz element ktorego szukasz: ");
                    n = sc.nextInt();
                    if (list.contains(n) == true) System.out.println("Element znajduje sie na liscie");
                    else System.out.println("Elementu nie ma na liscie");
                    System.out.print("Ktory element z listy chcesz usunac: ");
                    list.remove(sc.nextInt());
                    for (Iterator<Integer> iter = list.iterator(); iter.hasNext(); ) {
                        Integer element = iter.next();
                        System.out.println(element);
                    }
                    break;
                }
                case 4: {
                    System.out.println("Zadanie 4\n");
                    Collection<Integer> list = new LinkedList<>();
                    System.out.print("Ile liczb calkowitych chcesz wylosowac: ");
                    int n = sc.nextInt();
                    Random rand = new Random();
                    for (int i = 0; i < n; i++) {
                        list.add(rand.nextInt(11));
                    }
                    for (int i : list) {
                        System.out.println(i);
                    }
                    System.out.print("Wskaz element ktorego szukasz: ");
                    n = sc.nextInt();
                    if (list.contains(n) == true) System.out.println("Element znajduje sie na liscie");
                    else System.out.println("Elementu nie ma na liscie");
                    System.out.print("Ktory element z listy chcesz usunac: ");
                    list.remove(sc.nextInt());
                    for (Iterator<Integer> iter = list.iterator(); iter.hasNext(); ) {
                        Integer element = iter.next();
                        System.out.println(element);
                    }
                    break;
                }
                case 5: {
                    System.out.println("Zadanie 5\n");
                    Collection<Integer> list = new ArrayList<>();
                    System.out.print("Ile liczb calkowitych chcesz wylosowac: ");
                    int n = sc.nextInt();
                    Random rand = new Random();
                    for (int i = 0; i < n; i++) {
                        list.add(rand.nextInt(11));
                    }
                    for (int i : list) {
                        System.out.println(i);
                    }
                    System.out.println("Najwieksza wartosc na liscie: " + Collections.max(list));
                    System.out.println("Najmniejsza wartosc na liscie: " + Collections.min(list));
                    break;
                }
                case 6: {
                    System.out.println("Zadanie 6\n");
                    List<Integer> list = new ArrayList<>();
                    System.out.print("Ile liczb calkowitych chcesz wylosowac: ");
                    int n = sc.nextInt();
                    Random rand = new Random();
                    for (int i = 0; i < n; i++) {
                        list.add(rand.nextInt(11));
                    }
                    for (int i : list) {
                        System.out.println(i);
                    }
                    Collections.sort(list);
                    System.out.println("Posortowana lista: ");
                    for (int i : list) {
                        System.out.println(i);
                    }
                    Collections.sort(list, Collections.reverseOrder());
                    System.out.println("Posortowana kolekcja w odwrotnej kolejnosci: ");
                    for (int i : list) {
                        System.out.println(i);
                    }
                    break;
                }
                case 7: {
                    System.out.println("Zadanie 7\n");
                    List<Integer> list = new ArrayList<>();
                    System.out.print("Ile liczb calkowitych chcesz wylosowac: ");
                    int n = sc.nextInt();
                    Random rand = new Random();
                    for (int i = 0; i < n; i++) {
                        list.add(rand.nextInt(11));
                    }
                    for (int i : list) {
                        System.out.println(i);
                    }
                    Set<Integer> set = new HashSet<>(list);
                    System.out.println("Lista przeksztalcona w set: ");
                    for (int i : set) {
                        System.out.println(i);
                    }
                    break;
                }
            }
        } while (x!=0);
    }
}
