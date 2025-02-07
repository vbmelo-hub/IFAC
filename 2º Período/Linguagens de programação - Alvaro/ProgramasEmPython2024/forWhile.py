'''
Código feito por Vinícius Barros
No dia 21/11/2024
'''

nome = 'Alvaro'
print('Meu nome é '+ nome)
print('Aula de Python é '+ 3*'muito '+ 'legal')

#arredondamento de números -------------------------------------------------------------------------------------------------

pi = 3.141575498375983723487
print(f'O valor de pi arredondado é {pi:.3f}')

#estrutura for -------------------------------------------------------------------------------------------------------------
    #for com numeros
for i in range(1,101): #vai de 1 até 100
    print(f'Número {i}')

    #for com string
nome = 'Giovanna'
for letra in nome:
    print(letra)

    #for com listas
frutas = ['banana', 'maça', 'abacaxi']
for item in frutas:
    print(item)

    #while - contagem regressiva
contador = 5
while contador > 0:
    print(f"Contagem: {contador}")
    contador -= 1

    #while - Entrada com senha 
senha = ''
while senha != '1234':
    senha = input('Digite sua senha: ')
print('Acesso liberado')

for i in range(1,1000):
    if i == 5:
        break
    print(i)
