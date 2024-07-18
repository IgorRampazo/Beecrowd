SELECT products.id, products.name FROM products 
INNER JOIN categories ON products.id_category = categories.id
WHERE 