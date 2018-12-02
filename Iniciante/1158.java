import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String[] n = new String[Integer.parseInt(in.readLine())];
        for (int i = 0; i < n.length; i++) {
            n[i] = in.readLine();
        }
        int a, b, c = 0;
        for (String n1 : n) {
            a = Integer.parseInt(n1.split(" ")[0]);
            b = Integer.parseInt(n1.split(" ")[1]);
            int i = 0;
            while (i < b) {
                if (a % 2 != 0) {
                    c += a;
                    i++;
                }
                a++;
            }
            System.out.println(c);
            c = 0;
        }
    }
}
