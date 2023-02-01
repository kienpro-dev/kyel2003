import mypack.Teacher;
import mypack.Student_3;

public class Inherit_2 {
    public static void main(String[] args)
    {
        Teacher teacher = new Teacher("Huy",41,"Ha Noi",15000000);
        teacher.display();
        teacher.setSalary(10000000);
        teacher.display();

        Student_3 student = new Student_3("Kien", 19, "Ha Noi", 4.0);
        student.display();
        System.out.println(student.toString());
    }
}
