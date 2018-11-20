# -*- coding: utf-8 -*-
"""
Created on Mon Nov 19 14:03:15 2018

@author: Sudhanva
"""

from tkinter import *
root = Tk()
frame = Frame(root)
frame.pack()

bottomframe = Frame(root)
bottomframe.pack(side = BOTTOM)

redbutton = Button(frame, text = 'Red', fg = 'red')
redbutton.pack(side = LEFT)

greenbutton = Button(frame, text = 'Green', fg = 'green')
greenbutton.pack(side = LEFT)

bluebutton = Button(frame, text = 'Blue', fg = 'blue')
bluebutton.pack(side = LEFT)

yellowbutton = Button(frame, text = 'Yellow', fg = 'yellow')
yellowbutton.pack(side = RIGHT)

blackbutton = Button(frame, text = 'Black', fg = 'black')
blackbutton.pack(side = RIGHT)

pinkbutton = Button(frame, text = 'Pink', fg = 'pink')
pinkbutton.pack(side = RIGHT)

mainloop()

