class ContaBancaria:
    def __init__(self, titular, cpf, conta, agencia):
        self.titular = titular
        self.cpf = cpf
        self.conta = conta
        self.agencia = agencia
        self.saldo = 0

    def mostrar_dados(self):
        print('=========================================')
        return  print(f'Titular: {self.titular}\nCPF: {self.cpf}\nConta: {self.conta}\nAgencia: {self.agencia}\nSaldo: R${self.saldo}')

    def depositar(self, depositar):
        self.depositar = depositar
        self.saldo += depositar
    
    def sacar(self, sacar):
        self.sacar = sacar
        if self.sacar > self.saldo:
            print('=========================================')
            print(f'Tentativa de saque realizada sem sucesso\nTentativa de saque no valor de: R${self.sacar}, valor acima do disponivel na conta.\nSaldo atual da conta: R${self.saldo}')
        else:
            self.saldo -= self.sacar

class ContaPoupanca(ContaBancaria):
    def __init__(self, titular, cpf, conta, agencia):
        super().__init__(titular, cpf, conta, agencia)
        self.taxa_rendimento = 0.5

    def mostrar_dados(self):
        super().mostrar_dados()
        print(f'Taxa de rendimento: {self.taxa_rendimento}%')
        print('=========================================')

pessoa1 = ContaBancaria('Vinicius', '123.456.789-10', 12345, 123456)
pessoa1.mostrar_dados()
pessoa1.depositar(10)
pessoa1.mostrar_dados()
pessoa1.sacar(30)
pessoa1.mostrar_dados()

pessoa2 = ContaPoupanca('Elis', '111-213-141-51', 67891, 789101)
pessoa2.mostrar_dados()
pessoa2.depositar(10)
pessoa2.mostrar_dados()
pessoa2.sacar(5)
pessoa2.mostrar_dados()