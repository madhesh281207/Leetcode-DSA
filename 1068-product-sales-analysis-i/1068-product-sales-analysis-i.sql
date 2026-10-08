# Write your MySQL query statement below
SELECT 
    CASE 
        WHEN s.product_id = p.product_id THEN p.product_name
        ELSE 'Unknown'
    END AS product_name,
    s.year,
    s.price
FROM 
    Sales s
LEFT JOIN 
    Product p ON s.product_id = p.product_id;