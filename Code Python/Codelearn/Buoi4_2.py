# if- else if- else: cu phap, else if trong python viet la elif
# if conditon:
#     ......
# elif conditon:
#     ......
# else:
#     ......

a = int(input("Input a: "))
b = int(input("Input b: "))
c = int(input("Input c: "))
avg = (a+b+c)/3

print("Average:",avg)

if avg > a and avg > b:
    print("The average value is greater than both a and b")
elif avg > a and avg > c:
    print("The average value is greater than both a and c")
elif avg > b and avg > c:
    print("The average value is greater than both b and c")
elif avg > a:
    print("The average value is greater than a")
elif avg > b:
    print("The average value is greater than b")
elif avg > c:
    print("The average value is greater than c")
