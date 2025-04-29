package numerospositivos;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int positivos = 0;

        for (int i = 0; i < 6; i++) {
            double x = ler.nextDouble();
            if (x > 0) {
                positivos++;
            }
        }
        System.out.println(positivos + " valores positivos");
        ler.close();
    }
}
