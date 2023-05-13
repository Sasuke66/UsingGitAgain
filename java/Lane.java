import java.util.*;
public class Lane {
    static void checkAge() {
        Scanner scn = new Scanner(System.in);
        int age = scn.nextInt();
        System.out.println("Enter the age : " + age);
        if (age < 18) {
            throw new ArithmeticException("Access denied - You must be at least 18 years old.");
        } else {
            System.out.println("Access granted - You are old enough!");
        }
    }

    public static void main(String[] args) {
        checkAge(); // Set age to 15 (which is below 18...)
    }
}
