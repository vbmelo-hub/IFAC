from matplotlib import pyplot as plt

plt.style.use('ggplot')

eixo_x_dias = [1, 5, 10, 15, 20, 25, 30]
eixo_y_temp_max = [28, 29, 25, 32, 34, 36, 31]
eixo_y_temp_min = [21, 22, 17, 23, 23, 24, 20]

plt.plot(eixo_x_dias, eixo_y_temp_max, linestyle = '--', marker='s')
plt.plot(eixo_x_dias, eixo_y_temp_min, color='g', linewidth = 6)

plt.title('Temperaturas Máxima e Mínima')
plt.xlabel('Dias')
plt.ylabel('Temperatura')
plt.legend(('Temp Max', 'Temp min'))

plt.grid(True)

plt.show()