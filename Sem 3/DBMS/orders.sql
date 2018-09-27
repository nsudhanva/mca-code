create table salesmen (
	salesman_id integer not null,
	name varchar(20) not null,
	city varchar(20) not null,
	commission number(10) not null,
	primary key (salesman_id)
);

insert into salesmen values (&salesmen_id, '&name', '&city', &commission);

create table customers (
	customer_id integer not null,
	name varchar(20) not null,
	city varchar(20) not null,
	grade varchar(1) not null,
	salesman_id integer not null,
	primary key (customer_id),
	foreign key (salesman_id) references salesmen(salesman_id) on delete cascade
);

insert into customers values (&customer_id, '&name', '&city', '&grade', &salesman_id);

create table orders (
	order_id integer not null,
	purchase_amount number(10) not null,
	order_date date not null,
	customer_id integer not null,
	salesman_id integer not null,
	primary key (order_id),
	foreign key (customer_id) references customers(customer_id) on delete cascade,
	foreign key (salesman_id) references salesmen(salesman_id) on delete cascade
);

insert into orders values (&order_id, &purchase_amount, '&date', &customer_id, &salesman_id);


--Draw the conceptual schema. Write SQL queries to

-- 1. Count the customers with grades above Bangalore’s average.
select count(*) as grade_count, city, avg(*) as avg_grade from customers
where grade > avg_grade group by city;

-- 2. Find the name and numbers of all salesmen who had more than one customer.
select count(*) as customer_count, orders.salesman_id, salesmen.name from orders 
inner join salesmen on orders.salesman_id = salesmen.salesman_id
group by orders.salesman_id, salesmen.name; 

-- 3. List all salesmen and indicate those who have and don’t have customers in their cities
select customers.city, customers.name from salesmen 
inner join customers 
on salesmen.city != customers.city
union 
select name, city from customers;

-- (Use UNION operation.)

-- 4. Create a view that finds the salesman who has the customer with the highest order of a day.

create view highest_order as (select count(*) as order_count, customer_id as customer_id from orders 
group by salesman_id, customer_id);

-- 5. Demonstrate the DELETE operation by removing salesman with id 1000. All his orders must also be deleted.
delete * from salesmen where id = 100;