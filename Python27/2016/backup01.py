import os
import time

source = r"D:\Strawberry\Documents\BackUp\chrome"

target_dir = r'D:\Strawberry\Documents\BackUp\python'

target = target_dir + '\\' + time.strftime('%Y%m%d%H%M') + '.rar'

command = r'"C:\Program Files\WinRAR\RAR" a -r -inul %s %s' % (target,source)

if os.system(command) == 0:
	print 'Backup successfully.'
else:
	print 'Backup Failed.'
	print command
	os.popen(command)
#os.system('pause')
