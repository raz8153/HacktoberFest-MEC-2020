/**
 * Linear search is the easiest search algorithm
 * It works with sorted and unsorted arrays (an binary search works only with sorted array)
 * This algorithm just compares all elements of an array to find a value
 * 
 * Worst-case performance	O(n)
 * Best-case performance	O(1)
 * Average performance	O(n)
 * Worst-case space complexity
 *
import java.util.Scanner;

public class LinearSearch
{
   public static void main(String args[]) {

       Scanner sc = new Scanner(System.in);
       int arr[] = {5, 3, 4, 6, 5, 8, 1, 7};
       
       System.out.print("Enter number to search: ");
       int n = sc.nextInt();
       
       int flag = 0, i;
       for (i = 0; i < arr.length; i++) {
           if (arr[i] == n) 
           {
               flag = 1;
               break;
           }       
       }       
       
       if (flag == 1)
           System.out.println(n + " present at position " 
                                   + (i+1) + " in the array");
       else
           System.out.println(n + " absent in the array");
   }
}
