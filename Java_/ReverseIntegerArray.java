import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class ReverseIntegerArray {


  public static void reverseIntArray(int[] arr){
    int a;
    int n = arr.length;

    for(int i = 0; i < arr.length / 2; i++){
      a = arr[i];
      arr[i] = arr[n-i-1];
      arr[n-i-1] = a;
    }
  }

  public static void main(String[] args) throws IOException{
    //Buffer reader to read user input string
    BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));

    while(true) {
      // Enter each number by space
      System.out.println("Please type in the array you want to reverse (Separate each number by space)");

      //Inputting string of numbers into an array
      String[] stringNums;
      stringNums = bi.readLine().split(" ");
      int[] nums = new int[stringNums.length];

      try {
        //Convert user input into an integer array
        for (int i = 0; i < stringNums.length; i++)
          nums[i] = Integer.parseInt(stringNums[i]);

        //Reverses the values inputted
        reverseIntArray(nums);

        //Prints the reverse results
        for (int i = 0; i < nums.length; i++)
          System.out.print(nums[i] + " ");

        break;
      }
      catch (NumberFormatException e) {
        System.out.println("You have inputted a value that is not a number, please try again");
      }
    }
  }
}
