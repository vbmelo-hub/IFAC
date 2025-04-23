package Area;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        double A = ler.nextDouble();
        double B = ler.nextDouble();
        double C = ler.nextDouble();
        double pi = 3.14159;
        System.out.printf("TRIANGULO: %.3f\n", (A * C) / 2);
        System.out.printf("CIRCULO: %.3f\n", pi * C * C);
        System.out.printf("TRAPEZIO: %.3f\n", ((A + B) * C) / 2);
        System.out.printf("QUADRADO: %.3f\n", B * B);
        System.out.printf("RETANGULO: %.3f\n", A * B);
        ler.close();
    }
}
