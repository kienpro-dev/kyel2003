import java.util.Scanner;

public class ifelse_1 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String n = sc.next(), m = sc.next();
        if(n.equals(m))         // so sanh string dung equals
            System.out.println("two people have the same name");
        else
            System.out.println("two people don't have the same name");
        sc.close();
    }
}
