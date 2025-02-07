'''
Codigo feito por Vinícius 
no dia 05/11/2024
'''

numero = 5
numero2 = 6

soma = numero + numero2
subtracao = numero - numero2
multiplicacao = numero * numero2
divisao = numero / numero2
potencia = numero ** numero2
resto = numero % numero2

print(soma)
print(subtracao)
print(multiplicacao)
print(divisao)
print(potencia)
print(resto)

#Operadores de comparação
print(5>4) #maior que
print(5>=4) #maior ou igual
print(5<4) #Menor
print(5<=4) #menor ou igual
print(5==4) #igual

#and or not 

print(5 > 5 or 5 > 4) #Verdade quando um dos itens é verdade
print(5 > 5 and 5 > 4) #Verdade quando os dois itens são verdades
print(False and False and False or True)

nome = input('digitar o seu nome: ')
idade = int(input('digitar a idade'))

if 5 > 4 and 4 < 2:
    print('Isso é verdade')
    print('Segundo print')

if 5 > 4:
    print('Isso é verdade')
    print('Show')
else:
    print('Isso não é uma verdade')
    print('Não é show')

print('Fim do programa')


idade = int(input('digite sua idade')) #Scanf

if idade >= 60:
    print('Adulto')
elif idade >= 18 and idade < 60:
    print('Pessoa aldulta')
else:
    print('Menor de idade')


#DESAFIO 
#CONSTUA UM PROGRAMA QUE LEIA A CATEGORIA DE UM PRODUTO E DETERMINE O PREÇO, CONFORME A TABELA ABAIXO

categoriaEncontrar = int(input('Escolha uma categoria de 1 até 5:'))

if categoriaEncontrar == 1:
    print('10,00')
elif categoriaEncontrar == 2:
    print('18,00')
elif categoriaEncontrar == 3:
    print('23,00')
elif categoriaEncontrar == 4:
    print('26,00')
elif categoriaEncontrar == 5:
    print('31,00')
else:
    print('Essa categoria é inválida')