## what is sql

SQL (Structured Query Language) হলো একটি বিশেষ প্রোগ্রামিং ভাষা যা ডাটাবেসের সাথে কথা বলার জন্য ব্যবহার করা হয়।
এটি ব্যবহার করে তুমি ডাটাবেসে ডাটা সংরক্ষণ, খোঁজা, আপডেট করা, মুছা—সবকিছুই করতে পারো।
the language we use to comminicute with databases.
it discovered by IBM in the early 1970s.

🔹 SQL কেন ব্যবহার করা হয়?

SQL ব্যবহার করা হয়—

ডাটাবেস থেকে ডাটা বের করতে

ডাটাবেসে নতুন ডাটা ঢুকাতে

ডাটা আপডেট করতে

ডাটা ডিলেট করতে

নতুন টেবিল বা ডাটাবেস তৈরি করতে

টেবিলের স্ট্রাকচার পরিবর্তন করতে

🔹 SQL কে ব্যবহার করে?

যে কোনো ডাটাবেস সিস্টেম যা RDBMS (Relational Database Management System) — যেমন

MySQL

PostgreSQL

Oracle

SQL Server

এসব সবই SQL ব্যবহার করে।

🔹 SQL এর প্রধান কমান্ড ৩ ভাগে ভাগ করা হয়:
1️⃣ DDL (Data Definition Language)

→ ডাটাবেস বা টেবিলের স্ট্রাকচার ব্যবস্থাপনা করার জন্য
উদাহরণ:

CREATE

ALTER

DROP

TRUNCATE

2️⃣ DML (Data Manipulation Language)

→ ডাটার ওপর কাজ করার জন্য

INSERT

UPDATE

DELETE

3️⃣ DQL (Data Query Language)

→ ডাটা খোঁজার জন্য

SELECT

3️⃣ DQL (Data Query Language)

🔹 SQL কেন গুরুত্বপূর্ণ?

ডাটাবেসে কাজ করতে হলে SQL অবশ্যই জানতে হবে

ওয়েব ডেভেলপার, সফটওয়্যার ইঞ্জিনিয়ার, ডাটা অ্যানালিস্ট—সবার জন্য প্রয়োজন

সব বড় কোম্পানিতে SQL ব্যবহৃত হয়

ইন্টারভিউতেই SQL প্রশ্ন প্রায়ই আসে

## ⭐ SQL কেন Declarative?

SQL Declarative কারণ তুমি শুধু বলো ডাটা কেমন চাই
কিন্তু কিভাবে খুঁজে আনবে সেটা SQL Engine নিজে ঠিক করে।

## why need data type in sql

ডাটা টাইপ কেন দরকার? (Bangla তে পরিষ্কার ব্যাখ্যা)

ডাটাবেস, প্রোগ্রামিং—সব জায়গায় Data Type খুব গুরুত্বপূর্ণ কারণ এটি বলে দেয় ডাটার ধরন, কীভাবে সংরক্ষণ হবে, এবং কীভাবে আচরণ করবে।

✅ 2. মেমরি ঠিকমত বরাদ্দ করতে

PostgreSQL বা অন্য ডাটাবেস ডাটা টাইপ দেখে ঠিক করে কত জায়গা মেমরি বা স্টোরেজ লাগবে।

উদাহরণ:

SMALLINT → 2 bytes

INTEGER → 4 bytes

BIGINT → 8 bytes

এই কারণে স্টোরেজ efficient হয়।

✅ 3. ভুল ডাটা ঢুকতে দেয় না (Data Validation)

ডাটা টাইপ ভুল ডাটা আটকায়।

উদাহরণ:
age INT করলে

তুমি নাম লিখতে পারবে না

"abc" ঢুকবে না

কেবল সংখ্যা ঢুকবে

ডাটা সঠিক থাকে → Data Integrity বজায় থাকে।

✅ 4. সঠিকভাবে অপারেশন করতে সাহায্য করে

যদি ডাটা টাইপ ভুল দাও, অপারেশন কাজ করবে না।

উদাহরণ:
10 + 20 কাজ করবে (Number type)
"10" + "20" → String হলে concatenate হবে
DATE1 - DATE2 → শুধু date টাইপে কাজ করে

ডাটা টাইপ ঠিক থাকলে অপারেশন সঠিক ভাবে কাজ করে।

✅ 5. Query Performance বাড়ায়

সঠিক ডাটা টাইপ দিলে:

Index ভালো কাজ করে

Search দ্রুত হয়

Sorting/Filtering দ্রুত হয়

Query performance improve হয়

✅ 6. স্টোরেজ সাশ্রয়

ছোট টাইপ ব্যবহার করলে স্টোরেজ কম লাগে।

উদাহরণ:
age = 0 থেকে 120 → SMALLINT যথেষ্ট
কিন্তু তুমি যদি BIGINT দাও → স্টোরেজ নষ্ট

## database , table create and delete command in sql

```sql

-- create database
create database school

  -- create tabgle

create table students(
  id serial ,
  name varchar(50),
  age int,
  isActive boolean,
  dob date


);

-- delete table
drop table students

-- good way for delete
drop table if exists students
```

### database constraints

Database constraints are rules that the database uses to protect data accuracy, validity, and consistency.

👉 সহজ কথায়:
Constraint = database-এর security guard 🚨
যে ভুল data ঢুকতে দেয় না।

🔑 Why do we need database constraints?

Without constraints:

Duplicate data ঢুকতে পারে

Invalid values store হতে পারে

Relationship ভেঙে যেতে পারে (foreign key problem)

With constraints:
✔️ Data correct থাকে
✔️ Data consistent থাকে
✔️ Database reliable হয়

📌 Types of Database Constraints (Most Important)
1️⃣ NOT NULL

❌ NULL value allow করে না

```sql
name VARCHAR(50) NOT NULL
```

2️⃣ UNIQUE

❌ Duplicate value allow করে না

```sql
email VARCHAR(100) UNIQUE
➡️ একই email দুইবার ঢুকবে না
```

3️⃣ PRIMARY KEY

✔️ Row uniquely identify করে
✔️ NOT NULL + UNIQUE দুটোই

```sql
id SERIAL PRIMARY KEY
```

4️⃣ FOREIGN KEY

✔️ Table-to-table relationship maintain করে

```sql
course_id INT,
FOREIGN KEY (course_id) REFERENCES courses(id)
```

5️⃣ CHECK

✔️ Condition enforce করে

```sql
age INT CHECK (age >= 0)
➡️ 0 এর কম age ঢুকবে না
```

6️⃣ DEFAULT

✔️ Value না দিলে default বসে

```sql
isActive BOOLEAN DEFAULT TRUE
➡️ value না দিলে TRUE হবে
```

```sql
CREATE TABLE users (
    id SERIAL PRIMARY KEY,
    name VARCHAR(50) NOT NULL,
    email VARCHAR(100) UNIQUE,
    age INT CHECK (age >= 18),
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);
```

## insert in database

there are several common way to insert data into a database i am showing it below :

✅ 1️⃣ INSERT with column names (Most common & recommended)

```sql
INSERT INTO students (name, age, isActive, dob)
VALUES ('Alice', 20, TRUE, '2003-05-15');

✔️ Safe
✔️ Readable
✔️ Order doesn’t matter
```

✅ 2️⃣ INSERT without column names (Not recommended)

```sql
INSERT INTO students
VALUES (1, 'Bob', 22, FALSE, '2001-08-20');
❌ Column order must match table
❌ Breaks if schema changes
```

✅ 3️⃣ INSERT multiple rows

```sql
INSERT INTO students (name, age, isActive, dob)
VALUES
  ('Charlie', 19, TRUE, '2004-02-10'),
  ('Diana', 21, FALSE, '2002-11-25'),
  ('Ethan', 23, TRUE, '2000-07-30');

✔️ Faster
✔️ Used in bulk insert
```

✅ 4️⃣ INSERT with SELECT (Insert from another table)

```sql
INSERT INTO alumni (name, age, isActive, dob)
SELECT name, age, isActive, dob from students
✔️ Data migration
✔️ Backup purpose
```

✅ 5️⃣ INSERT with DEFAULT values

```sql
INSERT INTO students (name, age)
VALUES ('Fiona', 18);
```

✅ 6️⃣ INSERT with RETURNING (PostgreSQL only)

```sql
INSERT INTO users (name, email)
VALUES ('Asad', 'asad@gmail.com')
RETURNING id;
✔️ Instantly get inserted ID
✔️ Very useful in backend
```

✅ 7️⃣ INSERT with ON CONFLICT / IGNORE (Avoid duplicate error)

```sql
INSERT INTO users (email, name)
VALUES ('adfsdsdf')
ON CONFLICT (email) DO NOTHING;
```

slide link:
https://drive.google.com/file/d/1zPLUb2mSC4w2cT7YIV8jGYi5RWK__-q-/view
