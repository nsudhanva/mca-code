-- Consider the following tables

-- Customer (CustomerID, Customername, Address, PhoneNo, City)
create table customers (
    customer_id int,
    customer_name varchar(20),
    address varchar(100),
    phone varchar(10),
    city varchar(20),
    PRIMARY KEY(customer_id) NOT NULL
);

insert into customers values (&customer_id, '&customer_name', '&address', '&phone', '&city');

-- Bank (branch_name, branch_city, assets)
create table banks (
    branch_name varchar(20),
    branch_city varchar(20),
    assets int
);

insert into banks values ('&branch_name', '&branch_city', &assets);

-- Account (acc_no, balance)
create table accounts (
    acc_no varchar(20),
    balance float,
    PRIMARY KEY(acc_no) NOT NULL
);

insert into accounts values ('&acc_no', &balance);

-- Deposit (acc_no,Customer_id, branch_name, amount)
create table deposits (
    acc_no varchar(20),
    customer_id int,
    branch_name varchar(20),
    amount float,
    PRIMARY KEY(acc_no) NOT NULL,
    PRIMARY KEY(customer_id) NOT NULL,
    FOREIGN KEY(acc_no) REFERENCES accounts(acc_no) ON DELETE CASCADE,
    FOREIGN KEY(customer_id) REFERENCES customers(customer_id) ON DELETE CASCADE
);

insert into deposits values ('&acc_no', &customer_id, '&branch_name', &amount);

-- Part-1
-- 1. Find bank accounts with a balance under $700:
-- 2. Retrieve a list of all bank branch details, ordered by branch city, with each city’s branches listed in reverse order of holdings.
-- 3. Find customerid’s and average balance of accounts at Perryridge branch
-- 4. Find all customers with more than one account.

-- Part-2
-- 5. Find the smallest number of assets.
-- 6. Find the largest balance amount at each branch.
-- 7. Find all branches with assets greater than at least one branch in Brooklyn.
-- 8. Find branches with assets greater than all branches in Brooklyn.

-- Part-3
-- 9. Find all cities with more than two customers living in the city.
-- 10. Find the largest total account balance of any branch.
-- 11. Add 2% interest to all bank account balances with a balance of $500 or less