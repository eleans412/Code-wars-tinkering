import java.lang.StringBuilder;
class Solution{

  static String toCamelCase(String s){
    StringBuilder sb = new StringBuilder(s);
    
    for (int i = 0; i < sb.length(); i++) {
      if (sb.charAt(i) == '-' || sb.charAt(i) == '_') {
        sb.deleteCharAt(i);
        sb.replace(i,i + 1, String.valueOf(Character.toUpperCase(sb.charAt(i))));
      }
    }
    return sb.toString();
  }
}