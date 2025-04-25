package sortsimples;

import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int x = ler.nextInt();
        int y = ler.nextInt();
        int z = ler.nextInt();
        int[] ordenar = {x, y, z};
        Arrays.sort(ordenar);

        for (int i : ordenar){
            System.out.println(i);
        }
        System.out.println();
        System.out.println(x);
        System.out.println(y);
        System.out.println(z);
        ler.close();
    }
}
