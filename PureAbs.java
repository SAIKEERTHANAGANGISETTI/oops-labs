interface Animal{
    void walks();
}
class Horse implements Animal {
    public void walks(){
        System.out.println("Horse walks on 4 legs");
    }

}
class Dog implements Animal{
    public void walks(){
        System.out.println("Dog walks on 4 legs");

    }
}
public class PureAbs {
    public static void main(String[] args) {
        Horse horse=new Horse();
        Dog dog=new Dog();
        horse.walks();
        dog.walks();   
    }
}
