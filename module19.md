```sql
INSERT INTO students
(first_name, last_name, age, grade, course, email, dob, blood_group, country)
VALUES
('Rahul', 'Verma', 22, 'A', 'CSE', NULL, '2002-02-12', 'O+', 'India'),
('Sara', 'Ali', 21, 'B', 'BBA', NULL, '2003-05-19', 'A+', 'Pakistan'),
('Mohammed', 'Saleh', 23, 'A', 'EEE', NULL, '2001-08-07', 'B+', 'UAE'),
('Linda', 'Johnson', 20, 'A', 'Psychology', NULL, '2004-11-23', 'AB+', 'USA'),
('Carlos', 'Mendez', 24, 'C', 'Civil', NULL, '2000-03-15', 'O-', 'Mexico'),
('Yuki', 'Sato', 21, 'A', 'Physics', NULL, '2003-09-01', 'A-', 'Japan'),
('Anna', 'Petrova', 22, 'B', 'Economics', NULL, '2002-06-28', 'B-', 'Russia'),
('David', 'Kim', 23, 'A', 'Statistics', NULL, '2001-12-10', 'O+', 'South Korea');

select * from students where email is not  null;

select first_name , last_name , age ,coalesce(email , 'Not Provided') as email  from students;


--pagination

  --limit and offset
select *from students limit 5;

select * from students where country in('UK' , 'USA' ) limit 5;



select * from students where country in('UK' , 'USA' ) limit 5 offset 5*1;
--we can implemant pagination by limit and offset
select * from students where country in('UK' , 'USA' ) limit 5 offset 5*1; -- start from 0, 1 , 2 ,3 ....


--updating data in table
select * from students
update students set email  = 'default@gmail.com' where email is null;
update students set first_name='Alamin' , age=23 , email='alamin@gmail.com' where student_id=1;
update students set grade='A+' where student_id in(1 , 2);


--deleting data from table
delete from students where grade='C'
select first_name , grade from students;


-- group by
select country  ,avg(age)  from students
  group by country

--count student by country
select country , count(*) from students group by country;
select *from students;

--count student by grade
select grade , count(*) from students group by grade;

--groupb + having
--?courses more than and equal 4  student
select course , count(*) from students
group by course
having count(*)>=4

--?countries where average students age is greater thean 21
select country , avg(age) from students
group by country
having avg(age)>21

--foreign key
create table usere(
  id serial primary key,
  username varchar(25) not null
);
create table post(
  id serial primary key,
  title text not null,
  user_id int  references usere(id) --foreign key

)
insert into usere (username) values('akash'),('batash'), ('sagor'), ('nodi')

insert into post(title , user_id)
values
('Enjoying a sunny day with akash ☀️🌞' , 2),
('Batsah just sharedan amzaing recipe 📜🍳🥘' , 1),
('Explorinadvanture with sagor 🧭🏕️🚀' , 4),
('Nodiiiiiiiiiii 💡✨🔥' , 4)

  insert into post(title)
values
('Enjoying a sunny day with akash ☀️🌞' )




--joning
  select title , username  from post -- it will provide error in light of the fact that uername dose not exist in my table



  --now i would like to solve this error by joining
  select post.id , title , username  from post --post.id in light of the fact that after joining i have two id for this reason i required to use post.id or usere.id

   join usere on post.user_id = usere.id --join/inner join

  --left join

  select *  from post

  left join usere on post.user_id = usere.id

  --right join
  select *  from post

  right join usere on post.user_id = usere.id
  --full join

  select *  from post

  full join usere on post.user_id = usere.id






--cross->it craft a table with cross product
  create table employees(
  emp_id int,
  emp_name varchar(50),
  dept_id int
  );

create table departments(

  dept_id int,
  dept_name varchar(50)
)

  insert into employees values(1 , 'Alice' , 101);
  insert into employees values(2 , 'Bob' , 102);


insert into departments values(101 , 'Human resource');
insert into departments values(102 , 'Marketing');




--natural joining->craft a new table based on diffrent table common column name
select *from employees
natural join departments







select * from post;
select * from employee;

```
