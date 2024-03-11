public class ForLoop {
    public static void main(String[] args) {
        // For loop to print numbers from 1 to 10
        System.out.println("Numbers from 1 to 10:");
        for (int i = 1; i <= 10; i++) {
            System.out.print(i + " ");
        }

        System.out.println(); // New line

        // For loop to calculate the sum of numbers from 1 to 10
        int sum = 0;
        for (int i = 1; i <= 10; i++) {
            sum += i;
        }
        System.out.println("Sum of numbers from 1 to 10: " + sum);
    }
}