#Atividade
#1. Crie uma lista com 5 numeros fornecidos pelo usuário e exiba:
#1 - O maior numero
#2 - O menor numero
#3 - A soma de todos os numeros 

numeroS_List = []

for i in range(5):
    numeroS = int(input('Digite um numero: '))
    numeroS_List.append(numeroS)
print(f'Maior numero: {max(numeroS_List)} \nMenor numero: {min(numeroS_List)} \nSoma de todos os numeros:{sum(numeroS_List)}')
    

#2. Crie uma lista com os numeros de 1 a 10 e exiba a tabuada de um numero fornecido pelo usuário
tabuada = []
num = int(input('Digite um numero para ver a tabuada: '))
for i in range(1,11):
    tabuada.append( num * i)
print(f'Tabuada de {num} é {tabuada}')



#3. Peça ao usuario 5 nomes e exiba-os-em ordem alfabetica
nomes = []
 
for i in range(5):
    nome = input('Digite um nome: ')
    nomes.append(nome)
nomes.sort()
print(nomes)

#4. Crie um programa que solicita ao usuario para preencher uma lista com 5 numeros e, em seguida remova um numero escolhido pelo usuario.
listaNumeros = []

for i in range(5):
    ListaNumeros2 = int(input('Insira um numero: '))
    listaNumeros.append(ListaNumeros2)
remover = int(input('Remova um numero: '))

if remover in listaNumeros:
    listaNumeros.remove(remover)
else:
    print('Numero não encontrado na lista')
print(listaNumeros)

#5. Crie um programa que simula um carrinho de compras. Permita que o usuário adicione produtos à lista, veja todos os itens e remova produtos específicos.

def exibir_menu():
    print("\n=== Carrinho de Compras ===")
    print("1. Adicionar produto")
    print("2. Ver todos os itens")
    print("3. Remover produto")
    print("4. Sair")

def adicionar_produto(carrinho):
    produto = input("Digite o nome do produto para adicionar: ")
    carrinho.append(produto)
    print(f"'{produto}' foi adicionado ao carrinho.")

def exibir_carrinho(carrinho):
    if not carrinho:
        print("O carrinho está vazio.")
    else:
        print("\nItens no carrinho:")
        for i, produto in enumerate(carrinho, 1):
            print(f"{i}. {produto}")

def remover_produto(carrinho):
    exibir_carrinho(carrinho)
    if carrinho:
        try:
            indice = int(input("Digite o número do produto que deseja remover: "))
            if 1 <= indice <= len(carrinho):
                produto_removido = carrinho.pop(indice - 1)
                print(f"'{produto_removido}' foi removido do carrinho.")
            else:
                print("Número inválido. Tente novamente.")
        except ValueError:
            print("Entrada inválida. Por favor, insira um número.")

def main():
    carrinho = []
    while True:
        exibir_menu()
        opcao = input("Escolha uma opção: ")
        if opcao == "1":
            adicionar_produto(carrinho)
        elif opcao == "2":
            exibir_carrinho(carrinho)
        elif opcao == "3":
            remover_produto(carrinho)
        elif opcao == "4":
            print("Saindo do programa. Obrigado!")
            break
        else:
            print("Opção inválida. Tente novamente.")

if __name__ == "__main__":
    main()

#6 Criar um dicionário com as informações de um aluno (nome, idade, nota). Depois, exiba os dados formatados.
aluno = {
    "nome": input("Digite o nome do aluno: "),
    "idade": int(input("Digite a idade do aluno: ")),
    "nota": float(input("Digite a nota do aluno: "))
}

#7 Peça ao usuário para criar um dicionário que armazena nomes como chaves e números de telefone como valores. Permita adicionar, buscar e remover contatos.
print("\n=== Informações do Aluno ===")
print(f"Nome: {aluno['nome']}")
print(f"Idade: {aluno['idade']} anos")
print(f"Nota: {aluno['nota']:.2f}")

def exibir_menu():
    print("\n=== Gerenciador de Contatos ===")
    print("1. Adicionar contato")
    print("2. Buscar contato")
    print("3. Remover contato")
    print("4. Exibir todos os contatos")
    print("5. Sair")

def adicionar_contato(contatos):
    nome = input("Digite o nome do contato: ").strip()
    telefone = input("Digite o número de telefone: ").strip()
    contatos[nome] = telefone
    print(f"Contato '{nome}' adicionado com sucesso!")

def buscar_contato(contatos):
    nome = input("Digite o nome do contato para buscar: ").strip()
    if nome in contatos:
        print(f"Telefone de {nome}: {contatos[nome]}")
    else:
        print(f"Contato '{nome}' não encontrado.")

def remover_contato(contatos):
    nome = input("Digite o nome do contato para remover: ").strip()
    if nome in contatos:
        del contatos[nome]
        print(f"Contato '{nome}' removido com sucesso!")
    else:
        print(f"Contato '{nome}' não encontrado.")

def exibir_todos_contatos(contatos):
    if not contatos:
        print("Nenhum contato encontrado.")
    else:
        print("\n=== Lista de Contatos ===")
        for nome, telefone in contatos.items():
            print(f"{nome}: {telefone}")

def main():
    contatos = {}
    while True:
        exibir_menu()
        opcao = input("Escolha uma opção: ").strip()
        if opcao == "1":
            adicionar_contato(contatos)
        elif opcao == "2":
            buscar_contato(contatos)
        elif opcao == "3":
            remover_contato(contatos)
        elif opcao == "4":
            exibir_todos_contatos(contatos)
        elif opcao == "5":
            print("Saindo do programa. Obrigado!")
            break
        else:
            print("Opção inválida. Tente novamente.")

if __name__ == "__main__":
    main()
