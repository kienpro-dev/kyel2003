import mypack.Student_2;

public class Static_2 {
    public static void main(String[] args) {
        Student_2[] students = new Student_2[4];
        students[0] = new Student_2();
        students[1] = new Student_2("Tuan");
        students[2] = new Student_2('f');
        students[3] = new Student_2("Kien", 'm');

        for (int i = 0; i < 4; i++) {
            students[i].display();
        }
    }
}


// newewwwww
