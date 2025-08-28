# Write your MySQL query statement below
-- select s.user_id,
-- round(avg(if(c.action="confirmed",1,0)),2) as confirmation_rate
-- from Signups as s
-- left join Confirmations as c 
-- On s.user_id=c.user_id
-- group by s.user_id

SELECT s.user_id,
       ROUND(
           IFNULL(SUM(c.action = 'confirmed') / NULLIF(COUNT(c.action), 0), 0),
           2
       ) AS confirmation_rate
FROM Signups AS s
LEFT JOIN Confirmations AS c 
       ON s.user_id = c.user_id
GROUP BY s.user_id;

