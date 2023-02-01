/*
            Cho hai dãy số nguyên đã được sắp xếp không giảm a và b lần lượt có n và m phần tử.
            Hãy ghép chúng thành dãy c được bố trí theo thứ tự không giảm.
*/

// giải pháp sử dụng hai con trỏ như sau:

// - Dãy a có con trỏ i, con trỏ này bắt đầu ở vị trí đầu dãy a.
//    + Con trỏ i này được thể hiện như phần tử nhỏ nhất chưa được chọn trong dãy a.
// - Dãy b có con trỏ j, con trỏ này bắt đầu ở vị trí đầu dãy b.
//    + Con trỏ j này được thể hiện như phần tử nhỏ nhất chưa được chọn trong dãy b.
// - Ta sẽ lặp lại công việc này, cho đến khi đưa hết các phần tử trong dãy a và b vào dãy c:
//    + Khi các phần tử trong một dãy nào đó, dãy a hoặc dãy b, đều đã được đưa vào dãy c:
//      đưa lần lượt các phần tử trong dãy còn lại vào dãy c.
//    + Ngược lại:
//      * So sánh hai phần tử ở hai con trỏ.
//      * Đưa phần tử có giá trị nhỏ hơn vào dãy c, nếu hai phần tử có giá trị như nhau thì chọn một trong hai.
//      * Tăng vị trí con trỏ ở phần tử được đưa vào lên một đơn vị.

#include <iostream>

using namespace std;

int main()
{
    int a[] = {1, 3, 6, 8, 10}, b[] = {2, 6, 7, 12, 14, 15}, c[100];
    int i = 0, j = 0, k = 0, n = 5, m = 6;
    while (i < n && j < m)
    {
        if (a[i] >= b[j])
            c[k++] = b[j++];
        else
            c[k++] = a[i++];
    }
    while (i < n)
        c[k++] = a[i++];
    while (j < m)
        c[k++] = b[j++];
    for (int idx = 0; idx < k; idx++)
        cout << c[idx] << " ";
    return 0;
}