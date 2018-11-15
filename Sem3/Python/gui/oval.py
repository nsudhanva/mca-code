# -*- coding: utf-8 -*-
"""
Created on Thu Nov 15 11:59:18 2018

@author: Sudhanva
"""


from tkinter import *
top = Tk()

c = Canvas(top, bg = 'red', height=500, width=500)

coord = 50, 150, 250, 250

c.create_oval(coord, fill = 'pink')

c.pack()
top.mainloop()