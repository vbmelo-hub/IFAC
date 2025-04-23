package Esfera;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        double x = ler.nextDouble();
        double volume = (4/3.0) * 3.14159 * x * x * x;
        System.out.printf("VOLUME = %.3f\n", volume);
        ler.close();
    }
}
