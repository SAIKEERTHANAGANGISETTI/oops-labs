import java.util.Scanner;
public class Paraconst
{
    String fullname;
    int rollnum;
    double sempercentage;
    String collegename;
    int collegecode;
    Paraconst()
    {
        collegename="MVGR";
        collegecode=33;
    }
    Paraconst(String name,int rollnumber)
    {
        fullname=name;
        rollnum=rollnumber;
    }
    public void displayinfo()
    {
        System.out.println("Student Name : "+fullname);
        System.out.println("Student Rollnumber : "+rollnum);
        System.out.println("Sem Percentage : "+sempercentage);
        System.out.println("College Name : "+collegename);
        System.out.println("College Code : "+collegecode);
    }
    public static void main(String[] args)
    {
        //default constructor
        Paraconst s1=new Paraconst();
        Scanner input=new Scanner(System.in);
        System.out.println("Enter your name(s1) : ");
        s1.fullname=input.nextLine();
        System.out.println("enter your roll number(s1): ");
        s1.rollnum=input.nextInt();
        System.out.println("Enter your semester percentage(s1) : ");
        s1.sempercentage=input.nextDouble();
        //parameterized constructor
        Paraconst s2=new Paraconst("Sai Keerthana",550);
        System.out.println("Enter your semester percentage(s2) : ");
        s2.sempercentage=input.nextDouble();
        System.out.println("Which college are you studying in ? :(s2) ");
        s2.collegename=input.next();
        System.out.println("Enter your college code(s2):");
        s2.collegecode=input.nextInt();
        System.out.println("------Student 1 Details : ------");
        s1.displayinfo();
        System.out.println("------Student 2 Details : ------");
        s2.displayinfo();
    }
}