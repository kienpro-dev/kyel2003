/*
        thuật toán tìm kiếm nhị phân
*/

// Tìm kiếm nhị phân là một thuật toán dùng để tìm kiếm 1 phần tử trong một danh sách đã được sắp xếp.
// Thuật toán hoạt động như sau:
// Bước 1(Chia): Danh sách ban đầu sẽ được chia thành 2 nửa

// Bước 2 (Trị): Trong mỗi bước, so sánh phần tử cần tìm với phần tử nằm ở chính giữa danh sách.
//              Nếu hai phần tử bằng nhau thì phép tìm kiếm thành công và thuật toán kết thúc.
//              Nếu chúng không bằng nhau thì tùy vào phần tử nào lớn hơn, thuật toán lặp lại
//              bước so sánh trên với nửa đầu hoặc nửa sau của danh sách. Vì số lượng phần tử
//              trong danh sách cần xem xét giảm đi một nửa sau mỗi bước, nên thời gian thực thi
//              của thuật toán là hàm lôgarit.

// Bước 3: Bằng việc lặp lại cách giải quyết như bước 2 ta sẽ tìm được kết quả.
#include <iostream>

using namespace std;

int binarySearch(int a[], int n, int x)
{
    int mid, left = 0, right = n - 1;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (a[mid] == x)
            return mid;
        else if (a[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int binarySearch_2(int a[], int left, int right, int x)
{
    if (left > right)
        return -1;
    int mid = (left + right) / 2;
    if (a[mid] == x)
        return mid;
    if (a[mid] < x)
        return binarySearch_2(a, mid + 1, right, x);
    return binarySearch_2(a, left, mid - 1, x);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = 11; // sizeof(a) / sizeof(int)
    int x;
    cout << "Nhap so can tim: ";
    cin >> x;
    if (binarySearch_2(a, 0, 4, x) == -1)
        cout << "Khong tim thay";
    else
        cout << "Tim thay o vi tri " << binarySearch_2(a, 0, 4, x) + 1;
    return 0;
}