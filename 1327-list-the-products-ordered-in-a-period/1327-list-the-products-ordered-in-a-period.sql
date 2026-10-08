# Write your MySQL query statement below
with cte1 as (select product_id,sum(unit) as total from orders where order_date like '2020-02%' group by product_id)
select p.product_name,c.total as unit from products p join cte1 c on p.product_id=c.product_id where c.total>=100;