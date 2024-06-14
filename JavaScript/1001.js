/* 
   * @exercicio - beecrowd - 1001 - Extremamente Básico 
*/

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function somar()
{

   let A = parseInt(lines.shift());
   let B = parseInt(lines.shift());
   let X = A + B;

   console.log(`X = ${X}`);
}

somar();