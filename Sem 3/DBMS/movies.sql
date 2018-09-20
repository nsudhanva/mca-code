create table actors (
	act_id integer not null,
	act_name varchar(20) not null,
	act_gender varchar(10),
	primary key (act_id)
);

create table directors (
	dir_id integer not null,
	dir_name varchar(20) not null,
	dir_phone varchar(10),
	primary key (dir_id)
);

create table movies (
	mov_id integer not null,
	mov_title varchar(20) not null,
	mov_year integer,
	mov_lang varchar(20),
	dir_id integer not null,
	primary key (mov_id),
	foreign key (dir_id) references directors(dir_id)
);

create table movie_casts (
	act_id integer not null,
	mov_id integer not null,
	role varchar(20)
	primary key(act_id),
	primary key(mov_id),
	foreign key(act_id) references actors(act_id),
	foreign key(mov_id) references movies(mov_id)
);

create table ratings (
	mov_id integer not null,
	rev_stars integer,
	primary key(mov_id),
	foreign key(mov_id) references movies(mov_id)
);