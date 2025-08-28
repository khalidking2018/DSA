# Write your MySQL query statement below
select c.id,c.movie,c.description,c.rating
from cinema as c
where (id%2 != 0) AND description != "boring"
order by rating desc;