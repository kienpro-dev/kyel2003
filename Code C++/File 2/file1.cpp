// Xử lý tập tin trong c++
// Sử dụng thư viện stdio.h
// 1 số hàm cơ bản: fopen(): mở file, fclose(): đóng file
//                  fputs(): viết 1 chuỗi vào file, fgets(): đọc chuỗi từ file
//                  feof(): trả về true nếu duyệt đến cuỗi file
//                  nemove():  xóa 1 file

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // cách ghi tập tin textfile 
    FILE *file = fopen("file1_out.txt", "w"); // w: write
    fputs("01;Nguyen Tien Kien;2003\n", file);
    fputs("02;Nguyen Van Dung;2002\n", file);
    fputs("03;Tran Xuan Tien;2002\n", file);
    fclose(file);
    return 0;
}