import java.util.Scanner;

public class string_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        for (char c = '0'; c <= '9'; c++)
            s = s.replace(c + "", ""); // vì chỉ thay thế đc string nên phải ép kiểu char về string bàng cách cộng thêm chuỗi rỗng
        System.out.print(s);
        sc.close();
    }
}
