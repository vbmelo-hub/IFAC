class Aluno:
    def __init__(self, nome, idade, curso):
        self.nome = nome
        self.idade = idade
        self. curso = curso
    
    def exibir_dados(self):
        print(f'Nome: {self.nome}\nIdade: {self.idade}\nCurso: {self.curso}')
        print('------------------------')
    
aluno1 = Aluno('Diego', 20, 'Engenharia Civil')
aluno1.exibir_dados()

aluno2 = Aluno('Maria', 25, 'Psicologia')
aluno2.exibir_dados()

aluno3 = Aluno('Juscelino', 28, 'Medicina')
aluno3.exibir_dados()