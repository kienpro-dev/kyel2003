// Lưu ý: nếu chương trình có từ 2 class trở nên kế thừa để tránh lỗi khi include file nhiều lần
//       thì cần có lệnh #pragma once vào file person để xác định chỉ include 1 lần vào file chính tránh sinh lỗi

// Hoặc:
// #ifndef PERSON_CPP
// #define PERCON_CPP
// class Person
// {
//     some code here
// };
// #endif

#include "4_Train_1_teacher.cpp"
#include "4_Train_1_student.cpp"

int main()
{
    Student s("Khanh", 23, "Ha Noi", 9.0);
    s.display();
    Teacher t("Tung", 34, "Ha Noi", 1700);
    t.display();
    return 0;
}