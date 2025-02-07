class Veiculo:
    def __init__(self, tipo):
        self.tipo = tipo
    
    def mover(self):
        print(f'O veículo {self.tipo} ta se movendo') #<-----------


        

class Carro(Veiculo): #Herança, neste exemplo a classe Carro herdou da classe Veículo a classe construtora (__init__) o seu "tipo".
    def __init__(self, tipo, modelo):
        super().__init__(tipo)
        self.modelo = modelo
    
    def mover(self):
        print(f'O veíclo {self.tipo} de modelo {self.modelo} ta se movendo') #<------------

#Exemplo de polimorfismo, dois objetos que dividem o mesmo metodo, nesse caso, "mover". Mas que possuem saídas diferentes um do outro.

veiculo1 = Veiculo('moto')
veiculo1.mover()
veiculo2 = Carro('carro', 'Fiat')
veiculo2.mover()