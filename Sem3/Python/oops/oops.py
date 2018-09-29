class Dog:
    'Dogs'
    pass
    
class Lion:
    species = 'Mammal'
    
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def description(self):
        return self.name, self.age

    def speak(self, sound):
        return sound

lion1 = Lion('Sudhanva', 20)
lion2 = Lion('Narayana', 20)

# print(lion1.name)
# print(lion2.name)
# print(lion1.age)
# print(lion2.age)

# print(Lion('Sudhanva', 20))
# print(Lion('Narayana', 10))
# print(Lion('Sudhanva', 20) == Lion('Narayana', 10))
# print(Lion('Sudhanva', 20) is Lion('Narayana', 10))

print(lion1.description())
print(lion1.species)
print(lion1.speak('Roar'))