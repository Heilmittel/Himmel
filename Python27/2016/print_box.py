message = raw_input('Sentence:')
screen = 80
text = len(message)
box = text + 8
left = (screen - box) //2

print
print ' '* left + '+' + '-'* (box -2) + '+'
print ' '* (left + 3) + '|' + ' '* box + '|'
print ' '* (left + 3) + '|' + message + '|'
print ' '* (left + 3) + '|' + ' '* box + '|'
print ' '* left + '+' + '-'* (box -2) + '+'
print