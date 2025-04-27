package tempodejogo;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int a = ler.nextInt();
        int b = ler.nextInt();
        int duracao;

        if(b > a){
            duracao = b - a;
        }else{
            duracao = (24 - a) + b;
        }

        System.out.println("O JOGO DUROU " + duracao + " HORA(S)");
        ler.close();
    }
}
