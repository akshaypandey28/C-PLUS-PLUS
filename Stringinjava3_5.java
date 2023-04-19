import java.util.Arrays;
import java.util.Scanner;

public class Stringinjava3_5 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s1 = scan.nextLine();
        String s2 = scan.nextLine();
        char arr1[] = s1.toCharArray();
        char arr2[] = s2.toCharArray();
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        if (Arrays.equals(arr1, arr2)) {
            System.out.println("ANAGRAM");
        } else {
            System.out.println("NOT AN ANAGRAM");
        }
    }
}
