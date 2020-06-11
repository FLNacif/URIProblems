import java.util.ArrayDeque;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n;
        ArrayDeque pilhaDeCartas;
        StringBuilder txt = new StringBuilder();
        while ((n = in.nextInt()) != 0) {
            if (n > 1) {
                pilhaDeCartas = new ArrayDeque(n);
                for (int i = 1; i <= n; i++) {
                    pilhaDeCartas.addLast(i);
                }
                txt.append("Discarded cards:");
                while (pilhaDeCartas.size() > 2) {
                    txt.append(" ").append(pilhaDeCartas.pollFirst()).append(",");
                    pilhaDeCartas.addLast(pilhaDeCartas.pollFirst());
                }
                txt.append(" ").append(pilhaDeCartas.pollFirst());
                pilhaDeCartas.addLast(pilhaDeCartas.pollFirst());
                txt.append("\n");
                txt.append("Remaining card: ").append(pilhaDeCartas.pollFirst()).append("\n");
            } else {
                txt.append("Discarded cards:\nRemaining card: 1");
            }
        }
        System.out.print(txt);
    }
}