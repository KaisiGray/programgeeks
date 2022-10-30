import java.util.Scanner;

public class SecondSmallestNumber {

	public static void main(String[] args) {

		int arraySize, smallest;

		Scanner scan = new Scanner(System.in);

		System.out.print("Enter the Size of Array: ");
		arraySize = scan.nextInt();

		if (arraySize < 2) {
			System.out.println("\nSize of Array must be >= 2");
			return;
		}

		int[] arr = new int[arraySize];

		System.out.print("Enter " + arraySize + " Numbers: ");

		for (int i = 0; i < arraySize; i++)
			arr[i] = scan.nextInt();

		smallest = arr[0];

		for (int i = 1; i < arraySize; i++) {

			if (arr[i] < smallest)
				smallest = arr[i];

		}

		int secondSmallest = Integer.MAX_VALUE;

		for (int i = 0; i < arraySize; i++) {

			if (arr[i] < secondSmallest && arr[i] > smallest)
				secondSmallest = arr[i];

		}

		if (secondSmallest == Integer.MAX_VALUE)
			System.out.println("\nThere is no Second Smallest number in this Array");
		else
			System.out.println("\nSecond Smallest Number = " + secondSmallest);
	}
}
