# -*- coding: utf-8 -*-
"""
Created on Mon Nov 19 13:56:31 2018

@author: Sudhanva
"""

from tkinter import *
root = Tk()

labelframe = LabelFrame(root, labelanchor = 'sw', text = 'This is a labelframe', highlightbackground = 'red', highlightcolor = 'yellow')

labelframe.pack(fill = 'both', expand = 'yes')
left = Label(labelframe, text = 'Inside the LabelFrame')

left.pack()
mainloop()S