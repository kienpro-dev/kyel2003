import mypack.Account;
import java.util.Scanner;

public class Encap_3 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Account acc = new Account(1, "Kien", 10000);
        acc.display();
        acc.withdraw(11000);
        acc.deposit(5000);
        System.out.println("\nBalance: " + acc.getBalance());
        acc.withdraw(11000);
        System.out.println("\nBalance: " + acc.getBalance());
        sc.close();
    }
}
