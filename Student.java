import java.util.Scanner;
public class Student
{
    String fullname;
    int rollnum;
    double sempercentage;
    String collegename;
    int collegecode;
    Student()
    {
        System.out.println("I am a good student!!");
    }
    Student(String clg)
    {
        collegename=clg;
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
        Student s1=new Student();
        Scanner input=new Scanner(System.in);
        System.out.println("Enter your name : ");
        s1.fullname=input.nextLine();
        System.out.println("enter your roll number: ");
        s1.rollnum=input.nextInt();
        System.out.println("Enter your semester percentage : ");
        s1.sempercentage=input.nextDouble();
        System.out.println("Which college are you studying in ? : ");
        s1.collegename=input.next();
        System.out.println("Enter your college code :");
        s1.collegecode=input.nextInt();
        s1.displayinfo();
    }
}
