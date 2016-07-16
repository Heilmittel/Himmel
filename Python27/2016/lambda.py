# -*- coding:utf-8 -*-
import sys

def comp(x):
    return x["age"]
li=[{"age":20,"name":"def"},{"age":25,"name":"abc"},{"age":10,"name":"ghi"}]
li=sorted(li,key=comp)
print(li)

def jc(x):
	y = reduce(lambda x,y:x*y,range(1,x+1))
	return y

print '用lambda表达式求n的阶乘'
print '你好，11的阶乘是%d' % jc(11)
#encoding bug still exists.
#print sys.getdefaultencoding()