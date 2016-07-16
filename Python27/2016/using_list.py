shoplist = ['apple','mango','carrot','banana']
print 'I have',len(shoplist),'items to buy.'
print 'These items are:'
for item in shoplist:
	print item,
print '\nI also have to buy rice.'
shoplist.append('rice')
print 'My shoplist now is',shoplist
print 'I will sort my shoplist now.'
shoplist.sort()
print 'Sorted shoplist is',shoplist

print 'The first item to buy is',shoplist[0]
olditem = shoplist[0]
del shoplist[0]
print 'I bought the',olditem
print 'My shoplist is now',shoplist