class Instrumento:
    def __init__(self, nome):
         self.nome = nome
    
    def tocar(self):
         print('Tocando um som genérico.')

class Violao(Instrumento):
    def __init__(self, nome):
        super().__init__(nome)

    def tocar(self):
         print(f'Tocando acordes no {self.nome}.')

class Flauta(Instrumento):
    def __init__(self, nome):
        super().__init__(nome)

    def tocar(self):
         print(f'Tocando uma melodia na {self.nome}.')

violão = Violao('Violão')
violão.tocar()

flauta = Flauta('Flauta')
flauta.tocar()