// 1 lớp khi khởi tạo như ta đã biết nếu k có constructor nó sẽ tự tạo ra constructor măc định(k tham số)
// nếu lớp có tạo ra constructor có tham số rồi thì sẽ k tạo ra constructor k tham số nữa
// nếu lớp có constructor có tham số và hàm main tạo ra đối tượng dẫn tới constructor khong tham số thì cương trình sẽ báo lỗi


// #include<iostream>

// using namespace std;

// class Customer
// {
// private:
//     string name;
//     int id;
// public:
//     Customer(string name, int id)
//     {
//         this->name = name;
//         this->id = id;
//     }
//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Id: " << id << endl;
//     }
// };

// int main() 
// {
//     Customer c;
//     return 0;
// }

// chuơng trình trên sẽ báo lỗi vì đối tượng c là gọi tới constructor không tham số 
// nhưng lớp customer chỉ có constructor có tham số và nó k tạo ra thêm bất kì constructor nào khác
// để không lỗi thì cần tạo ra constructor không tham số để đối tượng c gọi tới

#include<iostream>

using namespace std;

class Customer
{
private:
    string name;
    int id;
public:
    Customer()
    {
        cout << "Do nothing"; // có thể để constructor rỗng và k thực hiện gì cả
    }
    Customer(string name, int id)
    {
        this->name = name;
        this->id = id;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
    }
};

int main() 
{
    Customer c;
    return 0;
}