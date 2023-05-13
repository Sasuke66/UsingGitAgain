import java.util.*;
public class Eight {
    public static void main(String[] args){
        Random random = new Random();
        int x = random.nextInt(100);
        boolean flag = false;
        for (int i = 2; i <= x / 2; ++i) {
            if (x % i == 0) {
                flag = true;
                break;
            }
        }
        if (!flag)
            System.out.println(x + " is a prime number.");
        else
            System.out.println(x + " is not a prime number.");
    }
}
