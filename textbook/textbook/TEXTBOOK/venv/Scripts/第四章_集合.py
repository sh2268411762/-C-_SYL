# # 集合创建
# print("集合创建：")
# s1 = {"train", "ship", "bus", "car"}
# s2 = set(["train", "ship", "bus", "car"])
# print("大括号创建：", s1, type(s1))
# print("set()函数创建：", s2, type(s2))
# s3 = set()
# print("空集合只能用set()来创建：", s3, type(s3))
# s4 = {}
# print("{}用来创建字典：", s4, type(s4))
# l1 = ["train", "ship", "bus", "car", "bus"]
# s5 = set(l1)
# print("列表：", l1)
# print("集合：", s5)
# print("集合在创建时或其他数据类型转换为集合时，会自动删除掉重复元素")
#
# # 集合运算
# s6 = {"train", "ship", "bus", "car"}
# s7 = {"train", "ship", "bus", "subway"}
# print("len()函数返回集合中元素的个数：", len(s6))
# print("in 用来判断某元素是否存在于集合之中，判断结果为布尔值：", ("bus" in s6), ("ppp" in s6))
# print("并集(两个集合的所有元素)：", s6 | s7)
# print("交集(两个集合的公共元素)：", s6 & s7)
# print("差集（A-B）(A有B无)：", s6 - s7)
# print("差集（A-B）(A有B无)：", s7 - s6)
# print("对称差(两个集合中不重叠的元素)：", s6 ^ s7)
# print("交集、差集、对称差和并集都是创建了一个新的集合\n")
# s8 = {"train", "ship", "bus", "car"}
# s9 = {"train", "ship", "bus"}
# print("s9是s8的真子集？：", s9 < s8)
# print("s9是s8的真超集？：", s9 > s8)
# s10 = {"train", "ship", "bus", "car"}
# s11 = {"train", "ship", "bike"}
# print("s11是s10的真子集？：", s11 < s10)
# print("s11是s10的真超集？：", s11 > s10)
# s10 |= s11
# print("将s11的元素并入s10中：", s10)


# # 集合方法
# s12 = {"train", "ship", "bus", "car"}
# s13 = {"subway", "bicycle", "bus"}
# print("union()方法相当于并集：", s12.union(s13))
# print("intersection()方法相当于交集：", s12.intersection(s13))
# print("两种方法均不改变原集合：s12 = ", s12, "s13 = ", s13)
#
# print("update()方法相当于集合元素合并元素(无返回值)：", s12.update(s13))
# print("update()方法改变了s12:", s12)
#
# s14 = {"train", "ship", "bus", "car"}
# s15 = {"subway", "bicycle", "bus"}
# print("difference()方法相当于差集：")
# print("s14-s15(s14与s15的差集)：", s14.difference(s15))
# print("s15-s14(s15与s14的差集)：", s15.difference(s14))
# print("different()方法不改变原集合：s14 = ", s14, "s15 = ", s15)
#
# print("symmetric_difference()方法相当于对称差：", s14.symmetric_difference(s15))
# print("symmetric_different()方法不改变原集合：s14 = ", s14, "s15 = ", s15)
#
# s16 = {"train", "ship", "bus", "car"}
# s17 = {"subway", "bicycle", "bus"}
# s18 = {"bus", "car"}
# print("issubset()方法用于判断是否子集：", s18.issubset(s16))
# print("issubset()方法用于判断是否子集：", s18.issubset(s17))
# print("issuperset()方法用于判断是否超集：", s16.issuperset(s17))
# print("issuperset()方法用于判断是否超集：", s16.issuperset(s18))
# print("issuperset()方法用于判断是否超集：", s17.issuperset(s18))
#
# s19 = {1, 2, 3, 4, 5}
# print("原集合：s19 = ", s19)
# print("add()方法用于向集合中添加元素(无返回值)：", s19.add(6), "\n添加后：s19 = ", s19)
#
# print("remove()方法从集合中删除元素（无返回值，如果元素中没有该元素则出错）：", s19.remove(6))
# print("删除后：s19 = ", s19)
#
# print("discard()方法是从集合中删除元素，集合中没有也不出错（无返回值）：", s19.discard(5))
# print("discard()方法是从集合中删除元素，集合中没有也不出错（无返回值）：", s19.discard(4))
# print("discard()方法是从集合中删除元素，集合中没有也不出错（无返回值）：", s19.discard(99))
# print("删除后：s19 = ", s19)
#
# print("pop()方法是从集合中删除任一元素，并返回该元素：", s19.pop())
# print("pop()方法是从集合中删除任一元素，并返回该元素：", s19.pop())
# print("pop()方法是集合为空则抛出KeyError异常：", s19.pop())
#
# s20 = {"train", "ship", "bus", "car"}
# print("原集合：s20 = ", s20)
# print("clear()方法的作用清空集合(返回值为空)：", s20.clear())
# print("清空后；s20 = ", s20)


# # 4-8
# import random
#
# numbers = []  # 定义一个空列表
# for i in range(15):
#     n = random.randint(1, 9)
#     numbers.append(n)
# print("随机获取的15个数：", numbers)
# temp = list(set(numbers))
# print("用set()去重hou：", temp)
#
# for i in range(15):
#     n = random.randint(1, 9)
#     numbers.append(n)
# print("随机获取的15个数：", numbers)
# temp = list(set(numbers))
# temp.sort(key=numbers.index)
# print("用set()去重hou：", temp)
