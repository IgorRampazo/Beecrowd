<?php

/* 
   * (🐺) Exercicio 1009 - Beecrowd - "Sálario com Bônus"
*/

# Recebendo valores
$name = trim(fgets(STDIN));
$salary = trim(fgets(STDIN));
$v_vendas = trim(fgets(STDIN));

# Cálculo do Sálario
$sal = $salary + ($v_vendas * 0.15);

# Imprimindo argumento
printf("TOTAL = R$ %.2f\n", $sal);

# ————————————————————————————————————————————————————————————————————————————— #
#                                                                               #
# --------------------- Código escrito por [Igor Rampazo] --------------------- #
# ------------------- GitHub:https://github.com/IgorRampazo ------------------- #
#                                                                               #
# ————————————————————————————————————————————————————————————————————————————— #

?>