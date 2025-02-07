import pandas as pd

#Lendo o arquivo
df = pd.read_csv('dados_vendas.csv')
#print(df)
print(df.head()) #apresenta somente as 5 primeiras linhas do arquivo.
print(df.info())
print(df.describe())

vendas_fevereiro = df[df['Data de Venda'] >= '2023-02-01' ] #filtrando data de venda
print(vendas_fevereiro)
vendas_por_categorias = df.groupby('Categoria')['Quantidade Vendida'].sum()
print(vendas_por_categorias)
vendas_por_categorias = df.groupby(['Categoria', 'Produto'])['Quantidade Vendida'].sum()
print(vendas_por_categorias)

df['Receita'] = df['Quantidade Vendida'] * df['Preço Unitário']
receita = df.groupby(['Categoria', 'Produto'])['Receita'].sum()
print(receita)

vendas_por_categorias.to_csv('agrupamentoCategorias.csv', index=False)