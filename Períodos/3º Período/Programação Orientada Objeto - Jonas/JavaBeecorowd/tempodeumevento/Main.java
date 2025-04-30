package tempodeumevento;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        String diaInicioStr = ler.nextLine();
        int diaInicio = Integer.parseInt(diaInicioStr.split(" ")[1]);

        String[] horaInicioStr = ler.nextLine().split(" : ");
        int horaInicio = Integer.parseInt(horaInicioStr[0]);
        int minutoInicio = Integer.parseInt(horaInicioStr[1]);
        int segundosIncio = Integer.parseInt(horaInicioStr[2]);

        String diaFimStr = ler.nextLine();
        int diaFim = Integer.parseInt(diaFimStr.split(" ")[1]);

        String[] horaFimStr = ler.nextLine().split(" : ");
        int horaFim = Integer.parseInt(horaFimStr[0]);
        int minutoFim = Integer.parseInt(horaFimStr[1]);
        int segundosFim = Integer.parseInt(horaFimStr[2]);

        int inicioTotalSegundos = segundosIncio + minutoInicio * 60 + horaInicio * 3600 + diaInicio * 86400;
        int fimTotalSegundos = segundosFim + minutoFim * 60 + horaFim * 3600 + diaFim * 86400;

        int duracao = fimTotalSegundos = inicioTotalSegundos;

        int dias = duracao / 86400;
        duracao %= 86400;
        int horas = duracao / 3600;
        duracao %= 3600;
        int minutos = duracao / 60;
        int segundos = duracao % 60;

        System.out.println(dias + " dia(s)");
        System.out.println(horas + " hora(s)");
        System.out.println(minutos + " minuto(s)");
        System.out.println(segundos + " segundo(s)");
        ler.close();
    }
}
