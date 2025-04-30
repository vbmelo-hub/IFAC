package paresimparespositivosenegativos;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int par = 0;
        int impar = 0;
        int positivo = 0;
        int negativo = 0;
        int[] numeros = new int[5];

        for (int i = 0; i < numeros.length; i++) {
            numeros[i] = ler.nextInt();
            if (numeros[i] % 2 == 0) {
                par++;
            }
            else {
                impar++;
            }
            if (numeros[i] > 0) {
                positivo++;
            }
            else if (numeros[i] < 0) {
                negativo++;
            }
        }

        System.out.println(par + " valor(es) par(es)");
        System.out.println(impar + " valor(es) impar(es)");
        System.out.println(positivo + " valor(es) positivo(s)");
        System.out.println(negativo + " valor(es) negativo(s)");
        ler.close();
    }
}
