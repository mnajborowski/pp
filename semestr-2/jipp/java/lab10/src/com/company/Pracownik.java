package com.company;

public class Pracownik extends Osoba {
    private String stanowisko;
    private int pensja;

    public Pracownik() {
        super(null, null);
    }

    public Pracownik(String stanowisko, int pensja, String imie, String nazwisko) {
        super(imie, nazwisko);
        this.stanowisko = stanowisko;
        this.pensja = pensja;
    }

    public void setStanowisko(String stanowisko) {
        this.stanowisko = stanowisko;
    }

    public void setPensja(int pensja) {
        this.pensja = pensja;
    }

    public String getStanowisko() {
        return stanowisko;
    }

    public int getPensja() {
        return pensja;
    }
}
