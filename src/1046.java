import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
 
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        
        int i,f, d;
        String[] s;
        s = in.readLine().split(" ");
        i = Integer.parseInt(s[0]);
        f = Integer.parseInt(s[1]);
        d = (i==f)?24:((i>f)?24-i+f:f-i);
        System.out.println("O JOGO DUROU "+d+" HORA(S)");
    }
}
