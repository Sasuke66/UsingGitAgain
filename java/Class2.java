class Class {
    public int x;
    public void nums(){
        x = 10;
        System.out.println(x);
    }
}
class Class2 extends Class{
    public int y;
    public void nums2(){
        y = 20;
        System.out.println(y);
    }
    public static void main(String[] args){
        Class2 obj = new Class2();
            obj.nums();
            obj.nums2();
        }
    }