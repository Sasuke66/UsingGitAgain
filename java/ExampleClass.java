public class ExampleClass implements Runnable{
    public void run() {
        System.out.println("Thread has ended");
    }

public static void main(String[] args) {
    ExampleClass ex = new ExampleClass();
    Thread t1 = new Thread(ex);
    t1.start();
    System.out.println("Hi");
}
}
