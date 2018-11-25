from tkinter import *
window = Tk()
window.title("Welcome")
window.geometry('400x200')
label = Label(window, text = "Hello")

def click_me():
    label.configure(text = "Button Clicked!")

button = Button(window, text = "Click Me", command = click_me)
label.pack(expand = True)
button.pack(expand = True)
window.mainloop()