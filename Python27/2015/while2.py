from numpy import random
import os
number = int(raw_input('Enter an integer(1-30) : '))
running = True
while running :
	guess = random.randint(1,30)
	if guess == number :
		print '\nCongratulations, you guessed it.'
		running =False
	elif guess < number :
		print 'No, it is a little higher than',guess
	else :
		print 'No, it is a little lower than',guess
else :
	print 'The while loop is over.'
print 'Done'
os.system('pause')