year = int(raw_input('Enter a year:'))

if year % 400 == 0:
	leap = 1
elif year % 100 == 0:
	leap = 0
elif year % 4 == 0:
	leap = 1
else:
	leap = 0

if leap == 1:
	print '%d is a leap year.' % year
else:
	print '%d is not a leap year.' % year