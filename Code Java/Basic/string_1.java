// các phương thức thường dùng trong string java 
// - length(): trả về độ dài của xâu
// - charAt(idx): trả vè kí tự tại idx của xâu
// - replace(a,b): thay thế kí tự a bằng b trong xâu
// - toUpperCase()/toLowerCase(): viết hoa, thường xâu kí tự 
// - indexOf(s): trả về index của s xuất hiện đầu tiên trong xâu ban đầu
// - startsWith(s) và endsWith(s): kiểm tra xâu ban đầu có bắt đầu hay kết thcs bằng xâu s k
// - split(c): tách 1 xâu thành mảng các xâu qua c cho trước (c thường là khoảng trắng để tách xâu thành các từ)
// - substring(i,j): lấy ra xâu con từ idx i đến j 

import java.util.Scanner;

public class string_1 {
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		char c = sc.next().charAt(0);
		boolean check=false;
		for(int i = 0;i<s.length();i++)
		{
			if(s.charAt(i)==c)
			{
				System.out.print(i);
				check=true;
				break;
			}
		}
		if(!check)
			System.out.print(-1);
		sc.close();
	}
}
