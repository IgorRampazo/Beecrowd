/* 
   * (🐺) Exercicio 1008 - Beecrowd - "Salário"
*/

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

// Função para calcular o salário
function salario()
{
   // Recebendo valores
   let n_fuc = parseInt(lines.shift());
   let n_hrs = parseInt(lines.shift());
   let n_vhr = parseFloat(lines.shift());

   // Calculando o salário
   let sal = n_hrs * n_vhr;

   // Exibe o resultado
   console.log(`NUMBER = ${n_fuc}`);
   console.log(`SALARY = U$ ${sal.toFixed(2)}`);
}

// Chama a função
salario();

// ————————————————————————————————————————————————————————————————————————————— //
// ----------------------------------------------------------------------------- //
// --------------------- Código escrito por [Igor Rampazo] --------------------- //
// ------------------- GitHub:https://github.com/IgorRampazo ------------------- //
// ----------------------------------------------------------------------------- //
// ————————————————————————————————————————————————————————————————————————————— //