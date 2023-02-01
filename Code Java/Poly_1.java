// - Tính trừu tượng: chỉ tập chung vào tính năg của đối tượng và ẩn đi những thông tin không cần thiết 
// - KHai báo với từ khóa abstract: lớp dó k thể khởi tạo đc đối tượng mà p thông qua lớp con 
// - Lớp đó có thể có các phương thức trừu tượng, chỉ có phần khai báo, k có phần chi tiết: mục đích là để lớp con ghi đè lên 
// -Lớp con kế thừa lớp trừu tượng phải ghi đè hết các phương thức trừu tượng nếu không ct sẽ báo lỗi


import mypack.Employee_2;
import mypack.Customer;
import mypack.Person_2;

public class Poly_1 {
    public static void main(String[] args) {
        Person_2 a = new Employee_2("Kien", "HN", 10000);
        a.display();

        Person_2 b = new Customer("Dung", "VP", 9000);
        b.display();
    }

}
