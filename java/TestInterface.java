interface TestInterface {
    public void myMethod(); 
}

interface SecondInterface {
    public void myOtherMethod(); 
}

class DemoClass implements TestInterface, SecondInterface {
    public void myMethod() {
        System.out.println("Some text..");
    }

    public void myOtherMethod() {
        System.out.println("Some other text...");
    }
}