# -*- coding: utf-8 -*-
"""
Created on Thu Nov 15 12:26:24 2018

@author: Sudhanva
"""

from tkinter import *
top = Tk()

c = Canvas(top, bg = 'lavender', height=250, width=300)

coord_1 = 50, 150, 10, 300
coord_2 = 50, 150, 400, 400
coord_3 = 150, 50, 400, 400
coord_4 = 150, 50, 200, 300

c.create_line(coord_1, fill = 'pink')
c.create_line(coord_2, fill = 'pink')
c.create_line(coord_3, fill = 'pink')
c.create_line(coord_4, fill = 'pink')

c.pack()
top.mainloop()