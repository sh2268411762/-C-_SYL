# # 列表
# list1 = [3.4, 44, 33, 0, -98]
# list2 = ["train", "bus", "car", "ship"]
# list3 = ["a", 200, "b", 167, "c", 100]
# list4 = []  # 空列表
# list5 = list()  # 空列表
# list6 = [[2, 3, 4, 5], [56, 47, 38, 29], [1, 2, 3, 4], [1, 2, 3, 5]]  # 二维列表
# print(list1)
# print(list2)
# print(list3)
# print(list4)
# print(list5)
# print(list6)
# # 列表访问
# print(list2[0], list2[1])  # train bus
# print(list2[-1], list2[-3])  # ship  bus
# print(list6[0][-1], list6[2][3])  # 5  4
# # 修改元素
# x1 = ["train", "bus", "car", "ship"]
# x1[-1] = "bike"
# print(x1)
# # 列表切片
# x2 = ["train", "bus", "car", "ship"]
# print(x2[0: 3])
# print(x2[:: 2])
# print(x2[:: -1])
# print(x2)
# x2[1: 3] = ["ddd", "fff"]
# print(x2)
# # del命令
# x3 = ["train", "bus", "car", "ship"]
# del x3[3]  # 删除 ship
# print(x3)
# del x3  # 直接删除列表x3
# # print(x3)
# # 列表相加
# x4 = ["train", "bus", "car", "ship"]
# x5 = ["subway", "bicycle"]
# x6 = x4 + x5  # +进行列表相加生成一个新列表
# print(x4)
# print(x5)
# print(x6)
# # 列表相乘
# x7 = ["train", "bus", "car", "ship"]
# x8 = 2 * x7  # 列表相乘生成一个新列表
# x9 = 2 * x8
# print(x7)
# print(x8)
# print(x9)
# x8 *= 2
# print(x8)


# # 列表方法
# x10 = ["train", "bus", "car", "ship", "subway", "bicycle", "car"]
# print("index()方法从列表中找出与参数值匹配的第一个元素索引位置，一般与 in 搭配")
# if "car" in x10:
#     print(x10.index("car"))
# else:
#     print("列表中没有\"car\"元素")
#     print(x10.index("ship"))

# x11 = ["train", "bus", "car", "ship", "subway", "bicycle", "car"]
# print("count()方法用于统计某个元素在列表中出现的次数")
# print(x11.count("car"))
# print(x11.count("subway"))
# print(x11.count("plane"))

# x12 = ["train", "bus", "car", "ship"]
# print("append()方法追加单个元素到列表的尾部，只接收一个元素，元素可以是任何数据类型，被追加的元素在列表中保持原数据结构")
# x12.append("plane")
# print(x12)
# x12.append(8)
# print(x12)
# x12.append([2, 3])
# print(x12)

# x13 = ["train", "bus", "car", "ship"]
# print("extend()方法在列表的末尾一次性追加另一个列表中的多个值，可以用新列表拓展原有的列表(一个参数)")
# print(x13)
# x13.extend(["plane"])
# print(x13)
# x13.extend([8, 8, 0, 9])
# print(x13)
# x13.extend((19, 11))
# print(x13)

# x14 = ["train", "bus", "car", "ship"]
# print("insert()方法将一个元素插入到列表中的指定位置（按下标插入，两个参数），一个为下标，一个为插入元素")
# print(x14)
# x14.insert(3, "plane")
# print(x14)
# x14.insert(0, "plane")
# print(x14)
# x14.insert(-2, "bike")
# print(x14)

# x15 = ["train", "bus", "car", "ship", "subway", "ship", "bicycle"]
# print("remove()方法用于移除列表中与某值匹配的第一个元素，找不到会报错（可与 in 搭配）")
# print(x15)
# x15.remove("ship")
# print(x15)
# if "ship" in x15:
#     print("有ship元素")
#     x15.remove("ship")
#     print(x15)
# else:
#     print("没有ship元素")
#     x15.remove("car")
#     print(x15)

# x16 = ["train", "bus", "car", "ship", "subway", "ship", "bicycle"]
# print("pop()方法用于移除列表中的一个元素（默认为最后一个元素），并且返回该元素，也可以指定索引来移除")
# print(x16)
# print(x16.pop())  # bicycle
# print(x16)
# print(x16.pop(2))  # car
# print(x16)

# x16 = ["train", "bus", "car", "ship", "subway", "ship", "bicycle"]
# print("clear()方法用于请空列表，但不删除列表")
# print(x16)
# x16.clear()
# print(x16)

# x17 = ["train", "bus", "car", "ship", "subway", "ship", "bicycle"]
# x17.insert(3, 99)
# print("reverse()方法用于将列表中的元素转置")
# print(x17)
# x17.reverse()
# print(x17)

# # 排序
# x18 = [12, 34, 3.14, 99, -10]
# print(
#     "sort()方法用于将列表中的元素排序，默认方法内参数reverse为False，即为升序排序，当reverse为True时，即为降序排序\n如果列表中包含的是字符串，则按照字母顺序进行排序，可以使用key(可为len或str)参数")
# print(x18)
# x18.sort()
# print(x18)
# x18.sort(reverse=True)
# x19 = ["train", "bus", "car", "ship", "subway", "ship", "bicycle"]
# print(x19)
# x19.sort(key=len, reverse=True)  # 降序，按字符串长度
# print(x19)
# x19.sort(key=str, reverse=False)  # 升序，按字符串大小
# print(x19)
# x20 = [12, "bus", "train", 99]
# print(x20)
# print("有数字和字符串时，可使用key = str来排序")
# x20.sort(key=str, reverse=True)
# print(x20)


# # 列表函数
# x21 = ["train", "bus", "car", "ship", "subway", "ship", "bicycle"]
# print("len()函数用来返回列表中所含元素的个数")
# print(x21)
# print(len(x21))

# x22 = ["train", "bus", "car", "ship", "subway", "ship", "bicycle"]
# x23 = [12, 34, 55, 4.44, 89, 90]
# print("max()函数用于返回列表中的最大值，如果列表中为字符串，则按照字符串的比较大小方法排序返回最大值（同时含有数字和字符串会出现异常）")
# print(x22)
# print(max(x22))
# print(x23)
# print(max(x23))

# x24 = ["train", "bus", "car", "ship", "subway", "ship", "bicycle"]
# x25 = [12, 34, 55, 4.44, 89, 90]
# print("min()函数用于返回列表中的最小值，如果列表中为字符串，则按照字符串的比较大小方法排序返回最小值（同时含有数字和字符串会出现异常）")
# print(24)
# print(min(x24))
# print(x25)
# print(min(x25))

# x25 = ["train", "bus", "car", "ship", "subway", "ship", "bicycle"]
# print("reversed()函数将列表中的元素位置反向并返回可迭代的reversed对象，可以和list（）函数使用得到新列表")
# print(x25)
# print(reversed(x25))
# print(type(reversed(x25)))
# print(list(reversed(x25)))

# x26 = [12, 34, 4.14, 55, 99, -10]
# print("sorted()函数对列表进行排序并返回新列表，不影响原列表，另外两个参数与sort()方法一致")
# print(x26)
# n1 = sorted(x26)
# print(x26)
# print(n1)
# n2 = sorted(x26, key=str, reverse=True)
# print(n2)
# x27 = ["train", "bus", "car", "ship", "subway", "ship", "bicycle"]
# n3 = sorted(x27, key=len, reverse=True)
# print(n3)
# print("长度降序")

# # 遍历列表
# x28 = ["train", "bus", "car", "ship", "subway", "ship", "bicycle"]
# for i in x28:
#     print(i, end=" ")
# print()
# for i in range(len(x28)):
#     print(x28[i], end=" ")
# print()
# i = 0
# while i < len(x28):
#     print(x28[i], end=" ")
#     i += 1

# # 4-1
# l1 = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
# l2 = []
# print("原来序列：", l1)
# l2 = l1[::2]  # 把偶数下标放进l2
# l2.sort()  # 默认升序，reverse = True是降序
# l1[::2] = l2  # 排完序后将l2插入
# print("偶数下标升序：", l1)

# # 4-2
# l3 = []
# l4 = []
# print("列表l3:")
# for i in range(4):
#     x = int(input("请输入第" + str(i + 1) + "个整数："))
#     l3.append(x)
# print("列表l4:")
# for i in range(3):
#     x = int(input("请输入第" + str(i + 1) + "个整数："))
#     l4.append(x)
# print("l3:", l3)
# print("l4:", l4)
# # l3.extend(l4)
# l3 = l3 + l4
# print("l4合并到l3后：", l3)
# l3.extend([90, 100])
# print("l3:", l3)
# l3.sort(reverse=True)
# print("降序排序：", l3)
# y = input("请输入2个整数：")
# y1, y2 = map(int, y.split())
# l3.extend([y1, y2])
# print("从键盘输入两个数添加到末尾：", l3)

# # 4-3
# l5 = [12.04, 11.15, 13.47, 13.58, 12.04, 12.04, 11.15, 12.58, 11.15]
# print("共有", len(l5), "个数据", l5)
# print("12.04共出现了", l5.count(12.04), "次")
# Min1 = min(l5)
# print("最小收盘价：", Min)
# l5.remove(Min)
# print("删除首次出现的最小数据的列表：", l5)

# l6 = [12.04, 11.15, 13.47, 13.58, 12.04, 12.04, 11.15, 12.58, 11.15]
# print("原列表：", l6)
# Min2 = min(l6)
# for i in range(l6.count(Min2)):
#     l6.remove(Min2)
# print("删除最小值后：", l6)
# l7 = [12.04, 11.15, 13.47, 13.58, 12.04, 12.04, 11.15, 12.58, 11.15]
# print("原列表：", l7)
# Min3 = min(l7)
# for i in range(len(l7) - 1, -1, -1):
#     if Min3 == l7[i]:
#         # del l7[i]
#         l7.remove(l7[i])
# print("删除最小值后：", l7)

