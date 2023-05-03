public class Solution {
    public static int century(int number) {
      // your code goes here
      System.out.println(number);
      // If between 1-100
      if (number <= 100) {
        return 1;
      }
      // If year even 
      if (number % 100 == 0) {
        return (number / 100);
      }
      // If year odd
      else {
        return (number / 100 + 1);
      }
      
    }
  }