import random
number = random.randint(1,55)
guess = int(raw_input("Enter an integer:"))
if guess == number :
    print "Congratulations,you guessed it."
    print "(But you do not win any prize!)"
elif guess < number :
    print "No,it is a little higher than that."
else :
    print "No,it is a little lower than that."
print "Done."
