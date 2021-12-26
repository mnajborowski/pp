import java.util.Iterator;

public class Main {
    public static void main(String[] args) {
        Osoba o1 = new Osoba("Michu", "Najborowski");
        Pracownik p1 = new Pracownik("Jachu", "Kowal", Stanowisko.PRACOWNIK, 3200);
        Pracownik p2 = new Pracownik("Stachu", "Kozak", Stanowisko.DYREKTOR, 6700);
        Pracownik p3 = new Pracownik("Tobi", "Nowak", Stanowisko.PRACOWNIK, 3600);
        Firma firma = new Firma();
        firma.dodajPracownika(p1);
        firma.dodajPracownika(p2);
        firma.dodajPracownika(p3);
        System.out.println(firma.liczbaPracownikow());
        //firma.wypiszWszystkich();

        for (Pracownik pracownik : firma) {
            System.out.println(firma.listaPracownikow.indexOf(pracownik) + 1);
            System.out.println(pracownik.toString());
        }

        System.out.println("Pracownicy: ");
        Iterator<Pracownik> iteratorFirmy = firma.iterator(Stanowisko.PRACOWNIK);
        while (iteratorFirmy.hasNext()) System.out.println(iteratorFirmy.next());

        System.out.println("Srednia pensja wszystkich: " + firma.sredniaPensjaWszystkich() + " zl");
        System.out.println("Srednia pensja na stanowisku Pracownik: " + firma.sredniaPensjaStanowiska(Stanowisko.PRACOWNIK) + " zl");
    }
}
