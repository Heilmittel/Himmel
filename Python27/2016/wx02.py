import wx
app = wx.App()
win = wx.Frame(None,title = 'Text Editor')
button1 = wx.Button(win,label = 'open')
win.Show()
app.MainLoop()
