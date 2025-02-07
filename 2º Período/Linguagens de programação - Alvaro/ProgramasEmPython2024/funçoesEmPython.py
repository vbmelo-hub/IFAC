'''
Código feito por Vinícius
No dia 03/12/2024
'''

def saudacao():
    print('Olá! seja bem-vindo(a)')

saudacao()

def saudacaoPersonalizada(nome, idade):
    print(f'Olá {nome}, seja bem vindo!')
    print(f'Voce tem {idade} anos de idade')

saudacaoPersonalizada('Vinicius', 20)


def soma(a, b):
    print(a+b)
soma(5,7)
soma(2,4)
soma(9,9)

def subtracao(num1, num2):
    print(num1 - num2)
subtracao(5,34)
subtracao(10,100)
subtracao(15,20)

def multiplicacao(mul1, mul2):
    print(mul1 * mul2)
multiplicacao(10,10)
multiplicacao(2,2)
multiplicacao(5,7)

def quadrado(numero):
    return numero ** 2
resultado = quadrado(5)

def QuadradoSemReturn(numero):
    print(numero ** 2)

x = 10 #Variavel global

def minha_funcao():
    x = 5
    print(f'Valor dentro da função: {x}')

minha_funcao()
print(f'Valor fora da minha função {x}')