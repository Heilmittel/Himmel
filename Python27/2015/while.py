from numpy import random
import os
number =  random.randint(1,55)
running = True
while running :
	guess = int(raw_input('Enter an integer(1-55) : '))
	if guess == number :
		print '\nCongratulations, you guessed it.'
		running = False
	elif guess < number :
		print 'No, it is a little higher than that'
	else :
		print 'No, it is a little lower than that'
else :
	print 'The while loop is over.'
print 'Done'
os.system('pause')
