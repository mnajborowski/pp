class Pracownik extends Osoba {
    private Stanowisko stanowisko;
    private double pensja;

    Pracownik(String imie,
              String nazwisko,
              Stanowisko stanowisko,
              double pensja) {
        super(imie, nazwisko);
        this.stanowisko = stanowisko;
        this.pensja = pensja;
    }

    Stanowisko getStanowisko() {
        return stanowisko;
    }

    double getPensja() {
        return pensja;
    }

    public String toString() {
        return super.toString() + stanowisko.wypisz() + "\n"
                + "Pensja: " + pensja + " zł\n";
    }
}
