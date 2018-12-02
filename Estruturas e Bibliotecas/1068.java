import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String txt;
        while(in.hasNextLine()){
            txt = in.nextLine();
            int cont = 0;
            for (int i = 0; i < txt.length(); i++) {
                if(txt.charAt(i)=='(')
                    cont++;
                else if(txt.charAt(i)==')'){
                    cont--;
                    if(cont<0)
                        break;
                }
                
            }
            if(cont==0)
                System.out.println("correct");
            else
                System.out.println("incorrect");
        }
    }
}
