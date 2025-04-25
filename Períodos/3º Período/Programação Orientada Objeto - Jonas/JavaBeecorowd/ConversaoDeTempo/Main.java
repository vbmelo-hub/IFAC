package ConversaoDeTempo;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int segundos = ler.nextInt();
        int hora = segundos / 3600;
        int resto = segundos % 3600;
        int minutos = resto / 60;
        segundos = resto % 60;
        System.out.println(hora + ":" + minutos + ":" + segundos);
        ler.close();
    }
}
