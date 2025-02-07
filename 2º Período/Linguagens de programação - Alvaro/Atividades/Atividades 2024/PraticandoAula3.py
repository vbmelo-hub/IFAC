'''
Código feito por Vinícius Barros
No dia 21/11/2024
'''

print('===================================Questão 1===================================')
for i in range(1,11): #vai de 1 até 10
    print(f'Número {i}')
print('======================================FIM======================================')

print('===================================Questão 2===================================')
# Pedir ao usuário o número da tabuada
tabuada = int(input('Deseja a tabuada de qual numero?'))
print(f"Tabuada do {tabuada}:")
for i in range(1, 11):  # Laço de 1 até 10
    print(f"{tabuada} x {i} = {tabuada * i}")
print('======================================FIM======================================')

print('===================================Questão 3===================================')
# receber e somar
soma = 0
for i in range(1,6):
    numero = int(input(f'forneça o {i}º numero:'))
    soma += numero
print(f'A soma de todos os numeros é {soma}')
print('======================================FIM======================================')

print('===================================Questão 4===================================')
# Contagem regressiva
contador = 10
while contador > 0:
    print(f'Contagem: {contador}')
    contador -= 1
print('Fogo!')
print('======================================FIM======================================')

print('===================================Questão 5===================================')
#while - Entrada com senha 
senha = ''
while senha != '1234':
    senha = input('Digite sua senha: ')
print('Acesso liberado')
print('======================================FIM======================================')

print('===================================Questão 5===================================')
#while - Numeros de 1 a 20 que são impares
for i in range(1,21):
    if i % 2 != 0:
        print(i)
print('======================================FIM======================================')