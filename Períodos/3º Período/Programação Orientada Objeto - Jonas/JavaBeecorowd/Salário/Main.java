package Salário;

import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner teclado = new Scanner(System.in);
        int funcionarios = teclado.nextInt();
        int horasTrabalhadas = teclado.nextInt();
        double ganhoPorHora = teclado.nextDouble();
        double salario = horasTrabalhadas * ganhoPorHora;
        System.out.println("NUMBBER = " + funcionarios);
        System.out.printf("SALARY = U$ %.2f\n", salario);
        teclado.close();
    }
}
