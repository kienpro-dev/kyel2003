// - Phương thức tĩnh cũng được khai báo với từ khóa static
// - Được sử dụng mà không cần p khởi tạo đối tượng
// - Dùng toán tử :: để truy xuất nhanh đến phương thức tĩnh

// - Lưu ý: + Trong cùng 1 lớp pt tĩnh chỉ gọi đc các pt tĩnh khác, k thể gọi pt mà kp pt tĩnh
//          + Trong cùng 1 lớp, pt tĩnh k thể gọi tới các biến mà kp biến tĩnh

#include <iostream>

using namespace std;

class Compare
{
public:
    static int max(int a, int b)
    {
        return a > b ? a : b;
    }
    static int min(int a, int b)
    {
        return a < b ? a : b;
    }
};

int main()
{
    cout << Compare::max(10, 20) << endl;
    cout << Compare::min(10, 20) << endl;
    return 0;
}