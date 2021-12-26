package com.company;

import java.util.Random;

public class Countdown implements Runnable {
    private String name;
    private int limit;

    public Countdown(String name, int limit) {
        this.name = name;
        this.limit = limit;
    }

    @Override
    public void run() {
        Random random = new Random();
        for (int i = limit; i > 0; i--) {
            System.out.println(name + ": " + i);
            try {
                Thread.sleep(10 + random.nextInt(991));
            } catch (InterruptedException e) {
                System.out.println("InterruptedException");
            }
        }
    }
}
