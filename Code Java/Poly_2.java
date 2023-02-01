// - Tuy nhiên việc sử dụng absract k phải trừu tượng hoàn toàn vì vẫn có thể khai báo thuộc tính à phương thức k trừu tượng
// - Để đạt đc trừu tượng hoàn toàn ta dùng interface thay abstract, lớp co kế thừa lớp interface dùng implements thay extvertices
/*
VD: nếu b khai báo như sau
        interface IAnimal{
            int N = 4;
            void move();
            void sound();
        }

    Thì chươg trình sẽ hiểu là 
        interface IAnimal{
            public static final int N = 4;      //vì mọi biến thuộc tính trong interface là hằng số 
            public abstract void move();        // Các phương thức đều sẽ là trừu tượng 
            public abstract void sound();
        }

*/

// Trong thực tế, khi đi làm bạn sử dụng tới interface rất nhiều, với mỗi lớp bạn thường tạo ra 
// 1 interface riêng để thể hiện các tính năng của lớp đó và giao tiếp với các đối tượng thông qua interface. 
// Ví dụ lớp Customer sẽ có interface ICustomer, lớp Employee sẽ có interface là IEmployee, ... 
// Nếu lớp con ucar Customer có phương thức cần ghi đè lên ICustomer mà lớp Customer chưa ghi đè thì 
// lớp Customer phải khai báo là abstract để lớp con của Customer giao tiếp được với lớp implements ICustomer

import mypack.IEmployee_3;
import mypack.PartTimeEmployee_3;
import mypack.FullTimeEmployee_3;

public class Poly_2 {
    public static void main(String[] args)
    {
        IEmployee_3 employee1 = new PartTimeEmployee_3("Trung", 45000, 7);
		System.out.println("Name: " + employee1.getName());
		System.out.println("Salary per day: " + employee1.calculateSalary());

		IEmployee_3 employee2 = new FullTimeEmployee_3("Linh", 65000);
		System.out.println("Name: " + employee2.getName());
		System.out.println("Salary per day: " + employee2.calculateSalary());
    }
}
