package mypack;

public class Student_2 {
    private String name = "Unknown";
    private char gender = 'u';

    public Student_2() {
    }

    public Student_2(String name) {
        this.name = name;
    }

    public Student_2(char gender) {
        this.gender = gender;
    }

    public Student_2(String name, char gender) {
        this.name = name;
        this.gender = gender;
    }

    public void display() {
        System.out.println("Name: " + name);
        if (gender == 'f')
            System.out.println("Gender: Female");
        if (gender == 'm')
            System.out.println("Gender: Male");
        if (gender == 'u')
            System.out.println("Gender: Unknown");
    }
}
