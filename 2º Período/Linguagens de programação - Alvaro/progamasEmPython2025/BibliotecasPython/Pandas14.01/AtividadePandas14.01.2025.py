'''
Realizar o codigo em Python:
-Ler o arquivo "Alunos.csv"
-Printar todo o arquivo
-printar as 5 primeiras linhas do arquivo
-printar somente os alunos ativos
-printar o agrupamento por curso e a quantidade de alunos
-criar um arquivo csv com o resultado do agrupamento
'''
import pandas as pd

#Lendo o arquivo
df = pd.read_csv('alunos.csv')

print(df)
print(df.head())
alunos_ativos = df[df['Status'] == 'Ativo']
print(alunos_ativos)
alunos_curso_quantidade = alunos_ativos.groupby('Curso').size().reset_index(name='Quantidade de Alunos Ativos')
print(alunos_curso_quantidade)

alunos_curso_quantidade.to_csv('Agrupamento.csv', index=False)
print("Arquivo 'Agrupamento.csv' criado com sucesso!")