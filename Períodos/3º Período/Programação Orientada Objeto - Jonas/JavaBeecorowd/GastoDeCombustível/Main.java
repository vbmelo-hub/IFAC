package GastoDeCombustível;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int tempo = ler.nextInt();
        int km = ler.nextInt();
        double consumo = (double)(tempo * km) / 12;
        System.out.printf("%.3f\n", consumo);
        ler.close();
    }
}
