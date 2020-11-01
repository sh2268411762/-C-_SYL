# print("多变量同时赋值（左右变量数量相等，否则会有意外结果）：")
# x, y, z = 'a', 'b', 'c'
# print(x, y, z, sep=" ")
#
# print("一个对象给多个变量赋值：")
# x, y, z = ['a', 'b', 'c']
# print(x, y, z, sep=" ")
# x, y, z = sorted([33, 11, 22])
# print(x, y, z, sep=" ")
# print("元组进行多变量赋值：")
# t = ('a', 'b', 'c')
# x, y, z = t
# print(x, y, z, sep=" ")
# print("s.values所组成的可迭代对象解包：")
# s = {'zhangsan': 199, 'lisi': 177, 'wangwu': 188}
# h1, h2, h3 = s.values()
# print(h1, h2, h3, sep=" ")
# print("s.key所组成的可迭代对象解包：")
# n1, n2, n3 = s.keys()
# print(n1, n2, n3, sep=" ")
# print("s的序列解包实际上是对s.key所组成的可迭代对象解包：")
# n1, n2, n3 = s
# print(n1, n2, n3, sep=" ")
# print("s.popitem()返回一个元组，将其赋值到多个变量上：：")
# name, height = s.popitem()
# print(name, height, sep=" ")
# print("字符串的序列解包：")
# x, y, z = 'abc'
# print(x, y, z, sep=" ")
# print("range对象的序列解包：")
# x, y, z = range(1, 10, 4)
# print(x, y, z, sep=" ")
# print("迭代器对象的序列解包：")
# x, y, z = iter(['a', 'b', 'c'])
# print(x, y, z, sep=" ")
# print("enumerate对象的序列解包：")
# x, y = enumerate(['abc', 28])
# print(x, y, sep=" ")
# print("zip对象的序列解包：")
# x, y = zip(['a', 'b'], [1, 2])
# print(x, y, sep=" ")
# print("map对象的序列解包：")
# x, y = map(int, ['45', '99'])
# print(x, y, sep=" ")


# print("交换两个变量的值：")
# x, y = 10, 20
# print(x, y, sep=" ")
# y, x = x, y
# print(x, y, sep=" ")


# print("切片支持序列解包：")
# l = list(range(5))
# print(l)
# l[1:4] = map(str, [11, 22, 33])
# print(l)


# print("使用序列解包同时遍历多个序列：")
# names = ["ZhangSan", "LiSi", "WangWu"]
# heights = [199, 188, 189]
# for i, j in zip(names, heights):
#     print(i, j, sep="->", end="  ")
