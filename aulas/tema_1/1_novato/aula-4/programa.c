#include <stdio.h>
#include <string.h>

int main() {
  char nome[100];
  int idade, matricula;

  printf("===CADASTRO DE ALUNOS===\n");
  printf("Nome do Aluno: ");
  fgets(nome, 100, stdin);
  nome[strcspn(nome, "\n")] = 0;
  
  printf("Idade: ");
  scanf("%d", &idade);

  printf("Matricula: ");
  scanf("%d", &matricula);

  printf("========================\n");
  printf("=====DADOS DO ALUNO=====\n");
  printf("========================\n");
  printf("Nome: %s\n", nome);
  printf("========================\n");
  printf("Idade: %d\n", idade);
  printf("========================\n");
  printf("Matricula: %d\n", matricula);
  printf("========================\n");

  char opcao;
  printf("\nDeseja cadastrar o aluno abaixo? (s/n)\n");
  printf("\n| Matricula: %d | Nome: %s | Idade: %d anos |\n", matricula, nome, idade);
  printf("\nOpcao: ");
  scanf(" %c", &opcao);

  if (!opcao == 's') {
    printf("\nOperacao cancelada! Encerrando!");
    return 0;
  }

  printf("\nAluno cadastrado com sucesso!");
  return 0;
}