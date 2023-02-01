# 1 so ham su dung thuong xuyen trong list

# ham len: tra ve so luong phan tu trong list, co the dung ham len ket hop vl for de duyet qua cac chi so cua list
lst = [2, 3, 1, 3, 6, 4, 8, 8, 9, 3, 2]
print("SL phan tu:", len(lst))

# ham max, min: tra ve phan tu nho nhat hoac lon nhat trong list
print("Phan tu lon nhat:", max(lst))
print("Phan tu nho nhat:", min(lst))

# ham insert: them phan tu vao chi so cho truoc
x = int(input("Nhap so muon chen:"))
k = int(input("Nhap vi tri muon chen:"))
lst.insert(k-1, x)
print("List sau khi chen:", lst)

# ham remove: xoa 1 phan tu chi dinh trong list(chi xoa 1 lan)
y = int(input("Nhap so muon xoa: "))
lst.remove(y)
print("List sau khi xoa:", lst)

# ham pop: xoa phan tu theo chi so cho truoc
z = int(input("Nhap vi tri can xoa: "))
lst.pop(z-1)
print("List sau khi xoa:", lst)

# ham sort: sap xep tang dan cho list
lst.sort()  # lst.sort(reverse=true): sx giam dan
print("List sap xep tang dan:", lst)

# ham reverse: tra ve list dao nguoc cac phan tu
lst.reverse()
print("List dao nguoc:", lst)

# ham count: dem so luong 1 phan tu cho truoc trong list
i = int(input("Nhap so muon dem: "))
print("So lan xuat hien cua", i, "=", lst.count(i))

# ham clear: xoa het list
lst.clear()
print("Xoa sach list:", lst)
