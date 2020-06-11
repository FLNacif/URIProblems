import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        in.next();
        double a = in.nextDouble();
        double b = in.nextDouble();
        
        System.out.printf("TOTAL = R$ %.2f\n",(a+(0.15*b)));
    }
}
