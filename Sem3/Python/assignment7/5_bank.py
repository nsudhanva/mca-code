class Bank:
    balance = 0
    transaction_count = 0

    def __init__(self):
        pass

    def deposit(self, amount):
        Bank.balance += amount
        message = 'Deposited ' + str(amount) + ' successfully, Balance: ' + str(Bank.balance)
        Bank.trasaction_count += 1
        return message

    def withdraw(self, amount):
        if Bank.balance != 0 and Bank.balance >= amount:
            Bank.balance -= amount
            message = 'Withdrawn ' + str(amount) + ' successfully, Balance: ' + str(Bank.balance) 
            Bank.transaction_count += 1
            return message
        else:
            message = 'Withdraw not possible: Balance is: ' + str(Bank.balance)
            return message

    def display_balance(self):
        return Bank.balance

    def display_transaction_count(self):
        return Bank.transaction_count

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
        amount = float(input('Enter amount to withdraw: '))
        print(bank.withdraw(amount))
    elif choice == 3:
        print(bank.display_balance())
    elif choice == 4:
        print(bank.transaction_count())
    else:
        break