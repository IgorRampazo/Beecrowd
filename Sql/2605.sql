/* 
   * (🐺) Exercicio 2605 - Beecrowd - "Representantes Executivos"
*/

-- Selecionando o nome do produto e fornecedor, onde esteja classificado como executivo
SELECT products.name, providers.name FROM products
INNER JOIN providers ON products.id_providers = providers.id
WHERE products.id_categories = 6;

/* ————————————————————————————————————————————————————————————————————————————— /*
/* ----------------------------------------------------------------------------- */
/* --------------------- Código escrito por [Igor Rampazo] --------------------- */
/* ------------------- GitHub:https://github.com/IgorRampazo ------------------- */
/* ----------------------------------------------------------------------------- */
/* ————————————————————————————————————————————————————————————————————————————— */