# Write your MySQL query statement below

select Employee.name , Bonus.bonus from Employee LEFT JOIN Bonus on Employee.empid=Bonus.empid where bonus<1000 OR bonus is NULL;