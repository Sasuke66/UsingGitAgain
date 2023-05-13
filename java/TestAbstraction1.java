abstract class TestAbstraction1 {
    public abstract void Create();
    public void Name(){
        System.out.println("My Name is SHADOW... Nice to meet you!!");
    }
}

class TestDone extends TestAbstraction1{
    public void Create(){
        System.out.println("I created this program for test purpose to learn Abstraction.");
    }
}