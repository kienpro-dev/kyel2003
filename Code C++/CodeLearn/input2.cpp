#include<iostream> //tinh so tuoi sau bao nhieu nam

using namespace std;

int main() {
    string name;
    int age,years;
    cin >> name >> age >> years;
    cout << "Sau "<<years<<" nam, "<<name<<" se "<<age+years<<" tuoi";
    return 0;
}