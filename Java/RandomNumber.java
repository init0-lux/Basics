import java.util.Random;

public class RandomNumber {
    public static void main(String[] args) {
        Random random = new Random();

        // Generate a random integer
        int randomInt = random.nextInt(100); // Random number between 0 and 99
        System.out.println("Random integer: " + randomInt);

        // Generate a random double
        double randomDouble = random.nextDouble(); // Random number between 0.0 and 1.0
        System.out.println("Random double: " + randomDouble);

        // Generate a random boolean
        boolean randomBoolean = random.nextBoolean();
        System.out.println("Random boolean: " + randomBoolean);
    }
}