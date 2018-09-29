create database college;

create table professors (
    prof_id INT NOT NULL,
    name VARCHAR(20) NOT NULL,
    rank INT NOT NULL,
    age INT NOT NULL,
    specialization VARCHAR(20),
    PRIMARY KEY (prof_id)
);

insert into professors (&prof_id, '&name', &rank, &age, '&specialization');


create table projects (
    project_num VARCHAR(20) NOT NULL,
    sponsor VARCHAR(20) NOT NULL,
    start_date DATE NOT NULL,
    end_date DATE NOT NULL,
    budget FLOAT NOT NULL,
    PRIMARY KEY (project_num)
);

insert into projects ('&project_num', '&sponsor', &start_date, &end_date, &budget);


create table students (
    usn VARCHAR(20) NOT NULL,
    name VARCHAR(20) NOT NULL,
    age INT NOT NULL,
    degree VARCHAR(20) NOT NULL,
    prof_id INT NOT NULL,
    PRIMARY KEY (usn, prof_id),
    FOREIGN KEY (prof_id) REFERENCES professors(prof_id) ON DELETE CASCADE
);

insert into students ('&usn', '&name', &age, '&degree', &prof_id);


create table prof_works (
    prof_work_id INT NOT NULL,
    prof_id INT NOT NULL,
    project_num VARCHAR(20) NOT NULL,
    PRIMARY KEY (prof_work_id, prof_id, project_num),
    FOREIGN KEY (prof_id) REFERENCES professors(prof_id) ON DELETE CASCADE,
    FOREIGN KEY (project_num) REFERENCES projects(project_num) ON DELETE CASCADE
);

insert into prof_works (&prof_work_id, &prof_id, '&project_num');


create table student_works (
    student_work_id INT NOT NULL,
    usn VARCHAR(20) NOT NULL,
    project_num VARCHAR(20) NOT NULL,
    PRIMARY KEY (student_work_id, usn, project_num),
    FOREIGN KEY (usn) REFERENCES students(usn) ON DELETE CASCADE,
    FOREIGN KEY (project_num) REFERENCES projects(project_num) ON DELETE CASCADE
);

insert into student_works (&id, &usn, '&project_num');

create view college as select * from professors inner join prof_works on professors.prof_id = prof_works.prof_id 
inner join projects on prof_works.project_num = projects.project_num 
inner join students_works on student_works.project_num = prof_works.project_num 
inner join students on students.usn = student_works.usn
