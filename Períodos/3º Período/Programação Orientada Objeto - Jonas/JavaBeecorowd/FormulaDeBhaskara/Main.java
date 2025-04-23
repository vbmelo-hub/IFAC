package FormulaDeBhaskara;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        double a = ler.nextDouble();
        double b = ler.nextDouble();
        double c = ler.nextDouble();
        double delta = b * b - 4 * a * c;

        if (a == 0 || delta < 0) {
            System.out.println("Impossivel calcular");
        }else {
            double R1 = (-b + Math.sqrt(delta)) / (2 * a);
            double R2 = (-b - Math.sqrt(delta)) / (2 * a);
            System.out.printf("R1 = %.5f\n", R1);
            System.out.printf("R2 = %.5f\n", R2);
        }
        ler.close();
    }
}
