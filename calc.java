import java.util.Scanner;
public class Calculator{
    public static void main(String[] args)
    {
        Scanner input= new Scanner(System.in);
        System.out.print("enter first operand : ");
         double a = input.nextDouble();
        System.out.print("enter second operand : ");
        double b = input.nextDouble();
        System.out.println("0.exit\n1.add\n2.sub\n3.mul.\n4.div");
        System.out.println("enter your choice :");
        double c = input.nextDouble();
        do
        {
        if(c==1)
        {
            System.out.println(a+"+"+b+"="+(a+b));
        }
        else if(c==2)
        {
            System.out.println(a+"-"+b+"="+(a-b));
        }
        else if(c==3)
        {
            System.out.println(a+"*"+b+"="+(a*b));
        }
        else if(c==4)
        {
            System.out.println(a+"/"+b+"="+(a/b));
        }
        else
        {
            System.out.println("invalid choice");
        }
        System.out.println("enter your choice :");
        c = input.nextDouble();
        }while(c!=0);
    }
}
