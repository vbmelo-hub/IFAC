package aumentodesalario;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        double salario = ler.nextDouble();
        
        double reajuste;
        if(salario >= 0 && salario <= 400.00){
            reajuste = salario * 0.15 + salario;
            System.out.printf("Novo salario: %.2f\n", reajuste);
            System.out.printf("Reajuste ganho: %.2f\n", (reajuste - salario));
            System.out.println("Em percentual: 15 %");
        }else if(salario >= 400.01 && salario <= 800.00){
            reajuste = salario * 0.12 + salario;
            System.out.printf("Novo salario: %.2f\n", reajuste);
            System.out.printf("Reajuste ganho: %.2f\n", (reajuste - salario));
            System.out.println("Em percentual: 12 %");
        }else if(salario >= 800.01 && salario <= 1200.00){
            reajuste = salario * 0.10 + salario;
            System.out.printf("Novo salario: %.2f\n", reajuste);
            System.out.printf("Reajuste ganho: %.2f\n", (reajuste - salario));
            System.out.println("Em percentual: 10 %");
        }else if(salario >= 1200.01 && salario == 2000.0){
            reajuste = salario * 0.7 + salario;
            System.out.printf("Novo salario: %.2f\n", reajuste);
            System.out.printf("Reajuste ganho: %.2f\n", (reajuste - salario));
            System.out.println("Em percentual: 7 %");
        }else{
            reajuste = salario * 0.4 + salario;
            System.out.printf("Novo salario: %.2f\n", reajuste);
            System.out.printf("Reajuste ganho: %.2f\n", (reajuste - salario));
            System.out.println("Em percentual: 4 %");
        }
        ler.close();
    }
}
