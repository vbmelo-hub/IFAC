listas_series = ['breaking Bad', 'Dexter', 'Game Of Thrones']
for i in listas_series:
    print(i)

notas = [7.5, 8.8]
for i in notas:
    print(i)

lista_variada = [3, 'Texto aleatorio', 5.4, True, '+ Texto']
for i in lista_variada:
    print(i)

listas_series = ['breaking Bad', 'Dexter', 'Game Of Thrones']
print (listas_series[1]) #imprime dexter, porque ele é o indice 1
print (listas_series[0:2]) #imprime do indice 0 até o 2 -1
listas_series[1] = 'The Office' #Modifica o indice 1
print(type(listas_series))

for i in range(len(listas_series)):
    print(f'indice {i}: {listas_series[i]}') #retorna cada item de acordo com seu indice

listas_series.append('Young Sheldon')
listas_series.append('The Big Bang Theory')
listas_series.insert(0, 'Turma da monica')
listas_series.insert(2, 'Futurama')
print(listas_series)
listas_series.pop() #remove o ultimo elemento
print(listas_series)
listas_series.remove('Game Of Thrones') #Remove o que for indicado em qualquer indice
print(listas_series)

listas_series.sort() #ordena
print(listas_series)
notas.sort()
print(notas)
listas_series.reverse() #inverte a ordem
print(listas_series)
print(len(listas_series))

medalhas = ('ouro', 'prata', 'bronze') #Tupla
print(type(medalhas))
numeros = {1, 2, 3, 4, 5, 6}
print(numeros)

aluno = {'aluno': ['Fulano', 'Beltrano'], 'idade': 20, 'matriculado': 1234}
print(aluno['aluno'])
aluno['idade'] = 22 #Alterando dados
print(aluno)
