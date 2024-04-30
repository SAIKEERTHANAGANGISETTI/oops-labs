public class Threadsclass extends Thread{
    int number;
    Threadsclass(int num){
        number=num;
    }
    public void run(){
        multiply();
    }
    public void multiply(){
        for(int i=0;i<=10;i++){
            System.out.println(number+" * "+i+"= "+(number*i));
            try{
                Thread.sleep(1000);
            }catch(InterruptedException obj){
                obj.printStackTrace();
            }
        }
        
    }
    public static void main(String[] args) {
        Threadsclass obj =new Threadsclass(2);
        Threadsclass obj1=new Threadsclass(7);
        obj.start();
        obj1.start();
    }
}
class Twotable extends Thread{
    Threadsclass obj;
    Twotable(){
        obj=new Threadsclass(2);
    }
    public static void main(String[] args) {
        Twotable obj2 = new Twotable();
        obj2.start();
    }
}
class Threetable extends Thread{
    Threadsclass obj;
    Threetable(){
        obj=new Threadsclass(2);
    }
    public static void main(String[] args) {
        Threetable obj2 = new Threetable();
        obj2.start();
    }
}
