import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        
    
    InputStreamReader ir = new InputStreamReader(System.in);
    BufferedReader in = new BufferedReader(ir);
    
    int n;
    int[] cedulas = {100,50,20,10,5,2,1}; 
    n = Integer.parseInt(in.readLine());
        System.out.println(n);
        for (int i = 0; i < 7; i++) {
            System.out.println(n/cedulas[i] + " nota(s) de R$ "+cedulas[i]+",00");
            n=n%cedulas[i];
        }
    
}
}
