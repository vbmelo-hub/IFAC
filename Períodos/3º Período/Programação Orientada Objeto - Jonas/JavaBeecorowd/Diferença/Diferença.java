package Diferença;

import java.util.Scanner;

public class Diferença {
    public static void main(String[] args){
        Scanner teclado = new Scanner(System.in);
        int A, B, C, D;
        A = teclado.nextInt();
        B = teclado.nextInt();
        C = teclado.nextInt();
        D = teclado.nextInt();
        System.out.println("DIFERENÇA = " + (A * B - C * D));
        teclado.close();
    }
}