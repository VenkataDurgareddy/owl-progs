select Product.product_name,Sales.year,Sales.price
from Sales
INNER join Product ON Sales.product_id=Product.product_id;