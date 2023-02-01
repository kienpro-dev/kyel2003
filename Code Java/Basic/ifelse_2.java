import java.util.Scanner;

public class ifelse_2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        int y = scanner.nextInt();
        if (x > 0)
            System.out.println("This point lies in the " + (y > 0 ? "First quadrant" : "Fourth quadrant"));
        else
            System.out.println("This point lies in the " + (y > 0 ? "Second quadrant" : "Third quadrant"));
        scanner.close();
    }
}
