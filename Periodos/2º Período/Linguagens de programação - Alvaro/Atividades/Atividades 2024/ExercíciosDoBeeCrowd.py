'''
Código feito por Vinícius
no dia 05/12/2024
'''
print('===========================1000===========================')
#Hello World! | 1000 - Você deve imprimir a mensagem "Hello World!" e em seguida o final de linha, conforme o exemplo abaixo.
print('Hello World!')

print('===========================1001===========================')
#Extremamente básico | 1001 - Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma de A e B atribuindo o seu resultado na variável X. Imprima X.
A = int(input())
B = int(input())
X = A + B
print(f'X = {X}')

print('===========================1002===========================')
#Área do círculo | 1002 - Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.
n = 3.14159
raio = float(input())
area = n * (raio**2)
print(f'A={area:.4f}')

print('===========================1003===========================')
#Soma simples | 1003 - Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre elas e atribua à variável SOMA. A seguir escrever o valor desta variável.
A = int(input())
B = int(input())
resultado = A + B
print(f"SOMA = {resultado}")

print('===========================1004===========================')
#Produto simples | 1004 - Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD. A seguir mostre a variável PROD com mensagem correspondente.
A = int(input())
B = int(input())
resultado = A * B
print(f"PROD = {resultado}")

print('===========================1005===========================')
#Média 1 | 1005 - Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
A = float(input())
B = float(input())
resultado = (A * 3.5 + B * 7.5) / 11
print(f"MEDIA = {resultado:.5f}")

print('===========================1006===========================')
#Média 2 | 1006 - Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
A = float(input())
B = float(input())
C = float(input())
resultado = (A * 2 + B * 3 + C * 5) / 10
print(f"MEDIA = {resultado:.1f}")

print('===========================1007===========================')
#Diferença | 1007 - Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
A = int(input())
B = int(input())
C = int(input())
D = int(input())
resultado = (A * B - C * D)
print(f"DIFERENCA = {resultado}")

print('===========================1008===========================')
#Salário | 1008 - Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas casas decimais.
numFuncionarios = int(input())
horasDeTrabalho = int(input())
valorPorHora = float(input())
resultado = (horasDeTrabalho * valorPorHora)
print(f'NUMBER = {numFuncionarios}')
print(f'SALARY = U$ {resultado:.2f}')

print('===========================1009===========================')
#Salário com bonús | 1009 - Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.
nome = (input())
salarioFixo = float(input())
vendas = float(input())
resultado = (vendas * (15 / 100) + salarioFixo)
print(f'TOTAL = R$ {resultado:.2f}')