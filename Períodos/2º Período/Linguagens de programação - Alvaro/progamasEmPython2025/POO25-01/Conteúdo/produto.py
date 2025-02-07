class Produto:
    def __init__(self, nome, quantidade, preco):
        self.nome = nome
        self.quantidade = quantidade
        self.preco = preco

    def mostrarDados(self):
        print(f'Nome do produto: {self.nome}')
        print(f'Quantidade em estoque: {self.quantidade}')
        print(f'Preço unitário: R$ {self.preco:.2f}')
        print('------------------------------------')

    def adicionarEstoque(self, qtde):
        if qtde <= 0:
            print("A quantidade a ser adicionada deve ser maior que zero!")
        else:
            self.quantidade += qtde
            print(f'{qtde} unidades adicionadas ao estoque do produto {self.nome}.')
            print(f'Estoque atualizado: {self.quantidade}')

    def removerEstoque(self, qtde):
        if qtde <= 0:
            print("A quantidade a ser removida deve ser maior que zero!")
        elif qtde > self.quantidade:
            print(f'Quantidade solicitada ({qtde}) é superior ao disponível em estoque ({self.quantidade}) do produto {self.nome}.')
        else:
            self.quantidade -= qtde
            print(f'{qtde} unidades removidas do estoque do produto {self.nome}.')
            print(f'Estoque atualizado: {self.quantidade}')

# Exemplos de uso
produto1 = Produto('Arroz', 5, 10.5)
produto1.mostrarDados()
produto1.adicionarEstoque(10)
produto1.mostrarDados()

produto2 = Produto('Feijão', 2, 15.5)
produto2.mostrarDados()
produto2.removerEstoque(50)
produto2.removerEstoque(1)
