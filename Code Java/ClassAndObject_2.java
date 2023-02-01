import mypack.Student_1;
import java.util.Scanner;

public class ClassAndObject_2 {
    public static void problem_1() {
        Scanner sc = new Scanner(System.in);
        Student_1 s = new Student_1();
        s.setName("Kien");
        s.setAge(19);
        s.setGender("Male");
        s.setGpa(4.0);

        s.display();

        sc.close();
    }

    public static void problem_2() {
        Student_1[] students = new Student_1[3];

        students[0] = new Student_1("Tuan", 24, "Male", 3.5);
        students[1] = new Student_1("Mai", 25, "Female", 3.0);
        students[2] = new Student_1("Duc", 24, "Male", 3.5);
        for (int i = 0; i < 3; i++) {
            students[i].display();
        }
    }

    public static void main(String[] args) {
        problem_1();
        problem_2();
    }
}
