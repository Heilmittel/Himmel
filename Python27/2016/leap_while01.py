running = True

while running:
	message = raw_input("Enter a year: ")
	if message == 'quit':
		running =False
		break
	year = int(message)

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

print 'Done.'