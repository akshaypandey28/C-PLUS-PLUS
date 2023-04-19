import java.util.Arrays;
import java.util.Scanner;

public class Stringinjava3_6 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s1 = scan.nextLine();
        s1 = s1.replaceAll(" ", "");
        char arr[] = s1.toCharArray();
        int array[] = new int[26];
        for (int i = 0; i < arr.length; i++) {
            array[arr[i] - 65]++;
        }
        boolean flag = false;
        for (int i = 0; i < array.length; i++) {
            if (array[i] >= 1) {
                flag = true;
            } else {
                break;
            }
        }
        if (flag == true) {
            System.out.println("PANGRAM");
        } else {
            System.out.println("not an pangram");
        }
    }
}
