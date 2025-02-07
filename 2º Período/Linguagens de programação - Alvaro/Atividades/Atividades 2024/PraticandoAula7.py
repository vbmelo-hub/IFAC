'''
Código feito por Vinícius Barros
no dia 10/12/2024
'''

'''
Exercício 1: Análise de Texto
Peça ao aluno para escrever um programa que recebe uma frase e exibe:
1. O número total de caracteres.
2. O número de palavras.
3. A quantidade de vezes que uma palavra específica aparece.
'''
frase = (input('Escreva uma frase: '))
print(f'Sua frase possui {len(frase)} caracteres.')
frase2 = frase.split()
print(len(frase2))
quantidade = frase.count(input('Escreva uma palavra da frase que você gostaria de saber quantas vezes aparece: '))
print(quantidade)

'''
Exercício 2: Invertendo Strings
Peça ao aluno para criar um programa que recebe uma palavra e exibe ela invertida.
'''
palavra = input('Escreva uma frase ou palavra que desejar: ')
resultado_invertido = palavra[::-1]
print(resultado_invertido)

'''
Exercício 3: Substituindo Texto
Crie um programa que solicita uma frase e substitui uma palavra escolhida pelo usuário.
'''
fraseNow = input('Escreva uma frase: ')
fraseAntiga = input('Escolha uma palavra para trocar: ')
fraseNova = input('Qual palavra deseja adicionar no lugar? ')
print(fraseNow.replace(fraseAntiga, fraseNova))

'''
Exercício 4: Validando Palíndromos
Crie um programa que verifica se uma palavra é um palíndromo (lê-se da mesma forma de trás para frente).
'''
palavra = input('Escreva uma palavra: ')
if (palavra[::-1] == palavra):
    print('Sua palavra é um palindromo')
else:
    print('Sua palavra não é um palindromo!')

'''
Exercício 5: Formatação de Dados
criar um programa que recebe o nome de uma pessoa, sua idade e altura, e exibe uma mensagem formatada com os dados
arredondados.
'''
nome = input('Qual seu nome? ')
idade = int(input('Qual sua idade? '))
altura = float(input('Qual sua altura? '))
print(f'Seu nome é {nome} voce tem {idade} anos e tem {altura:.2f}')