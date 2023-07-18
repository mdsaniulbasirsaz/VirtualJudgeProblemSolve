import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        Long a=input.nextLong();
        Long b=input.nextLong();
        Long c= input.nextLong();
        Long d= input.nextLong();
        
        if(a*b>c*d)
        {
            System.out.println(a*b);
        }
        else if(c*d>a*b)
        {
            System.out.println(c*d);
        }
        else
        {
            System.out.println(a*b);
        }
    }
}
