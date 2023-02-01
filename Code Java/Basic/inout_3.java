import java.util.Scanner;

public class inout_3 {
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		char c = (char)(sc.next().charAt(0) + 1); // nhập dữ liệu kiểu char 
		System.out.println(c);
		sc.close();
	}
}
