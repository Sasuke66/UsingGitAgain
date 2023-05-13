import java.util.Scanner;

public class third {
    static void moth() {
        Scanner op = new Scanner(System.in);
        System.out.print("Enter the value of a : ");
        int a = op.nextInt();
        System.out.print("Enter the value of b : ");
        int b = op.nextInt();
        System.out.print("Value in the end is : ");
        System.out.println(a + b);
    }

    public static void main(String[] args) {
        moth();
    }
}