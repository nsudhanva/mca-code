# -*- coding: utf-8 -*-
"""
Created on Thu Nov 15 11:43:20 2018

@author: Sudhanva
"""

#arc
#coord 
#image
#line
#oval
#polygon

#canvas.create_arc
#canvas.create_image
#canvas.create_line
#canvas.create_oval
#canvas.create_polygon

from tkinter import *
top = Tk()

c = Canvas(top, bg = 'lavender', height=250, width=300)

coord = 10, 50, 240, 210

arc = c.create_arc(coord, start = 0, extent = 150, fill = 'pink')
c.pack()
top.mainloop()
