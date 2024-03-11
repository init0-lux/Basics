public class Array {
    public static void main(String[] args) {
        // declaring
        int[] numbers = {1, 2, 3, 4, 5};

        // access
        System.out.println("Array elements:");
        for (int i = 0; i < numbers.length; i++) {
            System.out.println("Element at index " + i + ": " + numbers[i]);
        }

        // modify
        numbers[2] = 10;
        System.out.println("Modified element at index 2: " + numbers[2]);

        // calculated
        int sum = 0;
        for (int num : numbers) {
            sum += num;
        }
        System.out.println("Sum of array elements: " + sum);
    }
}
