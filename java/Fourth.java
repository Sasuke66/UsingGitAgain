import java.util.Scanner;

public class Fourth {
    int a;
    int b;

    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        System.out.print("Enter the value of a : ");
        int a = obj.nextInt();
        System.out.print("Enter the value of b : ");
        int b = obj.nextInt();
        System.out.println("The value sum of a and b is : " + (a + b));
    }
}
