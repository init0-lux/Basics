public class DataType {
    public static void main(String[] args) {
        // Primitive data types
        byte byteVar = 127; // 8-bit integer
        short shortVar = 32767; // 16-bit integer
        int intVar = 2147483647; // 32-bit integer
        long longVar = 9223372036854775807L; // 64-bit integer
        float floatVar = 3.14f; // 32-bit floating point
        double doubleVar = 3.141592653589793; // 64-bit floating point
        char charVar = 'A'; // 16-bit Unicode character
        boolean booleanVar = true; // true or false

        // Output values
        System.out.println("byte: " + byteVar);
        System.out.println("short: " + shortVar);
        System.out.println("int: " + intVar);
        System.out.println("long: " + longVar);
        System.out.println("float: " + floatVar);
        System.out.println("double: " + doubleVar);
        System.out.println("char: " + charVar);
        System.out.println("boolean: " + booleanVar);

        // Reference data type (String)
        String stringVar = "Hello, Java!";
        System.out.println("String: " + stringVar);
    }
}
