import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        
        int l = Integer.parseInt(in.readLine());
        int c=1;
        
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < 4; j++) {
            System.out.print((c%4!=0)?c+" ":"PUM");
            c++;                
            }
            System.out.println("");
        }
    }
}
