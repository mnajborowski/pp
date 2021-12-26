package com.company;

import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import java.util.Scanner;

public class Main {

    static void zadanie1() {
        System.out.println("Zadanie 1\n");
        Thread t1 = new Thread(new Countdown("t1", 20));
        t1.start();
        try {
            t1.join();
        } catch (InterruptedException e) {};
        System.out.println("Main thread run is over");
    }

    static void zadanie2() {
        System.out.println("Zadanie 2\n");
        Thread racer1 = new Thread(new Countdown("racer 1", 20));
        Thread racer2 = new Thread(new Countdown("racer 2", 20));
        racer1.start();
        racer2.start();
        try {
            racer1.join();
            racer2.join();
        } catch (InterruptedException e) {};
        System.out.println("Race is over");
        //wynik dzialania jest inny przy kazdym uruchomieniu
        //nie mozna przewidziec ktory watek zakonczy sie pierwszy
    }
    static void zadanie3() throws InterruptedException {
        System.out.println("Zadanie 3\n");
        Counter counter = new Counter();
        int n=3;
        Thread[] threads = new Thread[3];
        for(int i = 0; i<n;i++){
            threads[i] = new Thread(()->{
                for (int j=0;j<1000;j++){
                    counter.add(1);
                }
            });
        }
        for (Thread t: threads) t.start();
        for (Thread t: threads) t.join();
        System.out.println("Counter: " + counter.getCount());
    }

    static void zadanie4() throws InterruptedException {
        System.out.println("Zadanie 4\n");
        Random random = new Random();
        List<Integer> numbers = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        System.out.print("Ile watkow chcesz stworzyc: ");
        int t = sc.nextInt();
        Thread[] threads = new Thread[t];
        System.out.print("Ile liczb chcesz dodac do kolekcji: ");
        int n = sc.nextInt();
        for (int i = 0; i < t; i++) {
            threads[i] = new Thread(() -> {
                for (int j = 0; j < n; j++) {
                    numbers.add(random.nextInt(n) + 1);
                }
            });
            for (Thread th : threads) th.start();
            for (Thread th : threads) th.join();
        }
        System.out.println("Liczba elementow kolekcji numbers: " + numbers.size());
    }

    public static void main(String[] args) throws InterruptedException {
        int x = 0;
        Scanner sc = new Scanner(System.in);
        do {
            System.out.print("Ktore zadanie chcesz wykonac(1-4, 6)(0 = wyjscie): ");
            x = sc.nextInt();
            switch(x) {
                case 1: {
                    zadanie1();
                    break;
                }
                case 2: {
                    zadanie2();
                    break;
                }
                case 3: {
                    zadanie3();
                    break;
                }
                case 4: {
                    zadanie4();
                    break;
                }
            }
        } while (x!=0);
    }
}
