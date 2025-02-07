class ContaBancaria:
    def __init__(self, titular, conta, agencia): #Classe construtora.
        self.titular = titular
        self.conta = conta
        self.agencia = agencia
        self.saldo = 0
    
    def MostrarDadosBancarios(self): #Metodo 1
        print(f'Titular: {self.titular}')
        print(f'Conta: {self.conta}')
        print(f'Agência: {self.agencia}')
        print(f'Saldo: {self.saldo} R$')
        print('----------------------')
    
    def Deposito(self, valor): #Metodo 2
        #self.saldo = self.saldo + valor
        self.saldo += valor
        print(f'foi depositado {valor} na conta de {self.titular}')
        print('----------------------')
    
    def Saque(self, valor): #Metodo 3
        #self.saldo = self.saldo - valor
        if valor > self.saldo:
            print('Saldo insuficiente para o saque')
        else:
            self.saldo -= valor
            print(f'Foi sacado um valor de {valor} na conta de {self.titular}')
        print('----------------------')

conta1 = ContaBancaria('Alexandre', '8022-0', '30982-8')
conta2 = ContaBancaria('Ricardo', '1234-5', '6789-10')
conta1.MostrarDadosBancarios()
conta2.MostrarDadosBancarios()

conta1.Deposito(150)
conta1.MostrarDadosBancarios()

conta2.Saque(5)
conta2.MostrarDadosBancarios()

conta1.Saque(5)
conta1.MostrarDadosBancarios()