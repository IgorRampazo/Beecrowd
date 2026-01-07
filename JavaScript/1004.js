/* 
   * (🐺) Exercicio 1004 - Beecrowd - "Produto Simples"
*/

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

// Função para calcular o produto simples
function produtoSimples()
{
   // Recebendo valores
   let A = parseInt(lines.shift());
   let B = parseInt(lines.shift());

   // Calculando o produto
   let PROD = A * B;

   // Exibe o resultado
   console.log(`PROD = ${PROD}`);
}

// Chama a função
produtoSimples();

// ————————————————————————————————————————————————————————————————————————————— //
// ----------------------------------------------------------------------------- //
// --------------------- Código escrito por [Igor Rampazo] --------------------- //
// ------------------- GitHub:https://github.com/IgorRampazo ------------------- //
// ----------------------------------------------------------------------------- //
// ————————————————————————————————————————————————————————————————————————————— //