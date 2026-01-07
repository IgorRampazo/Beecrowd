<?php

/* 
   * (🐺) Exercicio 1008 - Beecrowd - "Sálario"
*/

# Recebendo valores
$n_fuc = trim(fgets(STDIN));
$n_hrs = trim(fgets(STDIN));
$n_vhr = trim(fgets(STDIN));

# Cálculo do Sálario
$sal = $n_hrs * $n_vhr;

# Imprimindo argumento
printf("NUMBER = %d\n", $n_fuc);
printf("SALARY = U$ %.2f\n", $sal);

# ————————————————————————————————————————————————————————————————————————————— #
#                                                                               #
# --------------------- Código escrito por [Igor Rampazo] --------------------- #
# ------------------- GitHub:https://github.com/IgorRampazo ------------------- #
#                                                                               #
# ————————————————————————————————————————————————————————————————————————————— #

?>