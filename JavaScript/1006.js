/* 
   * (🐺) Exercicio 1006 - Beecrowd - "Média 2"
*/

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

// Função para calcular a Média
function media()
{
   // Recebendo valores
   let A = parseFloat(lines.shift());
   let B = parseFloat(lines.shift());
   let C = parseFloat(lines.shift());

   // Calculando a média
   let MED = ((A * 2) + (B * 3) + (C * 5)) / 10;

   // Exibe o resultado
   console.log(`MEDIA = ${MED.toFixed(1)}`);
}

// Chama a função
media();

// ————————————————————————————————————————————————————————————————————————————— //
// ----------------------------------------------------------------------------- //
// --------------------- Código escrito por [Igor Rampazo] --------------------- //
// ------------------- GitHub:https://github.com/IgorRampazo ------------------- //
// ----------------------------------------------------------------------------- //
// ————————————————————————————————————————————————————————————————————————————— //