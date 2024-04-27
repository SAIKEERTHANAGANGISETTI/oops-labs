import java.io.*;
public class Copycommand {
    public static void main(String[] args){
        FileInputStream obj;
        FileOutputStream output;
        try{
            obj= new FileInputStream("keer.txt");
            output = new FileOutputStream("destination.txt");
            System.out.println("The number of remaining bytes : "+obj.available());
            while(obj.available()>0){
                output.write(obj.read());
            }
        }catch(FileNotFoundException fnf){
            System.out.println("Invalid file name");
        }catch(IOException ioe){
            System.out.println("Invalid ");
        }
       
    }
}
