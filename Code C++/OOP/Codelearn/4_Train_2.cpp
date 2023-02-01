#include "4_Train_2_employee.cpp"
#include "4_Train_2_manager.cpp"

using namespace std;

int main()
{
    Employee e1("Tuan",20000);
    e1.display();
    Manager m("Kien",25000,5000);
    m.display();
    Employee e2("Ban",18000);
    e2.display();
    return 0;
}