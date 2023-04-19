public class a1 {
    public static void main(String[] args) {
        int array[][] = { { 1, 2, 3 }, { 1, 2, 3 }, { 1, 2, 3 } };
        int n = array.length;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < array[i].length; j++) {
                System.out.print(array[i][j] + " ");
            }
            System.out.println();
        }

    }
}
