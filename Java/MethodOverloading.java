public class MethodOverloading {
    // Method to add two integers
    public static int add(int a, int b) {
        return a + b;
    }

    // Overloaded method to add three integers
    public static int add(int a, int b, int c) {
        return a + b + c;
    }

    // Overloaded method to add two double values
    public static double add(double a, double b) {
        return a + b;
    }

    public static void main(String[] args) {
        System.out.println("Sum of 5 and 10: " + add(5, 10));
        System.out.println("Sum of 5, 10, and 15: " + add(5, 10, 15));
        System.out.println("Sum of 5.5 and 10.5: " + add(5.5, 10.5));
    }
}