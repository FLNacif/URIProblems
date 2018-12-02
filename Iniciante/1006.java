import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        double a = in.nextDouble();
        double b = in.nextDouble();
        double c = in.nextDouble();
        
        System.out.printf("MEDIA = %.1f\n",((a*2+b*3+c*5)/10));
    }
}
