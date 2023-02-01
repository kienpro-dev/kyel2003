// giống với constructor, thì có destructor (phương thức hủy) cũng sẽ được chương trình tự động gọi tới.
// destructor thường dùng để giải phóng bộ nhớ khi không dùng đến nữa, bạn sẽ k phải sd delete nhiều lần
// destructor sẽ được gọi tới khi chương trình thoát khỏi phạm vi của nó
// cụ thể là trong 4 TH:
// - Khi kết thúc hàm chứa đối tượng đó
// - Kết thúc ctrinh
// - Gọi tơis delete
// - Thoát khỏi block code chứa đối tượng đó
// destructor hay pthuc hủy phải có phạm vi truy cập là public
#include <iostream>

using namespace std;

class Array
{
public:
    int *arr;
    int n;
    ~Array()
    {
        cout << "Array was destroyed" << endl;
        delete[] arr;
    }
};

void outputArray()
{
    Array a;
    a.n = 5;
    a.arr = new int[a.n];
    for (int i = 0; i < a.n; i++)
        cout << i << " ";
    cout << endl;
}

int main()
{
    outputArray();
    return 0;
}