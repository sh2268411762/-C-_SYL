# 圆的面积和周长
import math

# r = input("请输入圆的半径：")
# r = eval(r)
# if r >= 0:
#     c = 2 * math.pi * r
#     s = math.pi * r ** 2
#     print("圆的周长 = ", c, "圆的面积 = ", s)
# # print("圆的周长 = ", c, "圆的面积 = ", s)   若输入小于 0 ，则没有 c 和 s 变量，打印语句出错
#
#
# # 判断闰年
# year = input("请输入月份：")
# year = int(year)
# if year % 400 == 0 or (year % 4 == 0 and year % 100 != 0):
#     print(year, "年是闰年！！！")
# else:
#     print(year, "是平年！！！")

# # 面试问题
# age = input("请输入你的年龄：")
# age = int(age)
# college = input("请输入你的毕业院校：")
# major = input("请输入你的专业:")
# jobtime = input("请输入你的工作时间：")
# jobtime = int(jobtime)
#
# if (age <= 25 and college == "重点" and major == "金融工程") or (jobtime >= 3 and major == "投资银行"):
#     print("恭喜你被录取了！")
# else:
#     print("抱歉，你不符合我们的要求！")


# # 订货量与折扣
# price = int(input("请输入标准价格："))
# Quantity = int(input("请输入订货量："))
# if Quantity <= 0:
#     Coff = -1
# elif Quantity < 300:  # 0 -- 300   0.0
#     Coff = 0.0
# elif Quantity < 500:  # 300 -- 500   0.03
#     Coff = 0.03
# elif Quantity < 1000:  # 500 -- 1000  0.05
#     Coff = 0.05
# elif Quantity < 2000:  # 1000 -- 2000  0.08
#     Coff = 0.08
# else:                  # 2000 -- +inf  0.1
#     Coff = 0.1
# if Quantity >= 0 and price >= 0:
#     Pay = Quantity * price * (1 - Coff)
#     print("支付金额：", Pay)
# else:
#     print("输入的订货量与标准价格均不能小于0！！！")

#
# # 加入客户
# Ctype = int(input("请输入客户类型（小于5为新客户）："))
# Price = float(input("请输入标准价格："))
# Quantity = int(input("请输入订货数量："))
# if Ctype > 0 and Price > 0 and Quantity > 0:
#     if Ctype > 5:
#         print("老用户！！！")
#         if Quantity < 500:
#             Coff = 0.03
#         elif Quantity < 1000:
#             Coff = 0.05
#         elif Quantity < 2000:
#             Coff = 0.08
#         else:
#             Coff = 0.1
#     else:
#         print("新用户！！！")
#         if Quantity < 800:
#             Coff = 0
#         else:
#             Coff = 0.02
#     Pays = Quantity * Price * (1 - Coff)
#     print("应付款为：", Pays)
# else:
#     print("输入有误！！！")

#
# # 三元操作符 --三目操作符
# x = 5
# if x > 0:
#     y = 1
# else:
#     y = 0
# print(y)
# y = 1 if x > 0 else 0
# print(y)


# # 风车
# import turtle as t
#
# t.goto(100, 0)
# for i in range(100):
#     t.left(80)
#     t.fd(100)
#     t.left(135)
#     t.fd(165)
#     t.left(125)
#     t.fd(115)


# 树
import turtle  # 导入模块

# def tree(branchLen, t):
#     if branchLen > 5:
#         t.forward(branchLen)  # 前进banchLen长度
#         t.right(20)  # 画笔右倾20度
#         tree(branchLen - 15, t)  # 调用自身
#         t.left(40)
#         tree(branchLen - 15, t)
#         t.right(20)
#         t.backward(branchLen)  # 回到原来位置
#
#
# def main():
#     t = turtle.Turtle()
#     myWin = turtle.Screen()
#
#     t.left(90)  # 这几步主要为了调整初始画笔的位置，让树落在窗口中间
#     t.up()
#     t.backward(100)
#     t.down()
#     t.color("green")
#
#     tree(75, t)  # 初始主干为75
#     myWin.exitonclick()
#
#
# main()


# # 计算并输出小于等于200的正偶数之和
# i = 2
# sum = 0
# while i <= 200:
#     sum = sum + i
#     i = i + 2
# print(sum)
# # 计算并输出小于等于200的正奇数之和
# i = 1
# sum = 0
# while i <= 200:
#     sum = sum + i
#     i = i + 2
# print(sum)


# # 使用信号值来终止循环
# fSale = float(input("请输入订单的销售额："))
# sumSales = 0
# while fSale > 0:
#     sumSales += fSale
#     fSale = float(input("请输入下一个订单的销售额："))
# print("总销售额为:", sumSales)


# #for 语句
# nameList = ['BeiJing', 'ShangHai', 'HangZhou', 'NanJing', 'TaiZhou', 'WuHan']
# print("城市名称列表：", end = " ")
# for name in nameList:
#     print(name, end = " ")
# print()
# for i in range(len(nameList)):
#     print(nameList[i], end = ' ')
#
# x = range(10)
# print("\n", x, type(x))
# # range 对象可以被转换为列表和元组
# y = list(x)
# print(y, type(y))
# z = tuple(x)
# print(z, type(z))
# for i in range(0, 10):
#     print(i, end = ' ')
# print()
# for i in range(3, 15, 1):
#     print(i, end = ' ')
# print()
# for i in range(3, 15):
#     print(i, end = ' ')
# print()
# for i in range(3, 15, 2):
#     print(i, end=' ')
# print()
# for i in range(15, 3, -2):
#     print(i, end=' ')
# print()


# # break语句
# num = int(input("请输入一个整数："))
# count = num // 2
# print(count)
# while count > 0:
#     if num % count == 0:
#         break
#     count = count - 1
# print(count, "is the max factor of ", num)


# # continue 语句
# strs = ['Mike', 'Tom', 'Null', 'Apple', 'Null', 'Amy', 'Dick']
# for atrs in strs:
#     if atrs == 'Null':
#         continue
#     print(atrs)
# print("End")


# # 带有else的while循环
# n = int(input("请输入一个整数："))
# i = n
# while i > 0:
#     if i % 23 == 0:
#         print("小于等于", n, "且能被23整除的最大整数是：", i)
#         break
#     i -= 1
# else:
#     print("没找到")

# # 带有else的for循环
# sale = [5000, 3000, 8000, 10600, 6000, 5000]
# for i in sale:
#     if i >= 6000:
#         print("第一个大于等于6000的销售额是：", i)
#         break
# else:
#     print("未找到")
