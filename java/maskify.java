import org.apache.commons.lang3.StringUtils;

public class Maskify {
    public static String maskify(String str) {
      String finalChars = StringUtils.right(str, 4);
      int length = str.length();  
      str = StringUtils.repeat("#", length - 4);
      str += finalChars;
      return str;
    }
}