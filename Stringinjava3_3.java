public class Stringinjava3_3 {
    public static void main(String[] args) {
        
         String a ="2552";
         String b = "";
          for (int i = a.length() - 1; i >= 0; i--) {
          b = b + a.charAt(i);
         }
          System.out.println(a.equals(b));
         
         String c = "akshay pandey";
        String array[] = c.split(" ");
        for (int i = array.length - 1; i >= 0; i--) {
            System.out.print(array[i] + " ");
        }

    }
}
