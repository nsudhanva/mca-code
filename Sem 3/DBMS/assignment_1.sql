-- Assignment 1, DBMS
-- Sudhanva N
-- PES1201702260 
-- Question 8, Customer Bank Account Database, Part2

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

-- Part-2
-- 5. Find the smallest number of assets.
select branch_name, branch_city, min(assets) from banks;

-- 6. Find the largest balance amount at each branch.
-- 7. Find all branches with assets greater than at least one branch in Brooklyn.
-- 8. Find branches with assets greater than all branches in Brooklyn.

