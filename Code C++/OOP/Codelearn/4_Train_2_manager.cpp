#include "4_Train_2_employee.cpp"

class Manager : public Employee
{
private:
    int bonus;

public:
    Manager(string name, int salary, int bonus) : Employee(name, salary)
    {
        this->bonus = bonus;
    }
    void setBonus(int bonus)
    {
        this->bonus = bonus;
    }
    int getBonus()
    {
        return bonus;
    }
    int getSalary()
    {
        return getBonus() + Employee::getSalary();
    }
    void display()
    {
        Employee::setSalary(Employee::getSalary() + bonus); // ghi đè lại lương cho lớp manager
        Employee::display();
    }
};

// Các hàm getter và setter là của lớp employee nên cần toán tử ::để gọi đến từ lớp cha 