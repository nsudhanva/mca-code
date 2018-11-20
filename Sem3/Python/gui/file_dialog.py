# -*- coding: utf-8 -*-
"""
Created on Mon Nov 19 14:14:20 2018

@author: Sudhanva
"""

from tkinter import filedialog
from tkinter import *

root = Tk()
root.filename = filedialog.asksaveasfilename(initialdir = "/", title = 'Select File', filetypes = (("python files", "*.py"),('all files', '*.*')))
print(root.filename)

root.filename = filedialog.askopenfilename(initialdir = "/", title = 'Select File', filetypes = (("python files", "*.py"),('all files', '*.*')))
print(root.filename)

mainloop()