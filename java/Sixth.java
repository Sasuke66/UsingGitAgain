import java.util.Scanner;

public class Sixth {
    public static void main(String[] args) {
        Scanner op = new Scanner(System.in);
        System.out.print("Enter value of i : ");
        int i = op.nextInt();
        if (i <= 100 && i > 90) {
            System.out.println("Your grade is A+.");
        } else if (i >= 90 && i <= 80) {
            System.out.println("A");
        } else if (i >= 80 && i <= 70) {
            System.out.println("B+");
        } else if (i >= 70 && i <= 65) {
            System.out.println("B");
        } else if (i >= 65 && i <= 60) {
            System.out.println("C+");
        } else if (i >= 60 && i <= 55) {
            System.out.println("C");
        } else if (i >= 55 && i <= 50) {
            System.out.println("D+");
        } else if (i >= 50 && i <= 45) {
            System.out.println("D");   
        } else if (i >= 45 && i <= 40) {
            System.out.println("E");  
        } else {
            System.out.println("Fail");
        }
    }
}
