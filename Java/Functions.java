public class Functions {
    // Function to add two numbers
    public static int add(int a, int b) {
        return a + b;
    }

    // Function to check if a number is even
    public static boolean isEven(int number) {
        return number % 2 == 0;
    }

    // Function to print a message
    public static void printMessage(String message) {
        System.out.println("Message: " + message);
    }

    public static void main(String[] args) {
        int result = add(5, 10);
        System.out.println("Sum of 5 and 10: " + result);

        boolean evenCheck = isEven(7);
        System.out.println("Is 7 even? " + evenCheck);

        printMessage("Hello from Java Functions!");
    }
}