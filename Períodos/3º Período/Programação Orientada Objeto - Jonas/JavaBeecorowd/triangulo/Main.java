package triangulo;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        double a = ler.nextDouble();
        double b = ler.nextDouble();
        double c = ler.nextDouble();

        if ((a + b > c) && (a + c > b) && (b + c > a)) {
            double perimetro = a + b + c;
            System.out.printf("Perimetro = %.1f\n", perimetro);
        }else {
            double area = ((a + b) * c) / 2;
            System.out.printf("Area = %.1f\n", area);
        }
        ler.close();
    }
}
