import datetime

agora = datetime.datetime.now()

if agora.hour > 18:
    print('Boa noite')
elif agora.hour >= 12 and agora.hour < 18:
    print('Boa tarde')
else:
    print('Bom dia')

#print(agora)
#print(agora.year)
#print(agora.mounth)
#print(agora.day)
#print(agora.hour)
#print(agora.minute)
#print(agora.microsecond)

import math

print(math.sqrt(25))
print(math.pow(5,2))
print(math.pow(5,3))

import random

numeroAleatorio = random.randint(0, 10)
numero = int(input('digite um numero entre 0 a 10: '))

if numeroAleatorio == numero:
    print('Acertou')
else:
    print('Errou')

print(f'O numero correto era {numeroAleatorio}')
