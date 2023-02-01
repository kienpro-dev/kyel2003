import java.util.Scanner; // dùng để nhập dữ liệu

public class inout_1 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String name = sc.next(), address = sc.next();
        int age = sc.nextInt();
        double gpa = sc.nextDouble();
        System.out.println("Name: " + name);
        System.out.println("Address: " + address);
        System.out.println("Age: " + age);
        System.out.println("GPA: " + gpa);
        sc.close();
    }
}
