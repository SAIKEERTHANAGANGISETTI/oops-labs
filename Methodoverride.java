
class Method {
    double a,b,c;
    void add(int a,int b,int c)
    {
        System.out.println(a+" +"+b+" + "+c+" = "+(a+b+c));
    }
    void add(double a,double b,double c)
    {
        System.out.println(a+" +"+b+" + "+c+" = "+(a+b+c));
    }
}
public class Methodoverride
{
    public static void main(String [] args)
    {
        Method obj=new Method();
        obj.add(2.3,1.2,4.5);
        obj.add(12,11,22);
    }
}
