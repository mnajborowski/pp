public enum Stanowisko {
    DYREKTOR("Dyrektor", 1, "Dyrektor główny firmy"),
    KIEROWNIK("Kierownik", 2, "Kierownik działu"),
    LIDER("Lider", 3, "Lider zespołu"),
    PRACOWNIK("Pracownik", 4, "Pracownik biurowy, członek zespołu");

    private final String nazwa;
    private final int poziomHierarchii;
    private final String opis;

    Stanowisko(String nazwa, int poziomHierarchii, String opis) {
        this.nazwa = nazwa;
        this.poziomHierarchii = poziomHierarchii;
        this.opis = opis;
    }

    public String wypisz() {
        return "Stanowisko: " + nazwa + "\n"
                + "Poziom hierarchii: " + poziomHierarchii + "\n"
                + "Opis stanowiska: " + opis;
    }
}
