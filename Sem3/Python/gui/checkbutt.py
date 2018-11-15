# -*- coding: utf-8 -*-
"""
Created on Thu Nov 15 11:37:12 2018

@author: Sudhanva
"""

from tkinter import *
from tkinter import messagebox

top = Tk()

check_var_1 = IntVar()
check_var_2 = IntVar()

c1 = Checkbutton(top, text = 'Music', variable = check_var_1, onvalue = 1, offvalue = 0, height = 5, width = 20)
c2 = Checkbutton(top, text = 'Video', variable = check_var_2, onvalue = 1, offvalue = 0, height = 5, width = 20, state=DISABLED)

c1.pack()
c2.pack()
top.mainloop()