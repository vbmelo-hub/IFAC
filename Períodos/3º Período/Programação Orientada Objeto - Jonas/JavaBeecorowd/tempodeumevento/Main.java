package tempodeumevento;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        String linha = ler.nextLine();
        String[] partes = linha.split(" ");
        int dia = Integer.parseInt(partes[1]);

        for (int i = 0; i < 3; i++) {
            int tempo = ler.nextInt();
        }

        ler.close();
    }
}
