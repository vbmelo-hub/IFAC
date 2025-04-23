package CoordenadasDeUmPonto;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        double x = ler.nextDouble();
        double y = ler.nextDouble();
        if (x >= 0 && y >= 0){
            System.out.println("Q1");
        }else if (x < 0 && y > 1){
            System.out.println("Q2");
        }else if(x < 0 && y < 0){
            System.out.println("Q3");
        }else if(x >= 0 && y < 0){
        System.out.println("Q4");
        }
        ler.close();
    }
}
