package Media1;

import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner teclado = new Scanner(System.in);
        Double A = teclado.nextDouble();
        Double B = teclado.nextDouble();
        Double X = (A*3.5 + B*7.5) / (3.5 + 7.5);
        System.out.printf("MEDIA = %.5f\n", X);
        teclado.close();
    }
    
}
