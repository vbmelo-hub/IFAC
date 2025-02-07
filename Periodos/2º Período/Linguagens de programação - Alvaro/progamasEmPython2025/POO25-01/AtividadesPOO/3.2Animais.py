class Animal:
    def __init__(self, nome):
        self.nome = nome
    
    def fazer_som():
        print(f'Som genérico de animal.')
    
class Cachorro(Animal):
    def __init__(self, nome):
        super().__init__(nome)
    
    def fazer_som(self):
        print(f'{self.nome} faz "Au Au!"')

class Gato(Animal):
    def __init__(self, nome):
        super().__init__(nome)

    def fazer_som(self):
        print(f'{self.nome} faz "Miau!"')

cachorro = Cachorro('Cachorro')
cachorro.fazer_som()

gato = Gato('Gato')
gato.fazer_som()
