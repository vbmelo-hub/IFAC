class Pessoa:
    def __init__(self, nome, idade, altura): #def = metodo/classe construtora reconhecida pelo "__init__"
        self.nome = nome
        self.idade = idade
        self.altura = altura
    
    def apresentar(self): #metodo apresentar
        print(f'Nome: {self.nome}')
        print(f'idade: {self.idade}')
        print(f'Altura: {self.altura}')
        print('-------------------------')

pessoa1 = Pessoa('Vinícius', 20, 1.69)
pessoa2 = Pessoa('Giovanna', 20, 1.61)
pessoa1.apresentar()
pessoa2.apresentar()
