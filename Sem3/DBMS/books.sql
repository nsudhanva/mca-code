create user sudhanva identified by sudhanva;

grant connect, dba, resource to sudhanva;

desc table_name;

select * from tab;

connect
username: sudhanva
password: sudhanva

create table books (
	id int NOT NULL, 
	PRIMARY KEY(id),
	title varchar(20),
	year varchar(4),
	author_id int,
	publisher_id int,
	FOREIGN KEY (author_id) REFERENCES authors(id),
	FOREIGN KEY (publisher_id) REFERENCES publishers(id)
);

insert into books values(&id, '&title', '&year', &author_id, &publisher_id);

select * from books


create table authors (
	id int NOT NULL,
	PRIMARY KEY(id),
	author_name varchar(20)
);

insert into authors values(&id, '&author_name');

select * from authors


create table publishers (
	id int NOT NULL,
	PRIMARY KEY(id),
	publisher_name varchar(20)
);

insert into publishers values(&id, '&publisher_name');

select * from publishers;


create table book_copies (
	id int NOT NULL,
	PRIMARY KEY(id),
	library_branch_id int,
	no_of_copies number(5),
	FOREIGN KEY (library_branch_id) REFERENCES library_branches(id)
);

insert into book_copies values(&id, &library_branch_id, &no_of_copies);

select * from book_copies;


create table library_branches (
	id int NOT NULL,
	PRIMARY KEY(id),
	library_branch_name varchar(20),
	address varchar(100)
);

insert into library_branches values(&id, '&library_branch_name', '&address');

select * from library_branches;


create table book_lendings (
	id varchar(20) NOT NULL,
	PRIMARY KEY(id),
	library_branch_id int,
	card_no varchar(20),
	date_out date,
	due_date date,
	FOREIGN KEY (library_branch_id) REFERENCES library_branches(id)
);

insert into book_lendings values(&id, &library_branch_id, '&card_no', &date_out, &due_date);

select * from book_lendings;

INSERT INTO table_name (column1, column2, column3, ...)
VALUES (value1, value2, value3, ...);

delete from books where id = 1;

update books set title='This is life' where id = 2;

ALTER TABLE table_name
MODIFY column_name datatype;

ALTER TABLE table_name
MODIFY COLUMN column_name datatype;

ALTER TABLE table_name
ADD column_name datatype;

ALTER TABLE table_name
DROP COLUMN column_name;

select * from books where year = '2016';

create view book_authors as 
select books.title, books.year, authors.author_name 
from books inner join 
authors on books.author_id = authors.id;