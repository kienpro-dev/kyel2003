// lóp con không kế thừa phương thưc và thuộc tính private từ lóp cha, phai tuy xuất thông ua getter và setter của lớp cha
// Constructor của lớp con sẽ luôn gọi đến constructor của lóp cha 
// Nếu k chỉ rõ thì sẽ luôn gọi đến constructor mặc định của lớp cha 
// Nếu lớp cha k có constructor mặc định thì cần chỉ rõ constructor muốn gọi tới băng từ khóa           super(list_bien_cua_lop_cha)
// cú pháp kế thừa bằng từ khóa         extends

// lớp con có thể gi đè phương thúc của lớp cha, trước khi ghi đè cần có tù khóa            @Override 
// TH lớp cha bị ghi đè thì có thể gọi đến nó bằng từ khóa          super.pthuc();

// Phương thức static k thể bị ghi đè 
// có thể ngăn 1 phương thức k thể bị ghi đè bằng từ khóa         final: (public final void display() - display sẽ k bị ghi đè từ lóp con)

// nếu muốn ghi đè lớp cha thì phương thức loứp con cần có phậm vi truy cập rộng hơn hoặc bằng lớp cha 

import mypack.Manager;
import mypack.Employee_1;

public class Inherit_1 {
    public static void main(String[] args)
    {
        Employee_1 employee = new Employee_1("Ha", 1600);
        employee.display();
        Manager manager = new Manager("Kien", 2000, 1500);
        manager.display();
    }
}
