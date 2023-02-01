package mypack;

public class Employee_2 extends Person_2{
    private int salary;
    public Employee_2(String name, String address, int salary)
    {
        super(name, address);
        this.salary=salary;
    }
    @Override
    public void display()
    {
        System.out.println("Employee name: " + super.getName());
        System.out.println("Employee address: " + super.getAddress());
        System.out.println("Employee salary: "+ salary);
    }
}
