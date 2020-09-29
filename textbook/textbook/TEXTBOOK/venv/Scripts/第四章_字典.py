# # 字典
# # 创建字典
# d1 = {"1": "One", "2": "Two", "3": "Three", "4": "Four", "5": "Five"}
# d2 = dict(一="One", 二="Two", 三="Three", 四="Four", 五="Five")
# keys1 = ["1", "2", "3", "4", "5"]
# values1 = ["一", "二", "三", "四", "五"]
# d3 = dict(zip(keys1, values1))
# d4 = dict.fromkeys(["1", "2", "3", "4", "5"])
# print("直接赋值创建：", d1)
# print("用dict()函数创建：", d2)
# print("由序列构建zip对象，有zip构建字典：", d3)
# print("以给定序列为键，创建值为空的字典：", d4)
# d5 = {}
# d6 = dict()
# print("空字典：", d5, "\n空字典：", d6)


# # 字典操作
# d7 = {"1": "One", "2": "Two", "3": "Three", "4": "Four", "5": "Five"}
# print("len()可以返回字典中项（键值对）的数量：", len(d7))
#
# print("查找与特定建相关的值，其返回值就是字典中与给定的键相关联的值（如果指定的键在字典中不存在，则报错）：")
# if "1" in d7:
#     print(d7["1"])
# else:
#     print("字典d7中没有[", "\"1\"]键")
# if "8" in d7:
#     print(d7["8"])
# else:
#     print("字典d7中没有[", "\"8\" ]键")
#
# print("在字典中某个键相关联的值可以用赋值语句来修改，如果指定的键不存在，则相当于向字典中添加新的键值对：")
# print(d7)
# d7["6"] = "Seven"
# print("字典d7中没有键[\"6\"]键，则向字典中添加该键：", d7)
# d7["6"] = "Six"
# print("字典d7中键[\"6\"]键为\"Seven\"，修改后字典为：", d7)
#
# d8 = {"1": "One", "2": "Two", "3": "Three", "4": "Four", "5": "Five"}
# print("del命令可以用来删除字典条目或者整个字典：")
# print(d8)
# del d8["1"]
# print(d8)
#
# d9 = {"1": "One", "2": "Two", "3": "Three", "4": "Four", "5": "Five"}
# print("in在字典中的用法：")
# print("1" in d9)
# print("8" in d9)


# # 字典方法
# print("keys()方法将字典中的键以可迭代的dict_keys对象返回：")
# d10 = {"1": "One", "2": "Two", "3": "Three", "4": "Four", "5": "Five"}
# print("转换成列表输出：", list(d10.keys()))
# print("转换成元组输出：", tuple(d10.keys()))
# print(type(d10.keys()))
# print("values()方法将字典中的值以可迭代的dict_values对象返回：")
# print("转换成列表输出：", list(d10.values()))
# print("转换成元组输出：", tuple(d10.values()))
# print(type(d10.values()))
#
# print("items()方法将字典中的所有键和值以可迭代的对象dict_items对象返回，每对键值对组成员组作为一个元素：")
# print(d10.items(), type(d10.items()))
# print("转换成列表输出：", list(d10.items()), type(list(d10.items())))
#
# print(
#     "使用dict.setdefault(key,default=None)时，如果字典中包含参数key对应的键，则返回该键对应的值，否则以参数key的值为键，以参数default的值为该键对应的值，在字典中插入键值对元素，并返回该元素的值部分：")
# print(d10)
# print("字典中没有[\"6\"]键，则会加入该键并赋值：", d10.setdefault("6", "Six"))
# print(d10)
#
# print("update()方法将另一个字典中的值一次性添加到当前字典，有相同的键则当前字典的键会被覆盖：")
# d11 = {"7": "Seven", "8": "Eight", "9": "Nine"}
# print(d10)
# d10.update(d11)
# print(d10)
#
# print("clear()方法将字典中的所有条目情空，使字典变为空字典，与del命令不同（del命令会直接删除字典）：")
# print(d11)
# d11.clear()
# print(d11)
#
# print("pop()方法能够弹出并删除字典中的键值对（返回值）：")
# print(d10)
# print("一个参数：删除字典d10中键为[\"9\"]的键值对：", d10.pop("9"))
# print(d10)
# print("两个参数：删除字典d10中键为[\"10\"]的键值对（没有该键则返回第二个参数）：", d10.pop("10", "没有该键"))
#
# print("popitem()方法能够弹出字典的一个元素(从后往前删除)，如果字典为空则触发异常：")
# d12 = {"1": "One", "2": "Two", "3": "Three"}
# print(d12)
# d12.popitem()
# print(d12)
# d12.popitem()
# print(d12)
# d12.popitem()
# print(d12)
# # d12.popitem()
#
# print("get()方法返回指定键所对应的值，键不存在则返回默认值，默认值为None，也可以自己指定：")
# print(d10.get("1"))
# print(d10.get("10"))
# print(d10.get("10", "没有该键"))


# # 遍历字典
# d13 = {"1": "One", "2": "Two", "3": "Three", "4": "Four", "5": "Five"}
# print("遍历字典的键：")
# for i in d13:
#     print(i, d13[i])
# print()
# for i in d13.keys():
#     print(i, d13[i])
#
# print("\n遍历字典中的值：")
# for i in d13.values():
#     print(i)
#
# print("\n遍历字典中的键值对：")
# for i in d13.items():
#     print(i)
# print()


# # 列表、元组与字典之间的转换
# d14 = {"1": "One", "2": "Two", "3": "Three", "4": "Four", "5": "Five"}
# print("list（）函数可以将字典转换成列表，但列表不能转换成字典：")
# print("list()默认将键转换成列表：", list(d14))
# print("list()将键转换为列表   ：", list(d14.keys()))
# print("list()将值转换成列表   ：", list(d14.values()))
# print("list()将键值对转换为列表：", list(d14.items()))
#
# print("tuple（）函数可以将字典转换成元组，但元组不能转换成字典：")
# print("tuple()默认将键转换成元组：", tuple(d14))
# print("tuple()将键转换为元组   ：", tuple(d14.keys()))
# print("tuple()将值转换成元组   ：", tuple(d14.values()))
# print("tuple()将键值对转换为元组：", tuple(d14.items()))
# print(d14)


# # 4-5
# stu = {"张琳": 58, "孙治平": 70, "徐小伟": 89, "徐丽萍": 69, "童万丽": 90, "钱志敏": 84, "赵虚余": 64}
# print("原有字典：", stu)
# # stu["晋宇浩"] = "缺考"
# # # stu.setdefault("晋宇浩", "缺考")
# stu.update({"晋宇浩": "缺考"})
# # stu["张琳"] = 60
# stu.update({"张琳": 60})
# del stu["徐小伟"]
# # stu.pop("徐小伟")
# print("现有字典：", stu)
# print("当前字典总人数：", len(stu))
# str = input("请输入要查找的同学：")
# while True:
#     if str in stu:
#         print(stu[str])
#         str = input("请输入下一个要查找的同学：")
#     else:
#         print("没找到该同学")
#         break


# 4-6
