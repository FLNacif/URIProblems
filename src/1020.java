import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        
        int n = Integer.parseInt(in.readLine());
        
        System.out.println(n/365+" ano(s)");
        n%=365;
        System.out.println(n/30+" mes(es)");
        System.out.println(n%30+" dia(s)");
    }
}
