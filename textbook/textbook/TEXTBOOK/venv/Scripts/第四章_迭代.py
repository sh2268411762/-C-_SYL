from _collections_abc import Iterable
from _collections_abc import Iterator


# print("判断对象是否为迭代对象：")
# print(isinstance(['aba', 1, 8, 5, 9.8], Iterable))   # 列表
# print(isinstance(('aba', 1, 8, 5, 9.8), Iterable))   # 元组
# print(isinstance({1: 'one', 2: 'two'}, Iterable))   # 字典
# print(isinstance({'one', 'two'}, Iterable))   # 集合
# print(isinstance('ahsjsvsga', Iterable))   # 字符串
# print(isinstance(range(10), Iterable))   # range
# print(isinstance(78726, Iterable))   # 数字
#
# print("判断对象是否为迭代器：")
# print(isinstance([], Iterator))
# print(isinstance((), Iterator))
# print(isinstance({1: 'one', 2: 'two'}, Iterator))
# print(isinstance(['one', 'two'], Iterator))
# print(isinstance('ahsjsvsga', Iterator))
# print(isinstance(range(10), Iterator))
# print(isinstance(78726, Iterator))
#
# l1 = ['train', 'bus', 'car', 'ship']
# print("可迭代对象可以通过iter()函数获得一个迭代器：")
# vl1 = iter(l1)
# print("vl1的类型为：", type(vl1))
# print("vl1是否为迭代器：", isinstance(vl1, Iterator))
# for i in range(len(l1)):
#     print(vl1.__next__())
# else:
#     print("vl1没有元素了!")


# # 迭代对象及迭代器相关内置函数
# # enumerate
# print("enumerate(iterable,start=0)返回下标和值的enumerate对象，第一个参数为可迭代对象，第二个参数表示开始下标，默认为0")
# l2 = ["一", 2, "三", 4, "wu", 6, "seven"]
# vl2 = enumerate(l2)
# print("vl2的类型：", type(vl2))
# print("vl2是否为一个迭代器：", isinstance(vl2, Iterator))
# print("vl2是否为一个迭代对象：", isinstance(vl2, Iterable))
# print("转换为列表：")
# print("默认从0开始", list(vl2))
# vvl2 = enumerate(l2, 1)
# print("从1开始   ", list(vvl2))
# vvvl2 = enumerate(l2, 2)
# print("从2开始   ", list(vvvl2))
#
# vl2 = enumerate(l2)
# print("\n转换为元组：")
# print("默认从0开始：", tuple(vl2))
# for i in range(len(tuple(vl2))):
#     print(vl2.__next__())
# else:
#     print("元素读取完毕")
# vvl2 = enumerate(l2, 1)
# print("从1开始    ：", tuple(vvl2))
# for i in range(len(tuple(vvl2))):
#     print(vl2.__next__())
# else:
#     print("元素读取完毕")
# vvvl2 = enumerate(l2, 2)
# print("从2开始    ：", tuple(vvvl2))
# for i in range(len(tuple(vvvl2))):
#     print(vl2.__next__())
# else:
#     print("元素读取完毕\n")
#
# print("遍历enumerate中的对象：")
# for i in enumerate(l2):
#     print(i, end=" ")
# print("\n遍历enumerate中的对象元素的下标和值：")
# for i, x in enumerate(l2):
#     print(i, x, end=" ")
#
# print()
# vl2 = enumerate(l2)
# print(dict(vl2))
# vl2 = enumerate(l2)
# print(set(vl2))


# # zip函数
# print("zip(iter1[,iter2[...]])用来将多个迭代器对象压缩到一起，返回一个zip对象：")
# l3 = ["一", "二", "三", "四", "五"]
# vl3 = zip('abcde', l3)
# print("vl3的类型：", type(vl3))
# print("vl3是否为迭代器  ：", isinstance(vl3, Iterator))
# print("vl3是否为迭代对象：", isinstance(vl3, Iterable))
# print(list(vl3))
# print(('b', '二') in zip('abcde', l3))
# print(('b', '0') in zip("abcde", l3), "\n")
#
# vl3 = zip("abcde", enumerate(l3))
# print(list(vl3), "\n")
#
# print("长短不同，匹配完短的结束：")
# vl3 = zip("abcd", l3)
# print(list(vl3))
# vl3 = zip("abcdef", l3)
# print(list(vl3))


# # map函数
# def pow_(x, y):
#     return x ** 2 + y ** 2
#
#
# print("map(func,* iterable)把一个函数func依次映射到可迭代对象的每个元素上，返回一个map对象：")
# l4 = ['1', '2.2', '3.4', '4.4', '5']
# bl4 = map(float, l4)
# print("bl4的地址：", bl4)
# print(list(bl4))
# print(list(map(pow_, [1, 2], [2, 3])))
# print(list(map(lambda x, y: x ** 2 + y ** 2, [1, 2], [2, 3])))


# # filter函数
# def func(x):
#     return x % 2 != 0
#
#
# print("filter(function or None, iterable)函数把一个带有参数的函数function作用到一个可迭代对象上，并返回一个filter对象，"
#       "\nfilter对象中的元素由可迭代对象中使得函数function返回值为True的元素组成，\n如果指定函数为None，则返回可迭代对象中等价于True的对象")
# l4 = [1.2, 3.4, 5.6, 7.8, 9, -45, -567, 88, 44, 22]
# vl4 = filter(func, l4)
# print("vl4的类型：", type(vl4))
# print("vl4是否为迭代器 ：", isinstance(vl4, Iterable))
# print("vl4是否为迭代对象：", isinstance(vl4, Iterable))
# print("函数表达式", list(filter(func, l4)))
# print("lambda表达式：", list(filter(lambda x: x % 2 != 0, l4)))
# print("列表推导式：", [x for x in l4 if x % 2 != 0])
#
# l5 = [1, 2, 3, 4, 0, 0, False, "", True, "sss", "False"]
# print("\n指定函数为None：", list(filter(None, l5)))
