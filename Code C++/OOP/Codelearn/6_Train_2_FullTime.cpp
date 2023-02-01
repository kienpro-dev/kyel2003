#include"6_Train_2_Employee.cpp"

class FullTimeEmployee: public Employee
{
public:
    FullTimeEmployee(string name, int paymentPerHour):Employee(name, paymentPerHour)
    {

    }
    int calculateSalary()
    {
        return Employee::getPaymentPerHour() * 8;
    }
};