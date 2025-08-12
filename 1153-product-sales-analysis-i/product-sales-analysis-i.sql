# Write your MySQL query statement below
-- select product_name,sal.year,sal.price
-- from sales sal
-- join product p
-- on p.product_id=sal.product_id

select p.product_name,year,price
from product p
join Sales sal
on p.product_id=sal.product_id