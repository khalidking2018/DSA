# Write your MySQL query statement below
-- select activity_day as day,
-- count (distinct user_id) as active_users

-- from activity
-- where activity_day between date_sub('2019-07-27' ,interval 29 day) and '2019-07-27'
-- group by activity_day
SELECT activity_date AS day,
       COUNT(DISTINCT user_id) AS active_users
FROM activity
WHERE activity_date BETWEEN DATE_SUB('2019-07-27', INTERVAL 29 DAY) 
                       AND '2019-07-27'
GROUP BY day;
