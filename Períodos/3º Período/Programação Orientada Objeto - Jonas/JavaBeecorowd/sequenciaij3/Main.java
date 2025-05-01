package sequenciaij3;

public class Main {
    public static void main(String[] args) {
        int jinicial = 7;

        for (int i = 1; i <= 9; i += 2) {
            for (int j = jinicial; j >= jinicial - 2; j--) {
                System.out.println("I=" + i + " J=" + j);
            }
            jinicial += 2;
        }
    }
}
