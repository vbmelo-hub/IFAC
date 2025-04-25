package IdadeEmDias;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int idade = ler.nextInt();

        int ano = idade / 365;
        int resto = idade % 365;
        int mes = resto / 30;
        int dias = resto % 30;

        System.out.println(ano + " ano(s)"); 
        System.out.println(mes + " mes(es)"); 
        System.out.println(dias + " dia(s)"); 
        ler.close();
    }
}
