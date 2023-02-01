#include "6_Train_2_FullTime.cpp"
#include "6_Train_2_PartTime.cpp"
#include "6_Train_2_Employee.cpp"

int main()
{
    Employee *employee1 = new PartTimeEmployee("Kien", 200000, 6);
    Employee *employee2 = new FullTimeEmployee("Tu", 200000);
    cout << "Name: " << employee1->getName() << endl;
    cout << "Salary per day: " << employee1->calculateSalary() << endl;
    cout << "Name: " << employee2->getName() << endl;
    cout << "Salary per day: " << employee2->calculateSalary() << endl;
    return 0;
}