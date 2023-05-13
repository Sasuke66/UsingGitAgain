public class Twelth {
    int aside, bside;
    Twelth(){
        int aside;
        int bside;
    }
    void display(){
        int cside = aside + bside;
        System.out.print("Value of cside is : " + cside);
    }

    public static void main(String[] args){
        Twelth obj = new Twelth();
        obj.aside = 24;
        obj.bside = 76;
        obj.display();
    }
}