from matplotlib import pyplot as plt

'''
Código feito por Vinícius
no dia 21/01/2025
'''

plt.style.use('ggplot')

eixo_x_meses = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
eixo_y_Celular = [20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130]
eixo_y_Notebook = [5, 10, 12, 18, 24, 32, 46, 55, 69, 80, 90, 100]

plt.plot(eixo_y_Celular, marker = 'o')
plt.plot(eixo_y_Notebook, linestyle = '--', marker = '^')

plt.title('Vendas de Celulares e Notebook')
plt.xlabel('Meses')
plt.ylabel('Vendas')
plt.legend(('Celular', 'Notebook'))
plt.grid(True)

plt.show()