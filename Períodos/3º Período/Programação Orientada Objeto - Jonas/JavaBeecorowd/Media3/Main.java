package Media3;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        double n1 = ler.nextDouble();
        double n2 = ler.nextDouble();
        double n3 = ler.nextDouble();
        double n4 = ler.nextDouble();
        double media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
        System.out.printf("Media: %.1f\n", media);
        if (media >= 7.0) {
            System.out.println("Aluno aprovado.");
        }else if (media < 5.0){
            System.out.println("Aluno reprovado.");
        }else {
            System.out.println("Aluno em exame.");
            double exame = ler.nextDouble();
            System.out.printf("Nota do exame: %.1f\n", exame);
            double media2 = (media + exame) / 2;
            if (media2 >= 5.0){
                System.out.println("Aluno aprovado.");
            }else{
                System.out.println("Aluno reprovado.");
            }
            System.out.printf("Media final: %.1f\n", media2);
        }
        ler.close();
    }
}
