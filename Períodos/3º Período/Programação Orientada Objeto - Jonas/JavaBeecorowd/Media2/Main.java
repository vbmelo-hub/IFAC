package Media2;

import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner teclado = new Scanner(System.in);
        Double A = teclado.nextDouble();
        Double B = teclado.nextDouble();
        Double C = teclado.nextDouble();
        Double X = (A*2 + B*3 + C*5) / (2+3+5);
        System.out.printf("MEDIA = %.1f\n", X);
        teclado.close();
    }
    
}
