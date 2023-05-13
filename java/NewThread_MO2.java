//Program that creates multiple threads by implementing Runnable

class NewThread_MO2 implements Runnable {
    String name;
    Thread t;

    NewThread_MO2(String threadName) {
        // create a new second thread
        name = threadName;
        t = new Thread(this, name);
        System.out.println("New Thread :" + t);
        t.start();
    }

    public void run() {
        try {
            for (int i = 1; i <= 10; i++) {
                System.out.println(name + " : " + (i * 2));
                Thread.sleep(100);
            }
        } catch (InterruptedException e) {
            System.out.println(name + " Interrupted");
        }
        System.out.println(name + " Exiting");

    }// run ends here
}

class NewThread_MO3 implements Runnable {
    String name;
    Thread t;

    NewThread_MO3(String threadName) {
        // create a new second thread
        name = threadName;
        t = new Thread(this, name);
        System.out.println("New Thread :" + t);
        t.start();
    }

    public void run() {
        try {
            for (int i = 1; i <= 10; i++) {
                System.out.println(name + " : " + (i * 3));
                Thread.sleep(100);
            }
        } catch (InterruptedException e) {
            System.out.println(name + " Interrupted");
        }
        System.out.println(name + " Exiting");

    }// run ends here
}