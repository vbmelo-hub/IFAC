package NotasEMoedas;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        double n = ler.nextDouble();
        int centavos = (int) Math.round(n * 100);

        int[] notas = {10000, 5000, 2000, 1000, 500, 200};
        String[] idNotas = {"R$ 100.00", "R$ 50.00", "R$ 20.00", "R$ 10.00", "R$ 5.00", "R$ 2.00"};

        int[] moedas = {100, 50, 25, 10, 5, 1};
        String[] idMoedas = {"R$ 1.00", "R$ 0.50", "R$ 0.25", "R$ 0.10", "R$ 0.05", "R$ 0.01"};

        System.out.println("NOTAS:");
        for (int i = 0; i < notas.length; i++) {
            int quantidade = centavos / notas[i];
            centavos %= notas[i];
            System.out.println(quantidade + " nota(s) de " + idNotas[i]);
        }

        System.out.println("MOEDAS:");
        for (int i = 0; i < moedas.length; i++) {
            int quantidade = centavos / moedas[i];
            centavos %= moedas[i];
            System.out.println(quantidade + " moeda(s) de " + idMoedas[i]);
        }

        ler.close();
    }
}