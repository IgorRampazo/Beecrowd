/* 
   * (🐺) Exercicio 1002 - Beecrowd - "Área do Círculo"
*/

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

// Função para calcular a área do círculo
function areaCirculo()
{
   let n = 3.14159;
   // Recebendo valores
   let raio = parseFloat(lines.shift());
   let area = n * (raio ** 2);

   // Exibe o resultado
   console.log(`A = ${area}`);
}

// Chama a função
areaCirculo();

// ————————————————————————————————————————————————————————————————————————————— //
// ----------------------------------------------------------------------------- //
// --------------------- Código escrito por [Igor Rampazo] --------------------- //
// ------------------- GitHub:https://github.com/IgorRampazo ------------------- //
// ----------------------------------------------------------------------------- //
// ————————————————————————————————————————————————————————————————————————————— //