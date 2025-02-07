class Funcionario:
    def __init__(self, nome,salario):
        self.nome = nome
        self.salario = salario
    
    def exibirFuncionario(self):
        print(f'Nome: {self.nome}\nSalario: {self.salario}')
    
    def calcular_salario_anual(self):
        return self.salario * 12
    
class Gerente(Funcionario):
    def __init__(self, nome, salario, bonus):
        super(). __init__(nome, salario)
        self.bonus = bonus
    
    def calcular_salario_anual(self):
        return super().calcular_salario_anual() + self.bonus
    
    def exibirFuncionario(self):
        super().exibirFuncionario()
        print(f'Bonus: {self.bonus}')
        print(f'Salario Anual: {self.calcular_salario_anual()}\n')

class Vendedor(Funcionario):
    def __init__(self, nome, salario, vendas, comissao):
        super().__init__(nome, salario)
        self.vendas = vendas
        self.comissao = comissao
    
    def calcular_salario_anual(self):
        return super().calcular_salario_anual() + self.vendas * self.comissao
    
    def exibirFuncionario(self):
        super().exibirFuncionario()
        print(f'Comissão: {self.comissao}')
        print(f'Salario Anual: {self.calcular_salario_anual()}')

gerente = Gerente('Leandro', 1500, 500)
gerente.exibirFuncionario()

vendedor = Vendedor('Douglas', 1500, 200, 100)
vendedor.exibirFuncionario()