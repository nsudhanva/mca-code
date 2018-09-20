# Create a class as bank, initialise the instance variable balance as zero
# Create a methid called as deposite that takes amount as an argument and increment balace with this amount
# Create another method class as withdraw which again takes amount as a parameter
# Decrement the balance with the amount if balance becomes less than zero, display withdraw is not possible
# Revert back to the original balance
# Create another method called as display, which displays the balance amount

class Bank:
    balance = 0

    def __init__(self):
        pass

    def deposit(self, amount):
        Bank.balance += amount
        message = 'Deposited ' + str(amount) + ' successfully'
        return message

    def withdraw(self, amount):
        if Bank.balance != 0 and Bank.balance >= amount:
            Bank.balance -= amount
            message = 'Withdrawn ' + str(amount) + ' successfully'
            return message
        else:
            message = 'Withdraw not possible'
            return message

    def display_balance(self):
        return Bank.balance

bank = Bank()

while True:
    print('1. Deposit')
    print('2. Withdraw')
    print('3. Display Balance')
    print('4. Quit')
    
    choice = int(input('Enter option: '))

    if choice == 1:
        amount = float(input('Enter amount to deposit: '))
        print(bank.deposit(amount))
    elif choice == 2:
        amount = float(input('Enter amount to deposit: '))
        print(bank.withdraw(amount))
    elif choice == 3:
        print(bank.display_balance())
    else:
        break


