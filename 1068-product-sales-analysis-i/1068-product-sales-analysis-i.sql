# Write your MySQL query statement below

SELECT  Product.product_name ,Sales.year,Sales.price from Sales JOIN Product ON Sales.product_id=Product.product_id;
