package impostoderenda;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        double renda = ler.nextDouble();
        double imposto = 0.0;

        if (renda <= 2000.00) {
            System.out.println("Isento");
        }
        else if (renda <= 3000.00) {
            imposto = (renda - 2000.00) * 0.08;
            System.out.printf("R$ %.2f\n", imposto);
        }
        else if (renda <= 4500.00) {
            imposto = (1000.00 * 0.08) + (renda - 3000.00) * 0.18;
            System.out.printf("R$ %.2f\n", imposto);
        }
        else {
            imposto = (1000.00 * 0.08) + (1500.00 * 0.18) + ((renda - 4500.00) * 0.28);
            System.out.printf("R$ %.2f\n", imposto);
        }
        ler.close();
    }
}
