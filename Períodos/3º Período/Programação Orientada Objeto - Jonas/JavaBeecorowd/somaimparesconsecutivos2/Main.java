import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int n = ler.nextInt();
        for (int i = 0; i <= n; i++) {
            int x = ler.nextInt();
            int y = ler.nextInt();

            int soma = 0;
            
            int menor = Math.min(x, y);
            int maior = Math.max(x, y);

            for (int j = menor + 1; j < maior; j++) {
                if (j % 2 != 0) {
                    soma += j;
                }
            }
            
            System.out.println(soma);
        }
        ler.close();
    }
}