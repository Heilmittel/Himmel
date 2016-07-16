import time
import subprocess
import os

source= [r'D:\Strawberry\Documents\BackUp\chrome',r'"D:\Strawberry\Documents\BackUp\notepad themes"']
target_dir = 'D:\Strawberry\Documents\BackUp\python'
day = target_dir + os.sep + time.strftime('%Y%m%d')
now = time.strftime('%H%M%S')
target = day + os.sep + now + '.rar'

if not os.path.exists(day):
	os.mkdir(day)
	print 'Successfully created directory.'

command = r'"C:\Program Files\WinRAR\RAR" a -r -inul %s %s' % (target,' '.join(source))
if subprocess.call(command) == 0:
	print 'Backup successful.'
else:
	print 'Backup Failed.'