class Veiculo:
    def __init__(self, marca, modelo, ano):
        self.marca = marca
        self.modelo = modelo
        self.ano = ano
    
    def exibir_detalhes(self):
        print(f'Marca: {self.marca}\nModelo: {self.modelo}\nAno: {self.ano}')
    
class Carro(Veiculo):
    def __init__(self, marca, modelo, ano, tipo_combustivel):
        super(). __init__(marca, modelo, ano)
        self.tipo_combustivel = tipo_combustivel

    def exibir_detalhes(self):
        super().exibir_detalhes()
        print(f'Tpode de combustivel: {self.tipo_combustivel}')
        print('--------------------------------')

class Moto(Veiculo):
    def __init__(self, marca, modelo, ano, cilindradas):
        super(). __init__(marca, modelo, ano)
        self.cilindradas = cilindradas

    def exibir_detalhes(self):
        super().exibir_detalhes()
        print(f'Cilindradas: {self.cilindradas}')
        print('--------------------------------')

carro1 = Carro('Fiat', 'Uno', 2003, 'Alcool')
carro1.exibir_detalhes()

moto1 = Moto('Honda', 'Pop 110i', 2024, '110')
moto1.exibir_detalhes()