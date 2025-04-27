package tiposdeTriangulos;

import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        double[] lados = new double[3];
        lados[0] = ler.nextDouble();
        lados[1] = ler.nextDouble();
        lados[2] = ler.nextDouble();

        Arrays.sort(lados);
        double a = lados[2];
        double b = lados[1];
        double c = lados[0];

        if(a >= b + c){
            System.out.println("NAO FORMA TRIANGULO");
        }else if ((a * a) == ((b * b) + (c * c))){
            System.out.println("TRIANGULO RETANGULO");
        }else if ((a * a) > ((b * b) + (c * c))){
            System.out.println("TRIANGULO OBTUSANGULO");
        }else if((a * a) < ((b * b) + (c * c))){
            System.out.println("TRIANGULO ACUTANGULO");
        }if(a == b && c == a){
            System.out.println("TRIANGULO EQUILATERO");
        }else if(a == b || a == c || b == c){
            System.out.println("TRIANGULO ISOSCELES");
        }
        ler.close();
    }
}
