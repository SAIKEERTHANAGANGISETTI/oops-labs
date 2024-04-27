
import java.io.*;
import java.util.Scanner;
class Hello{

}
public class Multiexception {
    public static void main(String[] args){
        int a,b,c;
        String ptr= null;
        try{
            Class.forName("iello");
        }catch(ClassNotFoundException obj1){
            System.out.println("class that you have mentioned ,is not found");
        }
        try{
            if(ptr.equals("keer")){
            System.out.println("same");
            }
            else{
                System.out.println("not same");
            }
        }catch(NullPointerException obj){
            System.out.println("Nullpointer exception caught");
        }
        Scanner ip=new Scanner(System.in);
        System.out.println("Enter a number :");
        a=ip.nextInt();
        b=0;
        try{
            c=a/b;
            System.out.println(c);
        }catch(ArithmeticException obj){
            System.out.println("Divide by zero throws arithmetic exception");
        }
    }
}
