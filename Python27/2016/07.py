while True:
    s = raw_input("Enter something:")
    if s == "quit":
        break
    if len(s) < 5:
        print "The string is too short."
        continue
    print "Input is of sufficient length."
