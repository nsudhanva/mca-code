create table actors (
	act_id integer not null,
	act_name varchar(20) not null,
	act_gender varchar(10),
	primary key (act_id)
);

insert into actors values (&act_id, '&act_name', '&act_gender');


create table directors (
	dir_id integer not null,
	dir_name varchar(20) not null,
	dir_phone varchar(10),
	primary key (dir_id)
);

insert into directors values (&dir_id, '&dir_name', '&dir_phone');


create table movies (
	mov_id integer not null,
	mov_title varchar(20) not null,
	mov_year integer,
	mov_lang varchar(20),
	dir_id integer not null,
	primary key (mov_id),
	foreign key (dir_id) references directors(dir_id) on delete cascade
);

insert into movies values (&mov_id, '&mov_title', &mov_year, '&mov_lang', &dir_id);


create table movie_casts (
	act_id integer not null,
	mov_id integer not null,
	role varchar(20),
	primary key (act_id, mov_id),
	foreign key (act_id) references actors(act_id) on delete cascade,
	foreign key (mov_id) references movies(mov_id) on delete cascade
);

insert into movie_casts values (&act_id, &mov_id, '&role');


create table ratings (
	mov_id integer not null,
	rev_stars integer,
	primary key(mov_id),
	foreign key(mov_id) references movies(mov_id) on delete cascade
);

insert into ratings values (&mov_id, &rev_stars);

-- 1. List the titles of all movies directed by ‘Hitchcock’. 

select movies.mov_id, movies.mov_title, movies.mov_year from movies 
inner join directors on movies.dir_id = directors.dir_id
where dir_name = 'Hitchcock';

-- 2. Find the movie names where one or more actors acted in two or more movies. 

select count(movies.mov_title), count(actors.act_id) from movies 
inner join movie_casts on movies.mov_id = movie_casts.mov_id
inner join actors on movie_casts.act_id = actors.act_id
group by movies.mov_id 
having count(actors.act_id) >= 2;

-- 3. List all actors who acted in a movie before 2000 and also in a movie after 2015 

select actors.act_id, actors.act_name, movies.mov_title, movies.mov_year from actors
inner join movie_casts on actors.act_id = movie_casts.act_id
inner join movies on movie_casts.mov_id = movies.mov_id
where mov_year <= 2000 or mov_year >= 2015;

-- 4. Find the title of movies and number of stars for each movie that has at least one rating and find the highest number of stars that movie received. Sort the result by movie title. 

select movies.mov_title, ratings.rev_stars from movies 
inner join ratings on movies.mov_id = ratings.mov_id
where rev_stars > 0
order by mov_title;

-- 5. Update rating of all movies directed by ‘Steven Spielberg’ to 5.

select * from directors inner join movies on directors.dir_id = movies.dir_id 
where dir_name = 'Steven Spielberg';

update ratings set rev_stars = 5 where mov_id in 
(select directors.dir_id from directors inner join movies on directors.dir_id = movies.dir_id 
where dir_name = 'Steven Spielberg');