```sql
create table employe(
  id serial,
  name varchar(100),
  age int

);
--renaming table
alter table employe rename to employee


-- add column
alter table employee add column email varchar(50);

--drop column
alter table employee drop column email;

--renaming column name
alter table employee rename column name to user_name

-- modyfing constraint
alter table employee alter column user_name type varchar(50);
-- add constraint
alter table employee alter column email set not null

--drop constraint
alter table employee alter column email drop not null;


---set default value
insert into employee (user_name ,  age , email) values('jamal' , 26 , 'jamal@gmail.com');
alter table employee alter column email set  default 'test@gmail.com';

--remove default
alter table employee alter column email drop default;


-- add table level constraint
alter table employee add constraint unique_employee_email unique(email);
alter table employee add constraint pk_employee_id primary key(id);

--remove table level constraint
alter table employee drop constraint unique_employee_email;







```
