package mypack;

public class Student_3 extends Person_1{
    private double gpa;
    public Student_3(String name, int age, String address, double gpa)
    {
        super(name, age, address);
        this.gpa = gpa;
    }
    public void setGpa(double gpa)
    {
        this.gpa = gpa;
    }
    public double getGpa()
    {
        return gpa;
    }
    @Override
    public void display()
    {
        super.display();
        System.out.println("GPA: " + gpa);
    }
    @Override
    public String toString()
    {
        return "Name: "+getName()+", address: "+getAddress()+", GPA: "+getGpa();
    }
}

// - Tất cả các lớp trong java đều được kế thừa từ lớp Object, nó có nhiều phương thức ví dụ như toString ở trên 
