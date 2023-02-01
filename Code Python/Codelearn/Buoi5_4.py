# dieu khien vong lap bang break va continue
# ly thuyet giong nhu c++ da hoc

for i in range(1, 11):
    if i == 5:
        break
    print(i)

i = 1
while i <= 10:
    if i % 3 == 0:
        i += 1
        continue
    print(i)
    i += 1
