class Parent:        # ���常��
	parentAttr = 100
	def __init__(self):
		print "���ø��๹�캯��"

	def parentMethod(self):
		print '���ø��෽��'

	def setAttr(self, attr):
		Parent.parentAttr = attr

	def getAttr(self):
		print "�������� :", Parent.parentAttr

class Child(Parent): # ��������
	def __init__(self):
		print "���ø��๹�캯��2"

	def childMethod(self):
		print '�������෽�� child method'

c = Child()          # ʵ��������
#d = Child()
c.childMethod()      # ��������ķ���
c.parentMethod()     # ���ø��෽��
c.setAttr(200)       # �ٴε��ø���ķ���
c.getAttr()          # �ٴε��ø���ķ���

#members = [c, d]
#for member in members :
#	member.getAttr()