package com.company;

public class VerboseObject {
    private String name;

    public VerboseObject(String name) {
        this.name = name;
        System.out.println("Konstruktor obiektu " + name + " zostal wywolany.");
    }

    @Override
    protected void finalize() throws Throwable {
        System.out.println("Obiekt " + name + " zostal zniszczony.");
        super.finalize(); //To change body of generated methods, choose Tools | Templates.
    }

    void info() {
        System.out.println("Metoda zostala wywolana.");
    }
}
