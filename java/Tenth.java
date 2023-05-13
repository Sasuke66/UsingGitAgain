public class Tenth {
    static int Meth(int x, int y){
        return x + y;
    }
    
    static double Meth(double x, double y) {
        return x + y;
    }
    public static void main(String[] args){
        int num1 = Meth(2, 6);
        double num2 = Meth(7, 5);
        System.out.println(num1);
        System.out.println(num2);
    }
}
