import java.util.*;

public class Eleventh {
    public static void main(String[] args) {
        Scanner readme = new Scanner(System.in);
        System.out.println("Enter Two Numbers : ");
        // while(!readme.hasNextDouble()) {
        // System.out.println("Try entering a number");
        // readme.next();
        // }
        double n1, n2, n3;
        n1 = readme.nextDouble();
        n2 = readme.nextDouble();
        n3 = n1 + n2;
        System.out.println("Total = " + n3);
    }
}