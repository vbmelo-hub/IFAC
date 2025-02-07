'''
Código feito por Vinícius Barros
no dia 19/11/2024
'''

import datetime
import random

print('===================================Questão 1===================================')
agora = datetime.datetime.now()

if agora.hour > 18:
    print('Seja bem vindo e Boa noite! \nSou um programa que pede dois números e imprime o maior! \nEntão por favor insira seus números:')
elif agora.hour >= 12 and agora.hour < 18:
    print('Seja bem vindo e Boa tarde! \nSou um programa que pede dois números e imprime o maior! \nEntão por favor insira seus números:')
else:
    print('Seja bem vindo e Bom dia! \nSou um programa que pede dois números e imprime o maior! \nEntão por favor insira seus números:')

numero1 = int(input('Insira o primeiro numero:'))
numero2 = int(input('Insira o segundo numero:'))

if numero1 > numero2:
    print(f'O {numero1} é maior que {numero2}')
elif numero2 > numero1:
    print(f'O {numero2} é maior que {numero1}')
else:
    print(f'O numero {numero1} e numero {numero2} são equivalentes!')
print('======================================FIM======================================')

print('===================================Questão 2===================================')
agora = datetime.datetime.now()

if agora.hour > 18:
    print('Seja bem vindo e Boa noite! \nSou um progragram que pede um valor e mostra se é positivo ou negativo! \nEntão por favor informe o valor:')
elif agora.hour >= 12 and agora.hour < 18:
    print('Seja bem vindo e Boa tarde! \nSou um progragram que pede um valor e mostra se é positivo ou negativo! \nEntão por favor informe o valor:')
else:
    print('Seja bem vindo e Bom dia! \nSou um programa que pede um valor e mostra se é positivo ou negavtivo! \nEntão por favor infome o valor:')

valor = float(input('Insira aqui o valor:'))

if valor > 0:
    print('Esse valor é positivo!')
else:
    print('Esse valor é negativo')
print('======================================FIM======================================')

print('===================================Questão 3===================================')
agora = datetime.datetime.now()

if agora.hour > 18:
    print('Seja bem vindo e Boa noite! \nSou um programa que diz se a letra digitada é vogal ou consoante.')
elif agora.hour >= 12 and agora.hour < 18:
    print('Seja bem vindo e Boa tarde! \nSou um programa que diz se a letra digitada é vogal ou consoante.')
else:
    print('Seja bem vindo e Bom dia! \nSou um programa que diz se a letra digitada é vogal ou consoante.')

letra = input('Insira aqui a letra:')

if letra == 'a' or letra == 'e' or letra == 'i' or letra == 'o' or letra == 'u':
    print('É uma vogal!')
elif letra.isalpha() and len(letra) == 1:
    print('É uma consoante')
else:
    print('inválido')
print('======================================FIM======================================')

print('===================================Questão 4===================================')
agora = datetime.datetime.now()

if agora.hour > 18:
    print('Seja bem vindo e Boa noite! \nSou um programa que diz se você é maior ou menor de idade.')
elif agora.hour >= 12 and agora.hour < 18:
    print('Seja bem vindo e Boa tarde! \nSou um programa que diz se você é maior ou menor de idade.')
else:
    print('Seja bem vindo e Bom dia! \nSou um programa que diz se você é maior ou menor de idade.')

idade = int(input('Insira sua idade:'))

if idade < 18:
    print('Você é menor de idade')
elif idade >= 60:
    print('Você é um idoso')
else:
    print('Você é maior de idade')
print('======================================FIM======================================')

print('===================================Questão 5===================================')
agora = datetime.datetime.now()

if agora.hour > 18:
    print('Seja bem vindo e Boa noite! \nSou um programa que diz se um numero é par ou impar.')
elif agora.hour >= 12 and agora.hour < 18:
    print('Seja bem vindo e Boa tarde! \nSou um programa que diz se um numero é par ou impar.')
else:
    print('Seja bem vindo e Bom dia! \nSou um programa que diz se um numero é par ou impar.')

imparPar = int(input('Insira aqui o número:'))

if imparPar % 2 == 0:
    print('É um numero par!')
else:
    print('É um numero impar')
print('======================================FIM======================================')

print('===================================Questão 6===================================')
agora = datetime.datetime.now()

if agora.hour > 18:
    print('Seja bem vindo e Boa noite!')
elif agora.hour >= 12 and agora.hour < 18:
    print('Seja bem vindo e Boa tarde!')
else:
    print('Seja bem vindo e Bom dia!')
print('======================================FIM======================================')

print('===================================Questão 7===================================')
agora = datetime.datetime.now()

if agora.hour > 18:
    print('Seja bem vindo e Boa noite! \nSou um programa que pede um numero aleatorio e diz se voce está correto ou errado!')
elif agora.hour >= 12 and agora.hour < 18:
    print('Seja bem vindo e Boa tarde! \nSou um programa que pede um numero aleatorio e diz se voce está correto ou errado!')
else:
    print('Seja bem vindo e Bom dia! \nSou um programa que pede um numero aleatorio e diz se voce está correto ou errado!')

numeroAleatorio = random.randint(0, 10)
numero = int(input('digite um numero entre 0 a 10: '))

if numeroAleatorio == numero:
    print('Acertou')
else:
    print('Errou')

print(f'O numero correto era {numeroAleatorio}')
print('======================================FIM======================================')