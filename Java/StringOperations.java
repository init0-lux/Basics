public class StringOperations {
    public static void main(String[] args) {
        String str1 = "Hello";
        String str2 = "Java";

        // Concatenation
        String result = str1 + " " + str2;
        System.out.println("Concatenated String: " + result);

        // Length of a string
        System.out.println("Length of str1: " + str1.length());

        // Convert to uppercase
        System.out.println("Uppercase str1: " + str1.toUpperCase());

        // Convert to lowercase
        System.out.println("Lowercase str2: " + str2.toLowerCase());

        // Substring
        System.out.println("Substring of str1 (1-3): " + str1.substring(1, 3));

        // Check if a string contains a substring
        System.out.println("Does str1 contain 'ell'? " + str1.contains("ell"));

        // Replace characters
        System.out.println("Replace 'l' with 'x' in str1: " + str1.replace('l', 'x'));
    }
}