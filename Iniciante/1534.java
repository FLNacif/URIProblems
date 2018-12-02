import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        /*InputStreamReader ir = new InputStreamReader(System.in);
         BufferedReader in = new BufferedReader(ir);*/
        Scanner in = new Scanner(System.in);
        int n = 0;
        while (in.hasNextInt()) {
            n = in.nextInt();

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    System.out.print((i + j == n - 1) ? 2 : (i == j) ? 1 : 3);
                }
                System.out.println();
            }

        }
    }
}
