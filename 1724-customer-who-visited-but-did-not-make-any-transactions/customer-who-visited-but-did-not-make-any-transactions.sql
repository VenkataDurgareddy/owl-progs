# Write your MySQL query statement below
select customer_id,COUNT(*) as count_no_trans
from Visits
where visit_id NOT IN(select visit_id from Transactions)
GROUP BY customer_id;