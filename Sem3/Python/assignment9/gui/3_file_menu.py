from tkinter import *
from tkinter import Menu
window = Tk()
window.title("This is Menu App")
window.geometry('400x200')
menu = Menu(window)
menu.add_cascade(label='File')
window.config(menu=menu)
window.mainloop()