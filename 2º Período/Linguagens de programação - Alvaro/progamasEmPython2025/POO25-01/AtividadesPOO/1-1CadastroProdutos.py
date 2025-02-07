'''Código feito por Vinícius
    no dia 29/01/2025'''

#1.1: Cadastro de Produtos
class Produto:
    def __init__(self, nome, preco, estoque):
        self.nome = nome
        self.preco = preco
        self.estoque = estoque
    
    def detalhes(self):
        print(f'Produto: {self.nome}\nPreço: R${self.preco}\nEstoque: {self.estoque}')
        print('---------------------------')
    
produto1 = Produto('Arroz', 15.50, 50)
produto1.detalhes()

