package senhafixa;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
     Scanner ler = new Scanner(System.in);
    int n = ler.nextInt();
    int senha = 2002;

        while (n != senha) {
            System.out.println("Senha Invalida");
            n = ler.nextInt();
        }
        System.out.println("Acesso Permitido");
        ler.close();   
    }
}