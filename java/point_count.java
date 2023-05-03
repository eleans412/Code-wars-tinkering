public class TotalPoints {
  
    public static int points(String[] games) {
      // Split string for each object in String object in the array
      int count = 0;
      for (String g : games) {
          String[] arr = g.split(":");
        int x = Integer.parseInt(arr[0]);
        int y = Integer.parseInt(arr[1]);
        // If x > y count += 3
        if (x > y) {
           count += 3;
        }
        // If x = y count += 1
        else if (x == y) {
          count += 1;
        }
      }
      return count;
      }
}