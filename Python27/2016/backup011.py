import time
import subprocess
#以subprocess代替os.system，后者不支持多个引号字符串。
source = r"D:\Strawberry\Documents\BackUp\notepad themes"
#字符串不可以以\结尾
target_dir = r'D:\Strawberry\Documents\BackUp\python'

target = target_dir + '\\' + time.strftime('%Y%m%d%H%M') + '.rar'
#带空格的cmd命令要加双引号
command = r'"C:\Program Files\WinRAR\RAR" a -r -inul %s "%s"' % (target,source)

if subprocess.call(command) == 0:
	print 'Backup successful.'
else:
	print 'Backup Failed.'