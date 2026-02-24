var Peso = Number(prompt("Qual é seu peso?"));
var Altura = Number(prompt("Qual é sua altura?"));

const IMC = Peso / (Altura ** 2);
console.log("Seu IMC é " + IMC);