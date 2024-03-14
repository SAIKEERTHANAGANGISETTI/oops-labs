import java.util.Scanner;
public class AbsEncap
{
    int pubvar;
    private 
    int privar;
    protected
    int provar;
    void setvar(int pri,int pro,int pub)
    {
        privar=pri;
        provar=pro;
        pubvar=pub;
    }
    void getvar()
    {
        System.out.println("Private variable : "+privar);
        System.out.println("Protected variable : "+provar);
        System.out.println("Public variable : "+pubvar);
    }
    public static void main(String [] args)
    {
        AbsEncap obj=new AbsEncap();
        Scanner input =new Scanner(System.in);
        int a,b,c;
        System.out.println("enter any 3 nummbers :");
        a=input.nextInt();
        b=input.nextInt();
        c=input.nextInt();
        obj.setvar(a,b,c);
        obj.getvar();
    }
}