# base class user that has a class variable called as name 
# and a method called as print name that displays particular name of the object
# Define another class called as programmer that inherits the class user and has an instance variable called language
# it has a function called as disply that displays programming in language
# Create two objects which have the names Ram and Shyam. Rma - User, Shyam - Programmer, Display the name of the programmer 
# and that language in which he programs

class User:

    def __init__(self, name):
        self.name = name

    def print_name(self):
        return self.name

class Programmer(User):

    def __init__(self, language, user):
        self.language = language
        self.name = user.name

    def print_name(self):
        return self.name

    def display_lang(self):
        return self.language

user1 = User('Ram')
user2 = User('Shyam')
programmer = Programmer('Java', user2)

print(user2.print_name())
print(programmer.print_name())
print(programmer.display_lang())