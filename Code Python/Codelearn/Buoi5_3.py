# tong cac so chan thuoc a,b
a = int(input("Nhap a: "))
b = int(input("Nhap b: "))
res = 0

# for i in range(a,b+1):
#     if i%2==0:
#         res+=i

i = a
while i <= b:
    if i % 2 == 0:
        res += i
    i += 1

print("Tong cac so chan thuoc ["+str(a)+","+str(b)+"] =", res)
