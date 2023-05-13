//private access modifier use that is used only in the class the attributes are created.
public class Thirteenth{
    private String name = "Sattu";
    private String batch = "BCA M2";
    private int enroll = 100;

    public static void main(String[] args){
        Thirteenth obj = new Thirteenth();
        System.out .println(obj.name + "  " + obj.batch + "  " + obj.enroll);
    }
}