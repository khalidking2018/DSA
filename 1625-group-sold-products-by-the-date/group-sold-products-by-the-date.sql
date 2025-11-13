# Write your MySQL query statement below
select distinct sell_date ,
count(distinct product) as num_sold,
GROUP_CONCAT( DISTINCT product order by product ASC separator ',' ) as products 
from Activities 
group by sell_date 