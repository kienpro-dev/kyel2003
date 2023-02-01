/*
        Cho dãy số nguyên dương a có n phần tử. Hãy tìm độ dài đoạn con dài nhất trong dãy sao cho tổng các
        phần tử trong đoạn này không quá s. Dữ liệu đảm bảo các phần tử trong dãy a đều có giá trị không quá s.
*/

// - Hai con trỏ l và r sẽ đặt ở vị trí 1.
//      + Hai con trỏ này được thể hiện như hai vị trí l, r như ở trên phần phân tích.
// - Di chuyển lần lượt con trỏ r từ 1 đến n.
//      + Sau mỗi lần di chuyển con trỏ r, nếu
//          * sum(l,r)≤s: giữ nguyên vị trí con trỏ l.
//          * sum(l,r)>s: tăng dần vị trí con trỏ l cho đến khi sum(l,r)≤s.
//      + Hiện tại với vị trí con trỏ l và r, ta biết đoạn "tốt" dài nhất
//        với vị trí kết thúc tại r là đoạn [l,r].
// - Độ dài đoạn con "tốt" dài nhất chính là giá trị độ dài lớn nhất của
//      các đoạn "tốt" dài nhất với vị trí kết thúc tại r, với mỗi r từ 1 đến n.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a[] = {2, 6, 5, 3, 6, 8, 9}, n = 7, s;
    cout << "Nhap tong can xet: ";
    cin >> s;
    int sum = 0, left = 0, right = 0, ans = 0;
    while (right < n)
    {
        sum += a[right];
        while (sum > s)
            sum -= a[left++];
        ans = max(ans, right - left + 1);
        right++;
    }
    if (ans == 0)
        cout << "Khong co chuoi con thoa man";
    else
        cout << "Do dai chuoi con lon nhat thoa man: " << ans;
    return 0;
}