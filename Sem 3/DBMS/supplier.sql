create database chain;

create table suppliers (
    sno INT NOT NULL,
    sname VARCHAR(20) NOT NULL,
    city VARCHAR(20) NOT NULL,
    PRIMARY KEY(sno)
);

create table parts (
    pno INT NOT NULL,
    pname VARCHAR(20) NOT NULL,
    price FLOAT NOT NULL,
    PRIMARY KEY(pno)
);

create table supplies (
    sno INT NOT NULL,
    pno INT NOT NULL,
    quantity INT NOT NULL,
    FOREIGN KEY (pno) REFERENCES parts(pno) ON DELETE CASCADE,
    FOREIGN KEY (sno) REFERENCES suppliers(sno) ON DELETE CASCADE
);

insert into suppliers values (&sno, '&sname', '&city');
insert into parts values (&pno, '&pname', &price);
insert into supplies values (&sno, &pno, &quantity);

select * from parts order by pname;

select sum(price) as total, avg(price) as average from parts;

select * from suppliers order by sno desc;

select pname, price from parts where pname like '%t';

select * from parts where price < 30

create view supplier_parts as
(select * from supplies inner join 
suppliers on supplies.sno = suppliers.sno inner join
parts on supplies.pno = parts.pno)

select pname, sname from supplier_parts;

select * from supplier_parts where sname like 'r%';

select pname, sname, city from supplier_parts where city = 'Bangalore' or city = 'Bengaluru';

select count(*) as 'Mysore Count' from suppliers where city = 'Mysore';

select pname, sum(quantity), count(sname) as 'Supplier' from supplier_parts group by pname;

select pname, count(pname) as 'Parts Count', count(sname) as 'Supplier Count' from supplier_parts group by pname;

select sname, count(pname) as 'Parts Count', count(sname) as 'Supplier Count' from supplier_parts group by pname;

select pname, max(price) from supplier_parts;

select sno, sname, count(pname) as 'Parts Count', count(sname) as 'Supplier Count' from supplier_parts group by sno having count(pname) = 2;




