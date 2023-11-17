select * from emp where gender="女" and age in(20,21,22,23);
select * from emp where gender="男" and age ( between 20 and 40 )and name like "___";
select gender,count(*) from emp where age<60 group by gender;
select name,age from emp where age<=35 order by age,entrydate desc;
select * from emp where gender="男" and (age between 20 and 40 ) order by age,entrydate limit 5;
-- dql语句执行顺序
-- from where group by having select order by limit 