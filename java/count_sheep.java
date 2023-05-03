class Kata {
    private static final String SHEEP = " sheep...";
    public static String countingSheep(int num) {
      //Add your code here
      if (num == 0) {
        return "";
      }
      StringBuilder sb = new StringBuilder(100);
      for (int i = 1; i <= num; i++) {
        sb.append(i);
        sb.append("");
        sb.append(SHEEP);
      }
      return sb.toString();
    }
  }