/* 
   * (🐺) Exercicio 1010 - Beecrowd - "Cálculo Simples"
*/

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

// Função para calcular o total
function calculoSimples()
{
   // Recebendo valores
   let p1 = lines[0].trim();
   let ap1 = p1.split(' ');

   let npc_1 = ap1[1];
   let vup_1 = ap1[2];

    let p2 = lines[1].trim();
    let ap2 = p2.split(' ');

   let npc_2 = ap2[1];
   let vup_2 = ap2[2];

   // Calculando o total
   let total = (npc_1 * vup_1) + (npc_2 * vup_2);

   // Exibe o resultado
   console.log(`VALOR A PAGAR: R$ ${total.toFixed(2)}`);
}

// Chama a função
calculoSimples();

// ————————————————————————————————————————————————————————————————————————————— //
// ----------------------------------------------------------------------------- //
// --------------------- Código escrito por [Igor Rampazo] --------------------- //
// ------------------- GitHub:https://github.com/IgorRampazo ------------------- //
// ----------------------------------------------------------------------------- //
// ————————————————————————————————————————————————————————————————————————————— //