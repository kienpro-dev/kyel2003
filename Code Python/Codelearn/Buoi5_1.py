# vonh lap trong python
# python su dung vong lap while va for
# cu phap: while conditon:
#               .............

n = int(input("Nhap n: "))
i = 1
res = 0

while i <= n:
    res += i
    i += 1

print("Tong cac so tu 1 den", n, "=", res)
