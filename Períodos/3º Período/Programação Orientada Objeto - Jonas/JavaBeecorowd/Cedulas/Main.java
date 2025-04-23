package Cedulas;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        int valor = ler.nextInt();
        int original = valor;

        int[] notas = {100, 50, 20, 10, 5, 2, 1};

        System.out.println(original);

        for (int nota : notas) {
            int quantidade = valor / nota;
            System.out.println(quantidade + " nota(s) de R$ " + nota + ",00");
            valor %= nota;
        }

        ler.close();
    }
}
