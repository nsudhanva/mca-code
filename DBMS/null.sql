insert into books values ('Data science', 2018, 3);

-- errors

insert into books values (4, 'Data science', 2018, 3, 1);
insert into books values (5, 'Data wrangling', NULL, 3, 1);

select * from books where year is NULL;     
select title from books where year is NULL;     
select title, year from books where year is NOT NULL;     

select * from books where year in 2018;     
select title, year from books where year in 2016;     
select title, author_id from books where author_id in 2;     

select author_name from authors where author_name in 'sudhanva';     
select * from book_authors where author_name in (select author_name from book_authors);
          