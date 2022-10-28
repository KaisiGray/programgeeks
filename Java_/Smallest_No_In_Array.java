import java.util.Scanner;

public class SmallestNumber
{
   public static void main(String[] args)
   {
      int size, i, small;
      Scanner scan = new Scanner(System.in);
      
      System.out.print("Enter the Size of Array: ");
      size = scan.nextInt();
      int[] arr = new int[size];
      System.out.print("Enter " +size+ " Numbers: ");
      for(i=0; i<size; i++)
         arr[i] = scan.nextInt();
      
      small = arr[0];
      for(i=1; i<size; i++)
      {
         if(small>arr[i])
            small = arr[i];
      }
      
      System.out.println("\nSmallest Number = " +small);
   }
}
