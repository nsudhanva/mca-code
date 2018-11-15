# -*- coding: utf-8 -*-
"""
Created on Thu Nov 15 11:56:34 2018

@author: Sudhanva
"""

from tkinter import *
top = Tk()

c = Canvas(top, bg = 'lavender', height=250, width=300)

coord_1 = 150, 50, 10, 300
coord_2 = 150, 50, 400, 400

c.create_line(coord_1, fill = 'pink')
c.create_line(coord_2, fill = 'pink')

c.pack()
top.mainloop()
