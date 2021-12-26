import java.math.BigInteger;
import java.nio.file.Files;
import java.nio.file.Path;
import java.text.DecimalFormat;
import java.text.DecimalFormatSymbols;
import java.text.NumberFormat;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Locale;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x;
        do {
            System.out.println("Podaj nr zadania (0 = wyjscie): ");
            x = sc.nextInt();
            switch (x) {
                case 1:
                    // a)
                    long startTime = System.nanoTime();
                    int ilosc;
                    System.out.println("Podaj ilosc liczb: ");
                    ilosc = sc.nextInt();
                    int[] table = new int[ilosc];
                    for (int i = 0; i < ilosc; i++) table[i] = i;
                    long estimatedTime = System.nanoTime() - startTime;
                    System.out.println("Czas tworzenia tablicy: " + estimatedTime / 1000);
                    // b)
                    startTime = System.nanoTime();
                    ArrayList<Integer> list = new ArrayList<Integer>();
                    for (int i = 0; i < ilosc; i++) list.add(i);
                    estimatedTime = System.nanoTime() - startTime;
                    System.out.println("Czas tworzenia ArrayList: " + estimatedTime / 1000);
                    // c)
                    startTime = System.nanoTime();
                    ArrayList<Integer> listSized = new ArrayList<Integer>(20000);
                    for (int i = 0; i < ilosc; i++) listSized.add(i);
                    estimatedTime = System.nanoTime() - startTime;
                    System.out.println("Czas tworzenia ArrayList, z podaniej maksymalnego rozmiaru: " + estimatedTime / 1000);
                    startTime = System.nanoTime();
                    // d)
                    LinkedList<Integer> linkedList = new LinkedList<Integer>();
                    for (int i = 0; i < ilosc; i++) linkedList.add(i);
                    estimatedTime = System.nanoTime() - startTime;
                    System.out.println("Czas tworzenia LinkedList: " + estimatedTime / 1000);
                    break;
                case 2:
                    startTime = System.nanoTime();
                    System.out.println("Podaj n: ");
                    int n = sc.nextInt();
                    BigInteger factorial = countFactorial(n);
                    NumberFormat formatter = new DecimalFormat("0.##E0", DecimalFormatSymbols.getInstance(Locale.ROOT));
                    String str = formatter.format(factorial);
                    System.out.println("Wartosc silni z n: " + str);
                    estimatedTime = System.nanoTime() - startTime;
                    System.out.println("Czas: " + ((double)estimatedTime / 1000000000));
                    break;
                case 3:
                    long words;
                    words = Files.lines(Path.get("macbeth.txt"))
                            .
                    break;
            }
        } while (x != 0);
    }

    static BigInteger countFactorial(int N) {
        BigInteger factorial = new BigInteger("1"); // Or BigInteger.ONE
        for (int i = 2; i <= N; i++)
            factorial = factorial.multiply(BigInteger.valueOf(i));
        return factorial;
    }
}
