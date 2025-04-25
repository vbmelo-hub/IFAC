package SalarioComBonus;

import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner teclado = new Scanner(System.in);
        String nome = teclado.nextLine();
        double salarioFixo = teclado.nextDouble();
        double totalVendas = teclado.nextDouble();
        double salarioBonus = (totalVendas * 0.15) + salarioFixo; 
        System.out.printf("TOTAL = R$ %.2f\n", salarioBonus);
        teclado.close();
    }
}
