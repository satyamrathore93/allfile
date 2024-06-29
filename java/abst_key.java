abstract class animal{
    animal(){
        System.out.println("all animal");
    }
    public abstract void sound ();
    public void eat(){
        System.out.println("non veg");
    }

}
    class dog extends animal{
        dog(){
            super();
        }
     public void sound (){
        System.out.println("dog is barking");
     }
    }
    class lion extends animal{
        lion(){
            super();
        }
     public void sound (){
        System.out.println("lion is roar");
     }
    }
public class abst_key {
    
    public static void main(String[] args) {
               //        animal a = new animal();
               dog d= new dog();
               lion l= new lion();
               animal a= new dog();
               d.sound();
               l.sound();
               d.eat();
    }
}
