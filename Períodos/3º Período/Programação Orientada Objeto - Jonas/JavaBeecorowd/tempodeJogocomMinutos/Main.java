package tempodeJogocomMinutos;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int horaInicial = ler.nextInt();
        int minutoInicial = ler.nextInt();
        int horaFinal = ler.nextInt();
        int minutoFinal = ler.nextInt();

        int inicioEmMinutos = horaInicial * 60 + minutoInicial;
        int finalEmMinutos = horaFinal * 60 + minutoFinal;
        int duracaoEmMinutos;
        if(finalEmMinutos > inicioEmMinutos){
            duracaoEmMinutos = finalEmMinutos - inicioEmMinutos;
        }else{
            duracaoEmMinutos = (24 * 60 - inicioEmMinutos) + finalEmMinutos;
        }

        int hora = duracaoEmMinutos / 60;
        int minutos = duracaoEmMinutos % 60;
        
        System.out.printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minutos);
        ler.close();
    }
}