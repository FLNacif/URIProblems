import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        int n = Integer.parseInt(in.readLine());
        
        for (int i = 1; i <= n; i++) {
            
            int i2 = (int) Math.pow(i, 2), i3 = (int) Math.pow(i, 3);
            
            System.out.println(i+" "+i2+" "+i3+"\n"+i+" "+(i2+1)+" "+(i3+1));         
        }
    }
}
