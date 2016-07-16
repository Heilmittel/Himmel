#-*- encoding: utf-8 -*-
import wx
class sayHello(wx.App):
  
    def OnInit(self):
        frame = wx.Frame(parent=None,title="Hello wxPython")
        frame.Show()
        return True
  
  
app = sayHello()
#主循环
app.MainLoop()