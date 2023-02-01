package mypack;

public class Manager extends Employee_1{
    private int bonus;
    public Manager(String name, int salary, int bonus)
    {
        super(name, salary);
        this.bonus = bonus;
    }
    public int getBonus() {
        return bonus;
    }
    public void setBonus(int bonus) {
        this.bonus = bonus;
    }
    @Override
    public void display()
    {
        super.setSalary(getSalary() + getBonus());
        super.display();
    }
}