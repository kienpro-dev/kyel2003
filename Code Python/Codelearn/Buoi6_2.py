# co the them 1 phan tu vao cuoi mang bang ham append()
# VD:
# lst = []
# lst.append(4)
# lst.append(3)
# lst.append(6)
# print(lst)s


n = int(input("Nhap so phan tu: "))
lst = []
print("Nhap cac phan tu: ")
for i in range(n):
    lst.append(int(input()))
print("List:", lst)
