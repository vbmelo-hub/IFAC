class Veiculo:
    def __init__(self, ano, cor, chassi, placa, modelo):
        self.ano = ano
        self.cor = cor
        self.chassi = chassi 
        self.placa = placa 
        self.modelo = modelo

    def infoVeiculo(self):
        print('--------------------------------')
        print(f'Ano: {self.ano}')
        print(f'Cor: {self.cor}')
        print(f'Chassi: {self.chassi}')
        print(f'Placa: {self.placa}')
        print(f'Modelo: {self.modelo}')
    
class Moto(Veiculo):
    def __init__(self, ano, cor, chassi, placa, modelo, cilindrada):
        super(). __init__(ano, cor, chassi, placa, modelo)
        self.cilindrada = cilindrada
    
    def infoVeiculo(self):
        super().infoVeiculo()
        print(f'Cilindrada: {self.cilindrada}')
        print('--------------------------------')
        
    
    def somDaMoto():
        print('som da moto')

class Carro(Veiculo):
    def __init__(self, ano, cor, chassi, placa, modelo, cavalos):
        super(). __init__(ano, cor, chassi, placa, modelo)
        self.cavalos = cavalos
    
    def infoVeiculo(self):
        super().infoVeiculo()
        print(f'Cavalos: {self.cavalos}')
        print('--------------------------------')
    
    
    
veiculo1 = Veiculo(2001, 'Preto', 1234, 1234567, 'Uno')
veiculo1.infoVeiculo()

veiculo2 = Moto(2017, 'Preto', 123456, 1234567, 'Yamaha', 150)
veiculo2.infoVeiculo()

veiculo3 = Carro(2024, 'Preto', 123456, 1234567, 'Ram', 150)
veiculo3.infoVeiculo()