// Ta không thể dùng == để so sánh các đối tượng với nhau
// vì Tất cả các lớp trong java đều được kế thừa từ lớp Object nên ta có thể ghi đè vào lớp Object phương thức equals để so sánh dựa trên 1 yếu tố nào đó 

import mypack.Student_4;

public class Inherit_3 {
    public static void main(String[] args) {
        Student_4 student1 = new Student_4(1,"Kien");
        Student_4 student2 = new Student_4(2,"Kien");
        System.out.println(student1.equals(student2));
    }
}


