class School:
	def __init__(self,name,age):
		self.name = name
		self.age =age
		print 'Initialized SchoolMember: %s' % self.name

	def tell(self):
		print 'Name: %s Age: %d' % (self.name,self.age),

class Teacher(School):
	def __init__(self,name,age,salary):
		School.__init__(self,name,age)
		self.salary = salary
		print 'Initialized Teacher: %s' % self.name

	def tell(self):
		School.tell(self)
		print 'Salary: %d' % self.salary

class Student(School):
	def __init__(self,name,age,mark):
		School.__init__(self,name,age)
		self.mark = mark
		print 'Initialized Student: %s' % self.name

	def tell(self):
		School.tell(self)
		print 'Mark: %d' % self.mark

t1 = Teacher('Mary',29,4000)
t2 = Teacher('Bob',43,6000)

s1 = Student('LiMing',16,88)
s2 = Student('ZhaoHong',15,85)

print

members = [t1,t2,s1,s2]
for member in members:
	member.tell()
