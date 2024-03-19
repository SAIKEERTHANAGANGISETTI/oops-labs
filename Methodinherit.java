import java.util.Scanner;

class Nums
{
    int a;
    int b;
    int c;
}
class Addtwonums extends Nums{
    void add(int a,int b)
    {
        System.out.println(a+"+"+b+"="+(a+b));
    }
}
class Addthreenums extends Addtwonums{
    void add(int a,int b,int c)
    {
    
        System.out.println(a+"+"+b+"+"+c+"="+(a+b+c));
    }
}
public class Methodinherit
{
    public static void main(String[] args)
    {
        Addthreenums obj=new Addthreenums();
        Scanner input=new Scanner(System.in);
        //Method obj=new Method();
        System.out.println("Enter a value : ");
        obj.a=input.nextInt();
        System.out.println("Enter b value : ");
        obj.b=input.nextInt();
        System.out.println("Enter c value : ");
        obj.c=input.nextInt();
        obj.add(obj.a,obj.b,obj.c);
        obj.add(obj.a,obj.b);
    }
}