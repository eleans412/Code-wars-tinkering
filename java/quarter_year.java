public class Kata {
    public static int quarterOf(int month) {
        // First quarter
      if (month >= 1 && month <= 3) {
        return 1;
      }
      // Second quarter
      if (month > 3 && month <= 6) {
        return 2;
      }
      // Third quarter
      if (month > 6 && month <= 9) {
        return 3;
      }
      // Fourth quarter 
      else {
        return 4;
      }
    }
}