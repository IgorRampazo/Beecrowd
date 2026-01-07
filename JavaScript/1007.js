/* 
   * (🐺) Exercicio 1007 - Beecrowd - "Diferença"
*/

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

// Função para calcular a diferença
function diferenca()
{
   // Recebendo valores
   let A = parseInt(lines.shift());
   let B = parseInt(lines.shift());
   let C = parseInt(lines.shift());
   let D = parseInt(lines.shift());

   // Calculando a diferença
   let DIF = (A * B) - (C * D);

   // Exibe o resultado
   console.log(`DIFERENCA = ${DIF}`);
}

// Chama a função
diferenca();

// ————————————————————————————————————————————————————————————————————————————— //
// ----------------------------------------------------------------------------- //
// --------------------- Código escrito por [Igor Rampazo] --------------------- //
// ------------------- GitHub:https://github.com/IgorRampazo ------------------- //
// ----------------------------------------------------------------------------- //
// ————————————————————————————————————————————————————————————————————————————— //