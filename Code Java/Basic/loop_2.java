import java.util.Scanner;

public class loop_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(), b = sc.nextInt();
        while (a <= b) {
            if (a % 15 == 0)
                System.out.print(a + " ");
            a++;
        }
        sc.close();
    }
}
