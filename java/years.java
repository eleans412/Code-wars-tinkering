public class Dinglemouse {

    public static int[] humanYearsCatYearsDogYears(final int humanYears) {
      // Your code here!
      // First year
      if (humanYears == 1) {
        return new int[]{1,15,15};
      }
      // Second year
      if (humanYears == 2) {
        return new int[]{2,24,24};
      }
      // succeeding years
      else {
        int timePassed = humanYears - 2;
        int cat = 15 + 9 + (timePassed * 4);
        int dog = 15 + 9 + (timePassed * 5);
        return new int[]{humanYears, cat, dog};
      }
    }
  
  }