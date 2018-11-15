# -*- coding: utf-8 -*-
"""
Created on Thu Nov 15 11:12:55 2018

@author: Sudhanva
"""

from tkinter import *
from tkinter import messagebox

top = Tk()

def hello_call_back():
    messagebox.showinfo("Hello Python", "Hello World")

im = Image.open('D:\\Photos\\Wallpapers\\black.jpg')
ph = ImageTk.PhotoImage(im)

    
B = Button(top, text = "Hello", image=ph , activebackground = "Red", activeforeground = "Yellow", command = hello_call_back)
B.pack()
top.mainloop()
