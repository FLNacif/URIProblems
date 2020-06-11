import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        int a = in.nextInt();
        int b = in.nextInt();
        double c = in.nextDouble();
        
        System.out.println("NUMBER = "+a);
        System.out.printf("SALARY = U$ %.2f\n",(b*c));
    }
}
