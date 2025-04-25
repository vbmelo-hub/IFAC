package Animal;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        String a = ler.nextLine();
        String b = ler.nextLine();
        String c = ler.nextLine();

        String chave = a + "-" + b + "-" + c;

        switch (chave) {
            case "vertebrado-ave-carnivoro":
                System.out.println("aguia");
                break;
            case "vertebrado-ave-onivoro":
                System.out.println("pomba");
                break;
            case "vertebrado-mamifero-onivoro":
                System.out.println("homem");
                break;
            case "vertebrado-mamifero-herbivoro":
                System.out.println("vaca");
                break;
            case "invertebrado-inseto-hematofago":
                System.out.println("pulga");
                break;
            case "invertebrado-inseto-herbivoro":
                System.out.println("lagarta");
                break;
            case "invertebrado-anelideo-hematofago":
                System.out.println("sanguessuga");
                break;
            case "invertebrado-anelideo-onivoro":
                System.out.println("minhoca");
                break;
            default:
                System.out.println("Combinação inválida");
        }

        ler.close();
    }
}