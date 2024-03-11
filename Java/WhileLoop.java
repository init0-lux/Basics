import java.util.Scanner;

public class WhileLoop {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number;

        System.out.print("Enter a positive number: ");
        number = scanner.nextInt();

        // While loop to count down from the entered number to 1
        while (number > 0) {
            System.out.println("Count: " + number);
            number--;
        }

        System.out.println("Blastoff!");
        scanner.close();
    }
}