class Veiculo:
    def __init__(self, marca, modelo, ano, preco):
        self.marca = marca
        self.modelo = modelo
        self.ano = ano
        self.preco = preco
    
    def mostrar_dados(self):
        print(f'Marca: {self.marca}\nModelo: {self.modelo}\nAno: {self.ano}\nPreco: R${self.preco}')

class Carro(Veiculo):
    def __init__(self, marca, modelo, ano, preco, quantidade_portas):
        super().__init__(marca, modelo, ano, preco)
        self.quantidade_portas = quantidade_portas
    
    def mostrar_dados(self):
        super().mostrar_dados()
        print(f'Quantidade de portas: {self.quantidade_portas}\n')

class Moto(Veiculo):
    def __init__(self, marca, modelo, ano, preco, Cilindradas):
        super().__init__(marca, modelo, ano, preco)
        self.cilindradas = Cilindradas
    
    def mostrar_dados(self):
        super().mostrar_dados()
        print(f'Cilindradas: {self.cilindradas}\n')
    
carro = Carro('Fiat', 'uno', 1999, 20000, 4)
carro.mostrar_dados()

carro2 = Carro('Fiat', 'Idea', 2013, 30000, 2)
carro2.mostrar_dados()

moto = Moto('Honda', 'Pop', 2024, 18000, 110)
moto.mostrar_dados()