public class FunctionPrototype {
    // Function prototype (method declaration)
    public static void greetUser(String name);

    public static void main(String[] args) {
        String userName = "Alice";
        greetUser(userName); // Call the function
    }

    // Function definition
    public static void greetUser(String name) {
        System.out.println("Hello, " + name + "! Welcome to Java.");
    }
}