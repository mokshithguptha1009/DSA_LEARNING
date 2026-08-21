# Write your MySQL query statement below
select 
max(salary) as SecondHighestSalary from(select *,dense_rank() over(order by salary desc) as r from Employee )t where t.r=2;