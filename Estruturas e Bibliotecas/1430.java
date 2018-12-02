import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String txt;
        int n;
        int compasso;
        while ((txt = in.nextLine()).charAt(0) != '*') {
            n = 0;
            compasso = 0;
            for (int i = 0; i < txt.length(); i++) {
                if (txt.charAt(i) == '/') {
                    if (compasso == 64) {
                        n++;
                    }
                    compasso = 0;
                } else {
                    switch (txt.charAt(i)) {
                        case 'W':
                            compasso += 64;
                            break;
                        case 'H':
                            compasso += 32;
                            break;
                        case 'Q':
                            compasso += 16;
                            break;
                        case 'E':
                            compasso += 8;
                            break;
                        case 'S':
                            compasso += 4;
                            break;
                        case 'T':
                            compasso += 2;
                            break;
                        case 'X':
                            compasso += 1;
                            break;
                    }
                }
            }
            System.out.println(n);
        }
    }
}