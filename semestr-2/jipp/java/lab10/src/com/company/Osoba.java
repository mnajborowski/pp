package com.company;

public class Osoba {
    private String imie, nazwisko;

    public Osoba(String imie, String nazwisko) {
        this.imie = imie;
        this.nazwisko = nazwisko;
    }

    @Override
    public boolean equals(Object o) {
        Osoba other = (Osoba)o;
        if (this.imie == other.imie && this.nazwisko == other.nazwisko) return true;
        return super.equals(o); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public int hashCode() {
        return super.hashCode(); //To change body of generated methods, choose Tools | Templates.
    }
}
