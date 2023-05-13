import java.util.Scanner;

public class second {
    public static void main(String[] args) {
        Scanner op = new Scanner(System.in);
        System.out.print("Enter value of i : ");
        int i = op.nextInt();
        if (i < 12) {
            System.out.println("Good Morning...");
        } else if (i > 12 && i < 18) {
            System.out.println("Good Afternoon...");
        } else if (i > 18 && i < 20) {
            System.out.println("Good Evening...");
        } else if (i > 20 && i < 24) {
            System.out.println("Good Night...");
        } else {
            System.out.println("Error!");
        }
    }
}
