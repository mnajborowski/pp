class Osoba {
    private String imie;
    private String nazwisko;

    Osoba(String imie, String nazwisko) {
        this.imie = imie;
        this.nazwisko = nazwisko;
    }

    public String toString() {
        return "Imie: " + imie + "\n"
                + "Nazwisko: " + nazwisko + "\n";
    }
}
