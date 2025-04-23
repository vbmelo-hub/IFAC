package OMaior;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int A = ler.nextInt();
        int B = ler.nextInt();
        int C = ler.nextInt();
        int MaiorAB = (A + B + Math.abs(A - B)) / 2;
        int MaiorABC = (MaiorAB + C + Math.abs(MaiorAB - C)) / 2;
        System.out.println(MaiorABC + " eh o maior");
        ler.close();
    }
}
