# -*- coding: utf-8 -*-
"""
Created on Thu Nov 15 11:12:55 2018

@author: Sudhanva
"""

from tkinter import *
root = Tk()
# SUNKEN, RAISED, GROOVE, RIDGE

label = Label(root, text='Whats up', relief=GROOVE, bg ='blue', cursor='spider', bd='4', font='Arial', width = 30, underline = 5, fg = 'yellow')
label.pack()
root.mainloop()