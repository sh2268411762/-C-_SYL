# # 1
# score = int(input("请输入成绩："))
# while True:
#     if 0 > score or score > 100:
#         print("输入有误，请重新输入：")
#         score = int(input("请输入成绩："))
#     else:
#         break
#
# if score >= 90:
#     print("成绩等级为：A")
# elif score >= 80:
#     print("成绩等级为：B")
# elif score >= 70:
#     print("成绩等级为：C")
# elif score >= 60:
#     print("成绩等级为：D")
# else:
#     print("成绩等级为：E")
#
#
# # 猜数游戏
# def fun(number):
#     while True:
#         if number < 0 or number > 9:
#             print("请重新输入")
#             number = int(input("请重新输入一个0到9之间的数字："))
#         else:
#             break
#     return number
#
#
# import random  # 生成一个随机数
#
# secret = random.randint(0, 9)
# # print(secret)
# number = int(input("请输入一个0到9之间的数字："))
# if number < 0 or number > 9:
#     number = fun(number)
#
# while True:
#     if number == secret:
#         print("恭喜，答对了\n")
#         break
#     else:
#         if number < secret:
#             print("太小")
#             number = int(input("请重新输入一个0到9之间的数字："))
#             if number < 0 or number > 9:
#                 number = fun(number)
#         else:
#             print("太大")
#             number = int(input("请重新输入一个0到9之间的数字："))
#             if number < 0 or number > 9:
#                 number = fun(number)

# x = input("请输入第一种水笔的包装和价格(用空格分隔)：")
# x1, x2 = map(int, x.split())
# y = input("请输入第二种水笔的包装和价格(用空格分隔)：")
# y1, y2 = map(int, y.split())
# price_x = float(x2 / x1)
# price_y = float(y2 / y1)
# if price_x == price_y:
#     print("两种水笔单价相同")
# elif price_x > price_y:
#     print("第二种便宜，建议购买")
# else:
#     print("第一种便宜，建议购买")
