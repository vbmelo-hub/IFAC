#Conteúdo da prova 1 - Funções
#"def" são funções onde, no exemplo 1 abaixo, ele apenas executa e o outro executa sempre que for solicitado.

#Exemplo 1 - Funções de processamento, só executa algo.
def soma(num1, num2):
    print(num1 + num2)

soma(5,9)
soma(2,2)
soma(8,8)

#Exemplo 2 - Executa a função qunado for solicitado.
def somaComRetorno(num1, num2):
    return num1 + num2

resultado = somaComRetorno(4,2)
print(resultado)

#Conteúdo 2 - Strings

filmes = ['Harry Potter', 'Crepusculo', 'Django', 'A origem']
               #0             #1
print(filmes[0:3]) #Sempre será até o index -1, ou seja, "0:3 -1".

nome = 'Vinicius'
       #01234567 - O string também é uma coleção de dados, então cada letra representa um index que pode ser acessado individualmente, como no exemplo abaixo.
print(nome[0])

frase = 'O rato roeu a roupa do rei de roma'

#Manipulação de strings
print(frase) #Imprime a frase normal.
print(frase[0:8]) #":" representa "Até" então quando coloco "0:8" quero dizer que começa do index "0" até o limte de "8", ou seja, o 8º index é o limite e não irá aparecer no resultado.
print(frase[4:]) #Quando não possui um numero após os ":" o programa irá imprimir a partir do 4º numero e irá até o fim da frase.
print(frase[:-1]) #Quando não possui um numero antes dos ":" o programa irá começar de trás para frente.
print(frase[::-1])
print(frase.lower()) #Imprime tudo em letra minuscula.
print(frase.upper()) #imprime tudo em letra maiscula.
print(frase.capitalize()) #Imprime a primeira letra em maiusculo.
print(frase.title()) #Imprime cada inicio de palavra com a letra maiuscula.

#Analise de strings
print(len(frase)) #Largura da frase.
print(len(filmes)) #Quantidade de itens na lista
print(frase.count('r')) #Quantidade de vezes que uma substring aparece no texto.
print(frase.find('ro')) #Procurar a primeira aparição da substing.

#Modificando strings
frase = '        O rato roeu a roupa do rei de roma              '
print(frase)
print(frase.strip()) #Remove os espaços em branco
print(frase.replace('rato', 'Sonic')) #Realiza a troca de uma substring somente nesta função.
print(frase) #Uma variavel é imutavel, então qualquer modificação feita não é permanente dentro da variável original.

#Funções para quebrar e juntar strings
print(frase.split()) #Transforme a string em uma lista.
print2 = print('-'.join(frase)) #Adiciona um elemento entre cada index da string.
print(frase)
print(print2)

#Concatenação
nome = 'Vinicius'
print('Ola '+ nome)

#Uso de f-strings
idade = 30
print(f'Ola {nome} voce tem {idade} anos')

#Arredondamento e formatação numérica
pi = 3.14159
print(f'O valor de pi é {pi:.2f}.') #Arredondamento da minha variavel de dupla precisão para 2 casas numéricas após o ponto.

#Extra: Quando utilizo "0:8" quero dizer que o caminho será de 0 até 8 -1. Mas quando coloco "0:8:3" quero dizer que irá começar do 0 e pular 3 index, onde o 3º será impresso.