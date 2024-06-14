/* 
   * @exercicio - beecrowd - 1002 - Área do Círculo
*/

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function areaCirculo()
{
   let n = 3.14159;

   let raio = parseFloat(lines.shift());
   let area = n * (raio ** 2);

   console.log(`A = ${area}`);
}

areaCirculo();