# print("列表推导式：")
# print("列表推导式与循环语句for：")
# print("将一个列表中元素扩大2倍：")
# l1 = [1, 2, 3, 4, -5, 6, -7, 8]
# l2 = [i * 2 for i in l1]
# print(l2)
# l3 = [[1, 2], [3, 4], [5, 6]]  # 一层嵌套列表
# l4 = [j * 2 for i in l3 for j in i]
# print(l4)
#
# print("\n列表推导式与判断语句if：")
# print("将列表中的正数扩大2倍：")
# l5 = [i * 2 for i in l1 if i > 0]
# print(l5)
# print("将列表中的正偶数扩大2倍，正奇数扩大3倍：")
# l6 = [-1, 2, -3, 4, 5, 6, 7, 8, -9, -10]
# l7 = [i * 2 if i % 2 == 0 else i * 3 for i in l6 if i > 0]
# print(l7)
#
# import random
#
# print("\n列表推导式与函数function：")
# print("利用列表推导式快速生成10个10-20之间的随机整数列表：")
# l8 = [random.randint(10, 30) for i in range(10)]
# print(l8)
#
#
# def fun1(x):
#     if x % 3 == 0:
#         x /= 3
#     elif x % 7 == 0:
#         x *= 2
#     else:
#         x *= 5
#     return x
#
#
# print("将列表元素用函数操作：")
# l9 = [fun1(i) for i in l8]
# print(l9)
#
# print("同时遍历多个列表或可迭代对象：")
# l10 = [86, 78, 98, 90, 47, 80, 90]
# l11 = [87, 78, 89, 92, 90, 47, 85]
# l12 = [(i, j) for i in l10 if i >= 90 for j in l11 if j <= 85]
# print(l12)


# print("字典推导式：")
# print("学生：成绩")
# name = ["Bob", "Tom", "Alice", "Jerry", "张三", "李四"]
# score = [44, 80, 66, 80, 100, 100]
# d1 = {i: j for i, j in zip(name, score)}
# print(d1)
# print("成绩大于80：")
# d2 = {i: j for i, j in zip(name, score) if j >= 80}
# print(d2)
# print("及格：")
# d3 = {i: j for i, j in zip(name, score) if j >= 60}
# print(d3)
# print("以名字为键，名字的长度为值构成新字典：")
# d4 = {i: len(i) for i in name}
# print(d4)


print("集合推导式：")
s1 = {i * 2 for i in (1, 2, 3, 4, 5, 6)}
print(s1)
s2 = {i ** 2 for i in (1, -1, 2, -2, 3, -3, 4, -4, 5, -5, 6, -6)}
print(s2)

print("元组没有推导式")
b = (i / 2 for i in (1, 2, 10, 20, 30, 40))
print("b不是一个元组，而是一个生成器对象")
print(type(b))
print("生成器可通过tuple函数转换为元组：")
print(tuple(b))

print("生成器推导式：")
g = (int(i / 3) for i in range(1, 10) if i % 3 == 0)
print(g)
print(list(g))
print("只能访问一次，再次访问为空：")
print(list(g))
g = (int(i / 3) for i in range(1, 10) if i % 3 == 0)
print(g.__next__())
print(g.__next__())
print(g.__next__())
print("访问完毕不能再次访问：")
# print(g.__next__())
g = (int(i / 3) for i in range(1, 10) if i % 3 == 0)
print("遍历：")
for i in g:
    print(i, end=" ")
