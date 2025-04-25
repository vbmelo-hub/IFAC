package Lanche;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int cod = ler.nextInt();
        int qtde = ler.nextInt();

        switch (cod) {
            case 1:
                System.out.printf("Total: R$ %.2f\n", (qtde * 4.00));
                break;
            case 2:
                System.out.printf("Total: R$ %.2f\n", (qtde * 4.50));
                break;
            case 3:
                System.out.printf("Total: R$ %.2f\n", (qtde * 5.00));
                break;
            case 4:
                System.out.printf("Total: R$ %.2f\n", (qtde * 2.00));
                break;
            case 5:
                System.out.printf("Total: R$ %.2f\n", (qtde * 1.50));
                break;
        }
        ler.close();
    }
}
