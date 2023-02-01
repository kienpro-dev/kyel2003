package mypack;

public class Employee_1 {
    private String name;
    private int salary;
    public Employee_1(String name, int salary) {
        this.name = name;
        this.salary = salary;
    }
    public void setSalary(int salary) {
        this.salary = salary;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public int getSalary() {
        return salary;
    }
    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Salary: " + salary);
    }
}
