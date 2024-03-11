import java.util.Scanner;

public class DoWhileLoop {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number;

        // Do-while loop to repeatedly ask for input until a valid number is entered
        do {
            System.out.print("Enter a positive number: ");
            number = scanner.nextInt();

            if (number <= 0) {
                System.out.println("Invalid input! Please enter a positive number.");
            }
        } while (number <= 0);

        System.out.println("You entered a valid number: " + number);
        scanner.close();
    }
}