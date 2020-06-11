import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        String[] s = new String[Integer.parseInt(in.readLine())];
        for (int i = 0; i < s.length; i++) {
            s[i] = in.readLine();
        }
        int p1, p2;
        double g1, g2;
        for (String item : s) {
            p1 = Integer.parseInt(item.split(" ")[0]);
            p2 = Integer.parseInt(item.split(" ")[1]);
            g1 = Double.parseDouble(item.split(" ")[2])/100;
            g2 = Double.parseDouble(item.split(" ")[3])/100;
            int anos = 0;
            while (p1 <= p2 && anos<=101) {
                p1 = (int) (p1 + (p1 * g1));
                p2 = (int) (p2 + (p2 * g2));
                anos++;
            }
            if(anos<101){
                System.out.println(anos + " anos.");
            }else{
                System.out.println("Mais de 1 seculo.");
            }

        }

    }
}
