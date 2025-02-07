class Funcionario:
    def __init__(self, nome, salario):
        self.nome = nome
        self.salario = salario
        
    
    def calcular_salario_anual(self):
        return self.salario * 12
    
    def exibirInfo(self):
        salario_anual = self.calcular_salario_anual()
        print(f'Nome: {self.nome}')
        print(f'Salario anual: R${salario_anual}')

class Gerente(Funcionario):
    def __init__(self, nome, salario, bonus):
        super().__init__(nome, salario)
        self.bonus = bonus
    
    def calcular_salario_anual_gerente(self):
        salario_anual_base = super().calcular_salario_anual()
        return salario_anual_base + self.bonus
    
    def exibirInfo(self):
        super().exibirInfo()
        salario_anual_bonus = self.calcular_salario_anual_gerente()
        print(f'Bonus: R${self.bonus}')
        print(f'Salario com bonus: R${salario_anual_bonus}')
        print('---------------------')

class Vendedor(Funcionario):
    def __init__(self, nome, salario, comissao, numero_vendas):
        super(). __init__(nome, salario)
        self.comissao = comissao
        self.numero_vendas = numero_vendas

    def calcular_salario_anual_funcionario(self):
        salario_anual_base = super().calcular_salario_anual()
        return salario_anual_base + (self.comissao * self.numero_vendas)
    
    def exibirInfo(self):
        super().exibirInfo()
        salario_anual_comissao = self.calcular_salario_anual_funcionario()
        print(f'Comissão por cada venda: R${self.comissao}')
        print(f'Numero de vendas: {self.numero_vendas}')
        print(f'Salario anual com comissão: R$ {salario_anual_comissao}')
    
gerente = Gerente('João', 8000, 5000)
vendedor = Vendedor('Maria', 3000, 200, 50)

gerente.exibirInfo()
vendedor.exibirInfo()
        