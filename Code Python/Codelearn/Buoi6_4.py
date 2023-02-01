# Cho một list các số nguyên n phần tử lst được nhập vào từ bàn phím,
# bạn hãy viết chương trình hiển thị ra màn hình một list chứa các số chia hết cho 5
# trong list vừa nhập, nếu list không có số nào chia hết cho 5 thì hiển thị ra màn hình [0].

n = int(input("Nhap so phan tu: "))
lst_1 = []
lst_2 = []

print("Nhap phan tu mang:")
for i in range(n):
    lst_1.append(int(input()))
    if lst_1[i] % 5 == 0:
        lst_2.append(lst_1[i])

if len(lst_2) == 0:
    lst_2 = [0]

print("List:", lst_2)