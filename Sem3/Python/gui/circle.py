# -*- coding: utf-8 -*-
"""
Created on Thu Nov 15 11:58:53 2018

@author: Sudhanva
"""

from tkinter import *
top = Tk()

c = Canvas(top, bg = 'red', height=500, width=500)

coord = 150, 150, 250, 300

c.create_arc(coord, start = 0, extent = 359, fill = 'pink')

c.pack()
top.mainloop()