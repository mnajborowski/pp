import java.util.ArrayList;
import java.util.Iterator;

class Firma implements Iterable<Pracownik> {
    ArrayList<Pracownik> listaPracownikow = new ArrayList<Pracownik>();

    void dodajPracownika(Pracownik pracownik) {
        listaPracownikow.add(pracownik);
    }

    int liczbaPracownikow() {
        return listaPracownikow.size();
    }

    void wypiszWszystkich() {
        for (Pracownik pracownik : listaPracownikow) {
            System.out.println(listaPracownikow.indexOf(pracownik) + 1);
            System.out.println(pracownik.toString());
        }
    }

    @Override
    public Iterator<Pracownik> iterator() {
        return listaPracownikow.iterator();
    }

    Iterator<Pracownik> iterator(Stanowisko stanowisko) {
        return listaPracownikow.stream().filter(pracownik -> pracownik.getStanowisko() == stanowisko).iterator();
    }

    double sredniaPensjaWszystkich() {
        double sredniaPensja = 0;
        int liczbaPracownikow = 0;
        for (Pracownik pracownik : this) {
            sredniaPensja = sredniaPensja + pracownik.getPensja();
            liczbaPracownikow++;
        }
        return sredniaPensja / liczbaPracownikow;
    }

    double sredniaPensjaStanowiska(Stanowisko stanowisko) {
        Iterator<Pracownik> iteratorFirmy = this.iterator(Stanowisko.PRACOWNIK);
        double sredniaPensja = 0;
        int liczbaPracownikow = 0;
        while (iteratorFirmy.hasNext()) {
            sredniaPensja = sredniaPensja + iteratorFirmy.next().getPensja();
            liczbaPracownikow++;
        }
        return sredniaPensja / liczbaPracownikow;
    }
}

