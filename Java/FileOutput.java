import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class FileInput {
    public static void main(String[] args) {
        // Specify the file path
        File file = new File("input.txt");

        try {
            // Create a Scanner to read the file
            Scanner scanner = new Scanner(file);

            System.out.println("Contents of the file:");

            // Read and print each line of the file
            while (scanner.hasNextLine()) {
                String line = scanner.nextLine();
                System.out.println(line);
            }

            scanner.close();
        } catch (FileNotFoundException e) {
            System.out.println("File not found: " + e.getMessage());
        }
    }
}