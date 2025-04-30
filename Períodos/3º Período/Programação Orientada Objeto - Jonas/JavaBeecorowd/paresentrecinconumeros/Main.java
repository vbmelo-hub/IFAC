package paresentrecinconumeros;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int contador = 0;
        int[] numeros = new int[5];

        for (int i = 0; i < numeros.length; i++) {
            numeros[i] = ler.nextInt();
            if (numeros[i] % 2 == 0) {
                contador++;
            }
        }
        System.out.println(contador + " valores pares");
        ler.close();
    }
}