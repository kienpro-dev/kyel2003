import java.util.Scanner;
import mypack.Date;
import mypack.Time;

public class Encap_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Date x = new Date(23, 7, 2003);
        x.display();
        System.out.print("Enter the year want to change: ");
        int y = sc.nextInt();
        x.setYear(y);
        x.display();

        System.out.print("This time: ");
        Time z = new Time(23, 59, 59);
        Time e = new Time(3, 8, 0);
        z.display();
        z.nextSecond();
        System.out.print("Next time second: ");
        z.display();
        System.out.print("This time: ");
        e.display();
        e.previousSecond();
        System.out.print("Previous time second: ");
        e.display();
        sc.close();
    }
}
