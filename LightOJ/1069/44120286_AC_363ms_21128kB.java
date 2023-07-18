import java.util.Scanner;

import static java.lang.Math.abs;

public class Main {

    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int t= input.nextInt();
        for(int i=1;i<=t;i++)
        {
            int a= input.nextInt();
            int b= input.nextInt();;
            int c=abs(a-b)*4;
            int d=a*4;
            System.out.println("Case "+i+": "+(c+d+19));
        }
    }
}

