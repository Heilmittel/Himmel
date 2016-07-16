# _*_ coding:utf-8 _*_

'''
time模块提供各种操作时间的函数.
第一种是时间戳的方式(相对于1970.1.1 00:00:00以秒计算的偏移量),时间戳是惟一的.
第二种以数组的形式表示即(struct_time),共有九个元素,分别表示,同一个时间戳的struct_time会因为时区不同而不同.
第三种是字符串形式。'''

import time

#time() -> floating point number 返回当前时间的时间戳
print 'time.time()'
print time.time()

#localtime([seconds]) -> (tm_year,tm_mon,tm_day,tm_hour,tm_min,tm_sec,tm_wday,tm_yday,tm_isdst)
#将一个时间戳转换成一个当前时区的struct_time，如果seconds参数未输入，则以当前时间为转换标准
print '\ntime.localtime()'
print time.localtime()

#ctime(seconds) -> string 将一个时间戳(默认为当前时间)转换成一个时间字符串
print '\ntime.ctime()'
print time.ctime()

#asctime([tuple]) -> string 将一个struct_time(默认为当时时间)，转换成字符串
# When the time tuple is not present, current time as returned by localtime() is used.
print '\ntime.asctime()'
print time.asctime()

#strftime(format[, tuple]) -> string 将指定的struct_time(默认为当前时间)，根据指定的格式化字符串输出
print "\ntime.strftime('%y_%Y_%m_%d_%H_%I_%M_%S')"
print time.strftime('%y_%Y_%m_%d_%H_%I_%M_%S')