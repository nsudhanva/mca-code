from tkinter import *
window = Tk()
window.title("Welcome to MCA App")
window.geometry('400x200')
label = Label(window, text = "Hello")
button = Button(window, text="Click Me")

label.pack(expand = True)
button.pack(expand = True)
window.mainloop()