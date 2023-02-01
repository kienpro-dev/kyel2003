/*
        Cho một mảng số nguyên a có n phần tử, mảng này đã được sắp xếp tăng dần.
        Hãy tìm hai vị trí khác nhau bất kỳ sao cho tổng của hai phần tử ở hai vị trí đó có giá trị là x.
*/

// - Một con trỏ (i) được đặt ở đầu mảng A, con trỏ còn lại (j) được đặt ở cuối mảng A.
// - Nếu tổng của hai phần tử ở hai vị trí con trỏ
//    + Nhỏ hơn X: tăng vị trí con trỏ i lên một đơn vị.
//    + Lớn hơn X: giảm vị trí con trỏ j đi một đơn vị.
// - Tiếp tục di chuyển cho đến khi hai con trỏ gặp nhau.
// - Khi con trỏ chưa gặp nhau mà tổng ở hai vị trí con trỏ có giá trị là X
//     thì ta đã tìm được hai vị trí cần tìm (i và j), kết thúc chương trình.
#include <iostream>

using namespace std;

int main()
{
    int a[] = {2, 5, 6, 8, 10, 12, 15}, n = 7, x;
    cout << "Nhap gia tri can tinh: ";
    cin >> x;
    int left = 0, right = n - 1;
    while (left < right) // k để là left<=right tránh TH số ở vị trí đang xét bằng x/2(2 số trùng vị trí(k t/m))
    {
        if (a[left] + a[right] == x)
        {
            cout << "Vi tri thoa man: " << left + 1 << " " << right + 1;
            return 0;
        }
        else if (a[left] + a[right] > x)
            right--;
        else
            left++;
    }
    cout << "Khong tim thay";
    return 0;
}