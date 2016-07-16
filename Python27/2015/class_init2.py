class Person:
	def __init__(self, nam):
		self.nae = nam
	def sayHi(self):
		print 'Hello, my name is', self.nae
p = Person('Swaroop')
p.sayHi()
# This short example can also be written as Person('Swaroop').sayHi()
