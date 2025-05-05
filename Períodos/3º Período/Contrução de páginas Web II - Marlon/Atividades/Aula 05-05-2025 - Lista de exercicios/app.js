let numeros = [];

for (let i = 0; i < 50; i++) {
    numeros.push(Math.floor(Math.random() * 101));
}

let maior = Math.max(...numeros);

console.log("Array:", numeros);
console.log("Maior número:", maior);
alert("O maior número é: " + maior);

let menor = Math.min(...numeros);

console.log("Array:", numeros);
console.log("Menor número:", menor);
alert("O menor número é: " + menor);

let soma = 0;
for (let i = 0; i < numeros.length; i++) {
  soma += numeros[i];
}

let media = soma / numeros.length;

console.log("Array:", numeros);
console.log("Média dos elementos:", media);
alert("A média dos elementos é: " + media.toFixed(2));

let contagem = {};

for (let num of numeros) {
  contagem[num] = (contagem[num] || 0) + 1;
}

let frequencias = Object.entries(contagem); 
frequencias.sort((a, b) => b[1] - a[1]); 

let top3 = frequencias.slice(0, 3);

console.log("Array:", numeros);
console.log("Top 3 números que mais se repetiram:");
top3.forEach(([numero, vezes], index) => {
  console.log(`${index + 1}. Número ${numero} apareceu ${vezes} vezes`);
});

alert(
  `Top 3 mais frequentes:\n` +
  top3.map(([numero, vezes], i) => `${i + 1}) ${numero} (${vezes}x)`).join('\n')
);

let contagem2 = {};

for (let num of numeros) {
    contagem2[num] = (contagem[num] || 0) + 1;
  }
  
  // 3. Mostrar resultados
  console.log("Array:", numeros);
  console.log("Frequência dos números:");
  
  for (let numero in contagem) {
    console.log(`Número ${numero} apareceu ${contagem[numero]} vez(es)`);
  }