import java.util.*;

public class Ninth{
    public static void main(String[] args) {
        Random random = new Random();
        int num = random.nextInt(90) + 10; // generates a random number between 10 and 99
        int sum = 0;
        int temp = num;
        int digit;

        while (temp != 0) {
            digit = temp % 10;
            sum += Math.pow(digit, 2);
            temp /= 10;
        }

        if (sum == num) {
            System.out.println(num + " is an Armstrong number.");
        } else {
            System.out.println(num + " is not an Armstrong number.");
        }
    }
}
