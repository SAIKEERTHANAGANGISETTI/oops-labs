abstract class Animal{
    abstract void walk();
    Animal(){
        System.out.println("Animal have 2 eyes!");
    }
    public void eat(){
        System.out.println("This Animal eats");
        
    }
}
class Horse extends Animal{
    public void walk(){
        System.out.println("Horse walks on 4 legs");
    }
}
class Dog extends Animal{
    public void walk(){
        System.out.println("Dog walks on 4 legs");
    }
}
public class PartialAbs{
    public static void main(String[] args){
        Horse horse=new Horse();
        Dog dog=new Dog();
        horse.walk();
        dog.walk();
        dog.eat();
    }
}