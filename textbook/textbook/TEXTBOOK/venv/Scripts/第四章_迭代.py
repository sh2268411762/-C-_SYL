from _collections_abc import Iterable
from _collections_abc import Iterator

print("判断对象是否为迭代对象：")
print(isinstance(['aba', 1, 8, 5, 9.8], Iterable))
print(isinstance(('aba', 1, 8, 5, 9.8), Iterable))
print(isinstance({1: 'one', 2: 'two'}, Iterable))
print(isinstance(['one', 'two'], Iterable))
print(isinstance('ahsjsvsga', Iterable))
print(isinstance(range(10), Iterable))
print(isinstance(78726, Iterable))

print("判断对象是否为迭代器：")
print(isinstance([], Iterator))
print(isinstance((), Iterator))
print(isinstance({1: 'one', 2: 'two'}, Iterator))
print(isinstance(['one', 'two'], Iterator))
print(isinstance('ahsjsvsga', Iterator))
print(isinstance(range(10), Iterator))
print(isinstance(78726, Iterator))

l1 = ['train', 'bus', 'car', 'ship']
vl1 = iter(l1)
print("vl1的类型为：", type(vl1))
print("vl1是否为迭代器：", isinstance(vl1, Iterator))
for i in range(len(l1)):
    print(vl1.__next__())
else:
    print("vl1没有元素了!")
