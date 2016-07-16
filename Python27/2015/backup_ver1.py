import os
import time

# 1. The files and directories to be backed up are specified in a list.
source = [r'D:\Strawberry\Documents\Python27\*.*', 'D:\Strawberry\Documents\PycharmProjects\*.*']
# If you are using Windows, use source = [r'C:\Documents', r'D:\Work'] or something like that

# 2. The backup must be stored in a main backup directory
target_dir = r'D:\Strawberry\Documents\BackUP'
# Remember to change this to what you will be using

# 3. The files are backed up into a rar file.
# 4. The name of the rar archive is the current date and time
target = target_dir + time.strftime('\\%Y%m%d-%H%M') + '.rar'

# 5. We use the rar command (in Unix/Linux) to put the files in a rar archive
rar_command = r'"C:\Program Files\WinRAR\RAR" a -r -inul  %s  %s' % (target, ' '.join(source))

# Run the backup
if os.system(rar_command) == 0:
	print 'Successful backup to', target
else:
	print 'Backup FAILED'
