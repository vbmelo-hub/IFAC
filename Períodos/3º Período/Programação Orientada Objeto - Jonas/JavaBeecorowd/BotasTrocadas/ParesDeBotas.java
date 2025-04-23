package BotasTrocadas;
import java.util.Scanner;

public class ParesDeBotas {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        // Assumindo que os tamanhos vão de 30 a 60, por exemplo
        // Índice 0 representa o tamanho 0, vamos usar até tamanho 61
        int[] esquerdo = new int[61];
        int[] direito = new int[61];

        for (int i = 0; i < N; i++) {
            int tamanho = sc.nextInt();
            char lado = sc.next().charAt(0);

            if (lado == 'E') {
                esquerdo[tamanho]++;
            } else {
                direito[tamanho]++;
            }
        }

        int totalPares = 0;
        for (int i = 0; i < 61; i++) {
            totalPares += Math.min(esquerdo[i], direito[i]);
        }

        System.out.println(totalPares);
    }
}
