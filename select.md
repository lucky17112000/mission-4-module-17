```sql
INSERT INTO students
(first_name, last_name, age, grade, course, email, dob, blood_group, country)
VALUES
('John', 'Smith', 22, 'A', 'CSE', 'john31@gmail.com', '2002-03-14', 'O+', 'USA'),
('Emily', 'Brown', 21, 'B', 'BBA', 'emily32@gmail.com', '2003-07-19', 'A+', 'UK'),
('Lucas', 'Martin', 23, 'A', 'EEE', 'lucas33@gmail.com', '2001-11-02', 'B+', 'Canada'),
('Sofia', 'Garcia', 20, 'A', 'Architecture', 'sofia34@gmail.com', '2004-01-25', 'AB+', 'Spain'),
('Marco', 'Rossi', 24, 'C', 'Mechanical', 'marco35@gmail.com', '2000-06-17', 'O-', 'Italy'),
('Aiko', 'Tanaka', 21, 'A', 'Physics', 'aiko36@gmail.com', '2003-09-08', 'A-', 'Japan'),
('Min', 'Park', 22, 'B', 'Economics', 'min37@gmail.com', '2002-04-12', 'B-', 'South Korea'),
('Chen', 'Wei', 23, 'A', 'Math', 'chen38@gmail.com', '2001-12-30', 'O+', 'China'),
('Ahmed', 'Hassan', 24, 'B', 'Civil', 'ahmed39@gmail.com', '2000-02-10', 'A+', 'Egypt'),
('Fatima', 'Ali', 21, 'A', 'Law', 'fatima40@gmail.com', '2003-05-21', 'AB-', 'Saudi Arabia'),

('Noah', 'Miller', 22, 'A', 'Statistics', 'noah41@gmail.com', '2002-08-18', 'O+', 'Australia'),
('Olivia', 'Wilson', 20, 'B', 'Marketing', 'olivia42@gmail.com', '2004-10-04', 'A-', 'New Zealand'),
('Liam', 'OConnor', 23, 'A', 'Finance', 'liam43@gmail.com', '2001-01-15', 'B+', 'Ireland'),
('Emma', 'Johansson', 21, 'A', 'Sociology', 'emma44@gmail.com', '2003-06-28', 'O-', 'Sweden'),
('Daniel', 'Kowalski', 24, 'C', 'Accounting', 'daniel45@gmail.com', '2000-09-09', 'A+', 'Poland'),
('Isabella', 'Silva', 22, 'B', 'English', 'isabella46@gmail.com', '2002-11-26', 'AB+', 'Brazil'),
('Mateo', 'Lopez', 21, 'A', 'Political Science', 'mateo47@gmail.com', '2003-03-07', 'O+', 'Argentina'),
('Anna', 'Muller', 23, 'A', 'Chemistry', 'anna48@gmail.com', '2001-07-20', 'B-', 'Germany'),
('Pierre', 'Dubois', 24, 'B', 'History', 'pierre49@gmail.com', '2000-12-11', 'A-', 'France'),
('Nora', 'Hansen', 20, 'A', 'Biology', 'nora50@gmail.com', '2004-02-05', 'O+', 'Norway');

-- more 20 data for practice purpose
INSERT INTO students
(first_name, last_name, age, grade, course, email, dob, blood_group, country)
VALUES
-- USA (4)
('Alex', 'Johnson', 22, 'A', 'CSE', 'alex51@gmail.com', '2002-01-15', 'O+', 'USA'),
('Mia', 'Williams', 21, 'B', 'BBA', 'mia52@gmail.com', '2003-03-20', 'A+', 'USA'),
('Ethan', 'Brown', 23, 'A', 'EEE', 'ethan53@gmail.com', '2001-07-11', 'B+', 'USA'),
('Sophia', 'Davis', 20, 'A', 'Law', 'sophia54@gmail.com', '2004-09-05', 'AB+', 'USA'),

-- UK (5)
('Oliver', 'Taylor', 22, 'A', 'CSE', 'oliver55@gmail.com', '2002-04-18', 'O-', 'UK'),
('Amelia', 'Wilson', 21, 'B', 'Economics', 'amelia56@gmail.com', '2003-06-22', 'A+', 'UK'),
('Harry', 'Moore', 23, 'A', 'Physics', 'harry57@gmail.com', '2001-02-14', 'B-', 'UK'),
('Isla', 'Anderson', 20, 'A', 'English', 'isla58@gmail.com', '2004-11-09', 'O+', 'UK'),
('Jack', 'Thomas', 24, 'C', 'Accounting', 'jack59@gmail.com', '2000-08-30', 'AB-', 'UK'),

-- Canada (5)
('Liam', 'Martin', 22, 'A', 'Statistics', 'liam60@gmail.com', '2002-05-12', 'O+', 'Canada'),
('Emma', 'Clark', 21, 'B', 'Marketing', 'emma61@gmail.com', '2003-10-01', 'A-', 'Canada'),
('Noah', 'Lewis', 23, 'A', 'Finance', 'noah62@gmail.com', '2001-12-19', 'B+', 'Canada'),
('Ava', 'Walker', 20, 'A', 'Biology', 'ava63@gmail.com', '2004-02-27', 'AB+', 'Canada'),
('Lucas', 'Hall', 24, 'C', 'Civil', 'lucas64@gmail.com', '2000-07-07', 'O-', 'Canada'),

-- Australia (6)
('James', 'Allen', 22, 'A', 'CSE', 'james65@gmail.com', '2002-03-03', 'O+', 'Australia'),
('Charlotte', 'Young', 21, 'B', 'Architecture', 'charlotte66@gmail.com', '2003-06-16', 'A+', 'Australia'),
('Benjamin', 'King', 23, 'A', 'Mechanical', 'benjamin67@gmail.com', '2001-09-25', 'B-', 'Australia'),
('Ella', 'Scott', 20, 'A', 'Psychology', 'ella68@gmail.com', '2004-12-08', 'AB+', 'Australia'),
('Henry', 'Green', 24, 'C', 'Geology', 'henry69@gmail.com', '2000-01-29', 'O-', 'Australia'),
('Grace', 'Baker', 22, 'A', 'Environmental Science', 'grace70@gmail.com', '2002-08-14', 'A-', 'Australia');


-- select
select * from students
select first_name , last_name ,dob, grade from students;
select dob , blood_group , country , first_name from students;




-- alias
select first_name as "First Name" , age as "Student Age" from students;

-- sorting
select first_name ,dob , country , age from students order by age asc;
select first_name ,dob , country , age from students order by age desc;
--

-- distinct
select distinct country from students;

--filtering

--?select students from USA
select * from students
where country =  'USA';

--?select student with 'A' and he is from physic department
select *from students
where grade = 'A' and course = 'Physics';


--?select specific students whose blood group A+ and show first_name , blood_group , country
select first_name , blood_group , country from students
where blood_group = 'A+';

--?select student from usa or bangladesh

select first_name  , email , country from students
where country='USA' or country = 'Bangladesh';

--? select students with a grade of 'A' or "B" in mathmetices or physic
select * from students
where (grade ='A' or grade ='B') and (course ='Math' or course='Physics');

--?select students from uk or bangladesh age 20
select * from students
where age =20 and (country ='UK' or country='Bangladesh');


-- comparision operator
--?select student older than 20
select first_name , email , country , age from students
where age >=20;

-- without USA

select * from students
where country !='USA'

  --between and In Operator

-- ?select student whose age between 20 and 22
select * from students
where age between 20 and 22;
--alternative
select * from students
where age >=20 and age <= 22;
where age between 20 and 22;


--?select student from bangladesh , usa and uk
select * from students
where country in ('Bangladesh' , 'USA' ,'UK');


--like operator and ilike operator
--?select students whose first name startrs with 'A'
select * from students
where first_name like 'A%';

--?select students whose first name End with 'A' and more
select * from students
where first_name ilike '%A_';

--?select student whoes last name end with n
select * from students
where  last_name ilike '%n';

--NOT operator
--?select student who are not in canada
select first_name , country from students
where not country = 'Canada'

--?select all student whose not grade A
select first_name , grade , email , country from students
where not grade='A';

--scaler function
select upper(first_name)as  "FIRST Name" , first_name from students;
select lower(first_name)as  "FIRST Name" , first_name from students;
select concat(first_name , ' ' ,last_name)as  "Full Name" from students;


-- aggregate function
select avg(age) from students;
select max(age) from students;
select min(age) from students;
select sum(age) from students;
select count(*) from students;










```
