# 4 - 9
n = input("请输入一个正整数：")
while not n.isdigit() or int(n) > 100 or int(n) <= 0:
    print("请重新输入：")
    n = input("请输入一个正整数：")
else:
    n = int(n)
    l = list(filter(lambda x: n % x == 0, range(2, int(n // 2) + 1)))
    print("所有因子为：", l)
    print("所有因子之和为：", sum(l))


# 4 - 10
sales = [123, 226, 136, 178, 124, 167, 183, 194, 119, 135, 189, 125, 173, 193, 143, 226, 201, 200, 211, 226, 132, 163,
         225, 129, 150, 151, 226, 177, 189, 134, 222]
highest = max(sales)
hh = [i for i, j in enumerate(sales, 1) if j == highest]
print("最大销量：", highest)
print("销售日：", hh)


# 4 - 11
s = input("请输入一个字符串：")
l = {i: s.count(i) for i in s}
for i in l:
    print('字符%c出现%d次' % (i, l[i]))
