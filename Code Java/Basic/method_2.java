import java.util.Scanner;

public class method_2 {
    public static int sumOfArrays(int[] arr, int n) {
        if (n == 1)
            return arr[0];
        return arr[n - 1] + sumOfArrays(arr, n - 1);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.print(sumOfArrays(arr, n));
        sc.close();
    }
}
