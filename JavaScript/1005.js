/* 
   * (🐺) Exercicio 1005 - Beecrowd - "Média 1"
*/

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

// Função para calcular a Média
function media()
{
   // Recebendo valores
   let A = parseFloat(lines.shift());
   let B = parseFloat(lines.shift());

   // Calculando a média
   let MED = ((A * 3.5) + (B * 7.5)) / 11;

   // Exibe o resultado
   console.log(`MEDIA = ${MED.toFixed(5)}`);
}

// Chama a função
media();

// ————————————————————————————————————————————————————————————————————————————— //
// ----------------------------------------------------------------------------- //
// --------------------- Código escrito por [Igor Rampazo] --------------------- //
// ------------------- GitHub:https://github.com/IgorRampazo ------------------- //
// ----------------------------------------------------------------------------- //
// ————————————————————————————————————————————————————————————————————————————— //