package mypack;

public class Student_1 {
    private String name;
    private int age;
    private String gender;
    private double gpa;
    public Student_1()
    {

    }
    public void setName(String name)
    {
        this.name = name;
    }
    public String getName()
    {
        return name;
    }
    public void setAge(int age)
    {
        this.age = age;
    }
    public int getAge()
    {
        return age;
    }
    public void setGender(String gender)
    {
        this.gender = gender;
    }
    public String getGender()
    {
        return gender;
    }
    public void setGpa(double gpa)
    {
        this.gpa = gpa;
    }
    public double getGpa()
    {
        return gpa;
    }
    public Student_1(String name, int age, String gender, double gpa)
    {
        this.name=name;
        this.age=age;
        this.gender=gender;
        this.gpa=gpa;
    }
    public void display()
    {
        System.out.println("Name: "+name);
        System.out.println("Age: "+age);
        System.out.println("Gender: "+gender);
        System.out.println("GPA: "+gpa);
    }
}
