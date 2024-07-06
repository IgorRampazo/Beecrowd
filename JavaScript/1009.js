/* 
   * (🐺) Exercicio 1009 - Beecrowd - "Salário com Bônus"
*/

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

// Função para calcular o salário com Bônus
function salarioBonus()
{
   // Recebendo valores
   let name = lines.shift();
   let sal_fx = parseFloat(lines.shift());
   let ttl_vv = parseFloat(lines.shift());

   // Calculando o salário com Bônus
   let sal_b = sal_fx + (ttl_vv * 0.15);

   // Exibe o resultado
   console.log(`TOTAL = R$ ${sal_b.toFixed(2)}`);
}

// Chama a função
salarioBonus();

// ————————————————————————————————————————————————————————————————————————————— //
// ----------------------------------------------------------------------------- //
// --------------------- Código escrito por [Igor Rampazo] --------------------- //
// ------------------- GitHub:https://github.com/IgorRampazo ------------------- //
// ----------------------------------------------------------------------------- //
// ————————————————————————————————————————————————————————————————————————————— //