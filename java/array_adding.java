import java.util.Arrays;
import java.util.stream.IntStream;
public class Sum {

  public static int arrayPlusArray(int[] arr1, int[] arr2) {
    // arr1 + arr2 is not working...
    int [] result = new int[arr1.length];
    IntStream.range(0, arr1.length).forEach(i -> result[i] = arr1[i] + arr2[i]);
    return Arrays.stream(result).sum();
  }

}