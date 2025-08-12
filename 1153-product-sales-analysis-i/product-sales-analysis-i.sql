# Write your MySQL query statement below
select product_name,sal.year,sal.price
from sales sal
join product p
on p.product_id=sal.product_id