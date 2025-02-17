//Procedimento clear()
void clear (void) {
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
}//Fim do procedimento clear()

//Função menu()
int menu(void) {
	int op;
	printf ("\n\n\n\tMenu");
	printf ("\n\n1 - Enfileirar Cadastro de Aluno");
	printf ("\n\n2 - Desenfileirar Cadastro de Aluno");
	printf ("\n\n3 - Exibir Fila de Cadastros de Alunos");
	printf ("\n\n0 - Sair");
	
	printf ("\n\n\nInforme a opção desejada: ");
	scanf ("%d", &op);
	return op;
}//Fim da função menu()
