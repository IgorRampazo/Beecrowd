/* 
   * @exercicio - beecrowd - 1000 - Hello World!
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
console.log('Hello World!');
