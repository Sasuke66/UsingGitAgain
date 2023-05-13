class MultiThreadDemoMO23 {

    public static void main(String[] args) {
        new NewThread_MO2("Multiples of two");
        new NewThread_MO3("Multiples of three");

        try {
            Thread.sleep(1000);
        }

        catch (InterruptedException e) {
            System.out.println("Main Thread Interrupted");
        }
        System.out.println("Main Thread Exiting ");
    }// main ends here
}// class ends here