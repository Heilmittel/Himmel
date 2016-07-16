#Filename : Guess Nmuber
Nmuber = 23
Guess = int(raw_input('Enter an integer :'))
if Guess == Nmuber :
	print 'Congratulations,you guessed it.'
	print 'But you win no prizes!'

elif Guess < Nmuber :
	print 'No,it\'s a litte higher than it.'

else :
	print 'No,it\'s a little lower than it.'

print 'Done'