create table professors (
    prof_id INT NOT NULL,
    name VARCHAR(20) NOT NULL,
    address VARCHAR(100) NOT NULL,
    PRIMARY KEY (prof_id)
);

create table students (
    student_id VARCHAR(20) NOT NULL,
    name VARCHAR(20) NOT NULL,
    gpa float NOT NULL,
    address VARCHAR(100) NOT NULL,
    phone VARCHAR(10) NOT NULL,
    PRIMARY KEY (student_id)
);

create table courses (
    course_id INT NOT NULL,
    course_name VARCHAR(20) NOT NULL,
    required BOOLEAN NOT NULL, 
    PRIMARY KEY (course_id)
);

create table teaches (
    prof_id INT NOT NULL,
    course_id INT NOT NULL,
    year INT NOT NULL,
    PRIMARY KEY (prof_id, course_id),
    FOREIGN KEY (prof_id) REFERENCES professors(prof_id),
    FOREIGN KEY (course_id) REFERENCES courses(course_id)
);

create table takes (
    course_id INT NOT NULL,
    student_id VARCHAR(20) NOT NULL,
    grade VARCHAR(1) NOT NULL,
    year INT NOT NULL,
    PRIMARY KEY (student_id, course_id),
    FOREIGN KEY (student_id) REFERENCES students(student_id),
    FOREIGN KEY (course_id) REFERENCES courses(course_id)
);

select * from students where address like "%salt%";

select * from teaches 
inner join professors on teaches.prof_id = professors.prof_id
inner join courses on teaches.course_id = courses.course_id;

select * from teaches 
inner join professors on teaches.prof_id = professors.prof_id
inner join courses on teaches.course_id = courses.course_id
where year < 2001 order by desc;

select * from teaches 
inner join students on teaches.student_id = students.student_id
inner join courses on teaches.course_id = courses.course_id
where course_name = 'CS';

