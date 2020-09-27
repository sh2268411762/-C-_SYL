# # 创建元组
# t1 = ("a", 200, "b", 150, "c", 100)
# t2 = (3.14, 1.61, 0, -9, 6)
# t3 = ("a",)
# t4 = ()  # 创建空元组
# t5 = tuple()  # 创建空元组
# print(t1)
# print(t2)
# print(t3)
# print(t4)
# print(t5)
# print("当元组只有一个元素时，该元素后面的逗号不能省略")

# # 元组访问
# t6 = ("train", "bus", "car", "ship", "subway", "bicycle")
# print("索引访问：t6[1] = ", end=" ")
# print(t6[1])
# print("切片访问：t6[0:3] = ", end=" ")
# print(t6[0:3])

# # 元组运算
# print("通过元组相加的方式生成新元组：")
# print("元组相加：", end=" ")
# t7 = (1, 2, 3, 4)
# t8 = (5, 6, 7, 8)
# print(t7 + t8)
# print("原元组不变：t7 = ", t7, ",t8 = ", t8)
# print("用数字n乘以一个元组，会生成一个新元组，新元组中原来的元组元素将依次被重复n次：")
# print("元组相乘：")
# print(t7 * 2)
# print(t8 * 3)

# # 元组遍历
# print("元组可通过for语句或while语句实现遍历：")
# t9 = (1, 2, 3, 4)
# for i in t9:
#     print(i, end=" ")
# print()
# for i in range(len(t9)):
#     print(t9[i], end=" ")
# print()
# i = 0
# while i < len(t9):
#     print(t9[i], end=" ")
#     i += 1
# print()

# # 列表与元组之间的转换
# # 列表 ---> 元组
# print("列表转换成元组，视为tuple()函数冻结了列表，返回一个元组，不影响原列表：")
# t10 = [1, 2, 3, 4]
# print(tuple(t10))
# print(t10)
# # 元组 ---> 列表
# print("元组转换成列表，视为list()函数融化了元组，返回一个列表，不影响原元组：")
# t11 = (1, 2, 3, 4)
# print(list(t11))
# print(t11)

# # 4-4
# # upper()函数  将字符串中的小写字母转换为大写字母
# print("请输入若干个字符串组成列表list1，当输入提示为y或yes结束，大小写无关：")
# yy = "n"
# i = 1
# list1 = []
# while yy.upper() not in ['Y', 'YES']:
#     # while yy not in ['Y', 'YES', 'y', 'yes', 'Yes', 'YEs', 'YeS', 'yeS', 'yEs', 'yES']:
#     #    print(yy)
#     #    print(yy.upper())
#     x = input("请输入第" + str(i) + "个元素：")
#     list1.append(x)
#     i += 1
#     yy = input("输入完了？（y或yes表示结束，大小写无关，其他继续）：")
# tuple1 = tuple(list1)
# print("列表：", list1)
# print("元组：", tuple1)
