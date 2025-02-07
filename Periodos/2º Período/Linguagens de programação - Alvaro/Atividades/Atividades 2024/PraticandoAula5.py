'''
Atividade do dia 
03/12/2024
'''

#1 - 
def saudacao(nome):
    print(f'Olá {nome} seja bem vindo!')
saudacao('Vinicius')

#2 -
def soma(num1, num2):
    print(num1 + num2)
soma(5,5)

#3 - 
def par_impar(numero):
    if numero % 2 == 0:
        print('O numero é par')
    else:
        print('Numero impar')

par_impar(3)
par_impar(10)

#4 - 
def soma(pitagoras1, pitagoras2):
    return pitagoras1 + pitagoras2

def subtração(pitagoras1, pitagoras2):
    return pitagoras1 - pitagoras2

def multiplicação(pitagoras1, pitagoras2):
    return pitagoras1 * pitagoras2

def divisão(pitagoras1, pitagoras2):
    if pitagoras2 != 0:
        return pitagoras1 / pitagoras2	
    else:
        print('Não é possível dividir por 0')

print(soma(5,2))
print(subtração(5,2))
print(multiplicação(5,2))
print(divisão(5,2))

#5 - 
notas = [10, 7.5, 8, 4]
def media(notas):
    return sum(notas) / len(notas)

teste = media(notas)
print(teste)

#6 -
def tabuada(num):
    for i in range(10):
        print(f'{num} X {i} = {num*i}')
tabuada(7)