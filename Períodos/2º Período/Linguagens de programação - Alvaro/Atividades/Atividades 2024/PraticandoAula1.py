#Exercicio 1 Boas vindas
nome = input('Insira seu nome: ')
idade = int (input('Insira sua idade: '))
print("Seja bem vindo,", nome,"! Voce tem...", idade, "Anos!")

#Exercicio 2 Soma, multiplicação e divisão
print("Insira dois numeros para fazer a adição, multiplicação e divisão dos mesmos")
numero1 = float (input('Primeiro: '))
numero2 = float (input('Segundo: '))
resultado = numero1 + numero2, numero1 * numero2, numero1 / numero2
print(resultado)

#Exercicio 3 Dobro e quadrado
print("Vamos calcucular o dobro e quadrado de um numero qualquer!")
numero3 = float (input('Insira o número: '))
resultado2 = numero3 * 2, numero3 * numero3
print(resultado2)

#Exercicio 4 Graus para Fahrenheit
celcius = float (input("Bem vindo ao conversor celcius! Insira a temperatura em celcius para converter em Fahrenheit:"))
farenheit = celcius * 1.8 + 32
print("A temperatura celcius", celcius, "Fica:", farenheit, "em Farenheit")

#exercicio 5 Calcular média de notas
aluno = input("Insira seu usuário:")
print("Seja Bem-vindo!", aluno, "Insira suas notas para que possa calcular a sua média:")
nota1 = float (input("Primeira nota:"))
nota2 = float (input("Segunda nota:"))
nota3 = float (input("Terceira nota:"))
resultadoNota = (nota1 + nota2 + nota3) / 3
print("Sua média é:",round(resultadoNota,2))

#exercicio 6 Conversor de metros para cm e mm
print("Vamos converter metros para centimetros e milimetros!")
metros = float (input('Insira o valor em metros:'))
centimetros = metros * 100
milimetros = metros * 1000
print("Centimetros:",centimetros, "\nMilimetros:", milimetros)

#exercicio 7 Calcular perimetro e area de um retangulo
print("Vamos calcular o perimetro e area de um retangulo qualquer!")
altura = float(input('Insira a altura do retângulo:'))
largura = float(input('Insira a largura do retângulo:'))
perimetro = 2 * (largura + altura)
area = largura * altura
print("O perimetro do seu retângulo é", perimetro, "\nA area do seu retângulo é", area)

#Exercicio 8 Market Simulator 
print("Vamos simular uma compra!")
produto = float(input('Qual é o valor do seu produto?'))
valorPagocliente = float(input('Quanto o cliente pagou?'))
troco = valorPagocliente - produto
print(troco)

#Exercicio 9 Conversosr de Reais para dolares
print("Vamos converter Reais para Dólares!")
reais = float (input('Quantos reais você deseja converter?'))
conversao = reais * 6
print('O valor de', reais, "em dólar é igual a:", conversao)  