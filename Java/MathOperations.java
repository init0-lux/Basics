public class MathOperations {
    public static void main(String[] args) {
        int a = 10;
        int b = 5;

        // Basic arithmetic operations
        System.out.println("Addition: " + (a + b));
        System.out.println("Subtraction: " + (a - b));
        System.out.println("Multiplication: " + (a * b));
        System.out.println("Division: " + (a / b));
        System.out.println("Modulus: " + (a % b));

        // Math class operations
        System.out.println("Square root of " + a + ": " + Math.sqrt(a));
        System.out.println("Power of " + a + " raised to " + b + ": " + Math.pow(a, b));
        System.out.println("Absolute value of -10: " + Math.abs(-10));
    }
}