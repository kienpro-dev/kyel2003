// - Nạp chồng phương thức là khi 1 lớp có các phương thức cùng tên nhưng khác nhau về kiểu dữ liệu và số tham số
// - Thay vì đặt tên các phương thức khác có cùng chức năng chỉ khác nhau kiểu DL hoặc số biến thì hãy để cùng 1 tên
// - Nạp chồng phương thức có thể gọi tới nhau, có thể dùng cả 2 kiểu static và non- Nạp chồng phương thức
#include <iostream>

using namespace std;

class compare
{
public:
    static int max(int a, int b)
    {
        return a > b ? a : b;
    }
    static double max(double a, double b)
    {
        return a > b ? a : b;
    }
    static int max(int a, int b, int c)
    {
        return max(max(a, b), c);
    }
};

int main()
{
    cout << compare::max(2.3, 2.31) << endl;
    cout << compare::max(2, 4, 1);
    return 0;
}
