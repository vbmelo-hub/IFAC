package DistanciaEntreDoisPontos;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        double x1 = ler.nextDouble();
        double y1 = ler.nextDouble();
        double x2 = ler.nextDouble();
        double y2 = ler.nextDouble();
        System.out.printf("%.4f\n", Math.sqrt(Math.pow(x2 - x1, 2) + Math.pow(y2 - y1, 2))); 
        ler.close();
    }
}
