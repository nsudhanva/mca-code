from tkinter import *
from tkinter.ttk import *

class FrameView(Frame):
    
    def __init__(self, parent):
        Frame.__init__(self, parent)
        self.parent = parent
        self.init_ui()
        
    def init_ui(self):
        self.parent.title("Modifying rows")
        self.pack(fill = BOTH, expand = True)
        self.rowconfigure(1, weight = 1)
        self.columnconfigure(1, weight = 1)
        self.columnconfigure(3, weight = 1)

        label1 = Label(self, text = "Item:")
        label1.grid(row = 0, column = 0, padx = 5, sticky = W)

        item_entry = Entry(self)
        item_entry.grid(row=0, column=1, sticky=W+E, padx=5)

        label1 = Label(self, text="Quantity:")
        label1.grid(row=0, column=2)

        quant_entry = Entry(self)
        quant_entry.grid(row=0, column=3, sticky=W+E, padx=5)

        insert_button = Button(self, text="Insert",
        command=lambda: self.insert_item(item_entry , quant_entry))
        insert_button.grid(row=0, column=4, pady=5, padx=5)

        self.tree = Treeview(self, columns=("quant"), selectmode=EXTENDED)
        self.tree.heading("#0", text="Item")
        self.tree.heading("#1", text="Quantity")
        self.tree.column(0, anchor=E)
        self.tree.grid(row=1, column=0, columnspan=5, padx=5, sticky=E+W+N+S)

        remove_button = Button(self, text="Remove", command=self.remove_item)
        remove_button.grid(row=2, column=2, padx=5, pady=5, sticky=W)
        self.pack()
        
    def remove_item(self):
        iids = self.tree.selection()
        for iid in iids:
            self.tree.delete(iid)
            
    def insert_item(self, item_entry , quant_entry):
        val1 = item_entry.get()
        val2 = quant_entry.get()
        if (len(val1.strip()) == 0):
            return
        if (len(val1.strip()) == 0):
            return
        item_entry.delete(0, END)
        quant_entry.delete(0, END)
        self.tree.insert("", index=END, text=val1, values=(val2 ,))
        
def main():
    root = Tk()
    fv = FrameView(root)
    root.geometry("+400+400")
    root.mainloop()
    
if __name__ == '__main__':
    main()
