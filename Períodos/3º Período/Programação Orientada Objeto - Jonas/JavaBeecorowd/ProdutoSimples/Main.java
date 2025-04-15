package ProdutoSimples;

import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner teclado = new Scanner(System.in);
        int A = teclado.nextInt();
        int B = teclado.nextInt();
        int PROD = A * B;
        System.out.println("PROD = " + PROD);
        teclado.close();
    }
}
