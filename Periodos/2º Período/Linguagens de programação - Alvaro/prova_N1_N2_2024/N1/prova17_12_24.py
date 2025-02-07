'''
Código feito por Vinícius Barros
no dia 17/12/2024
'''

# 1 - Escreva um programa que solicita a idade de uma pessoa e exibe a sua faixa etária
print("Olá! Seja bem vindo(a)!")
idade = int(input("Para começar, informe sua idade: "))

if idade < 12:
    print("Você é uma Criança!")

elif idade >= 12 and idade <= 17:
    print("Você é um Adolescente!")

elif idade >= 18 and idade <= 59:
    print("Você é um Adulto!")

else:
    print("Você é um Idoso!")

# 2 - Crie um programa que recebe uma palavra do usuário e exibe cada letra da palavra em uma linha separada.
print("Seja bem vindo(a) Vamos soletrar!")
palavra = input("Insira uma palavra qualquer: ")

for i in palavra:
    print(i)

# 3 - Escreva um programa que solicita o peso (em kg) e altura (em metros) de uma pessoa e calcula seu IMC.
print("Seja bem vindo(a) Vamos calcular seu IMC!")
peso = float(input("Quanto você pesa? "))
altura = float(input("Qual é sua altura? "))
IMC = peso / altura ** 2
print(f"{IMC:.2f}")

# 4 - Crie um programa que solicita ao usuário 10 números inteiro e exibe: 1. A quantidade de números positivos / 2. A quantidade de números negativos.
print("Seja bem vindo(a)")
numeros_positivos = []
numeros_negativos = []
for i in range(1, 11):
    num = int(input(f"Insira o {i}º número: "))

    if (num > 0):
        numeros_positivos.append(num)

    else:
        numeros_negativos.append(num)

print(f"Numeros positivos: {len(numeros_positivos)}")
print(f"Numeros negativos: {len(numeros_negativos)}")

#5 - Crie um programa que solicita 4 notas de um aluno, calcula a média e informa se ele está aprovado ou reprovado. (A média é 7.0)
print("Seja bem vindo(a) Vamos calcular sua média!")
nota1 = float(input("Insira sua primeira nota: "))
nota2 = float(input("Insira sua segunda nota: "))
nota3 = float(input("Insira sua terceira nota: "))
nota4 = float(input("Insira sua quarta nota: "))

media = (nota1 + nota2 + nota3 + nota4) / 4

if media < 7:
    print(f"Sua média é {media} você está reprovado!")
else:
    print(f"Sua média é {media} você está aprovado!")