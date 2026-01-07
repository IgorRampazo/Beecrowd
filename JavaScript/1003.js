/* 
   * (🐺) Exercicio 1003 - Beecrowd - "Soma Simples"
*/

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

// Função para calcular a soma
function somaSimples()
{
   // Recebendo valores
   let A = parseInt(lines.shift());
   let B = parseInt(lines.shift());

   // Calculando a soma
   let SOMA = A + B;

   // Exibe o resultado
   console.log(`SOMA = ${SOMA}`);
}

// Chama a função
somaSimples();

// ————————————————————————————————————————————————————————————————————————————— //
// ----------------------------------------------------------------------------- //
// --------------------- Código escrito por [Igor Rampazo] --------------------- //
// ------------------- GitHub:https://github.com/IgorRampazo ------------------- //
// ----------------------------------------------------------------------------- //
// ————————————————————————————————————————————————————————————————————————————— //