# ham lam tron: round(n,x)
# n: so can lam tron, x: so chu so sau dau phay

# tinh 1/2 + 2/3 + ... + n/n+1.

n = int(input("Nhap n: "))
res = 0
i = 1

while i <= n:
    res += i/(i+1)
    i += 1

print("Tong =", round(res, 3))
