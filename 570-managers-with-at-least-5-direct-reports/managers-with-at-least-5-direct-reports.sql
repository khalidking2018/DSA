# Write your MySQL query statement below
select e.name
from Employee as e
join Employee as b
On e.id=b.managerId
Group by b.managerId 
having count(b.managerId )>=5