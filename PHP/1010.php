<?php

/* 
   * (🐺) Exercicio 1010 - Beecrowd - "Cálculo Simples"
*/

# Recebendo valores
$p1 = trim(fgets(STDIN));
$ap1 = explode(' ', $p1);

$cod_1 = $ap1[0];
$npc_1 = $ap1[1];
$vup_1 = $ap1[2];

$p2 = trim(fgets(STDIN));
$ap2 = explode(' ', $p2);

$cod_2 = $ap2[0];
$npc_2 = $ap2[1];
$vup_2 = $ap2[2];

# Cálculo
$total = ($npc_1 * $vup_1) + ($npc_2 * $vup_2);

# Imprimindo argumento
printf("VALOR A PAGAR: R$ %.2f\n", $total);

# ————————————————————————————————————————————————————————————————————————————— #
#                                                                               #
# --------------------- Código escrito por [Igor Rampazo] --------------------- #
# ------------------- GitHub:https://github.com/IgorRampazo ------------------- #
#                                                                               #
# ————————————————————————————————————————————————————————————————————————————— #

?>