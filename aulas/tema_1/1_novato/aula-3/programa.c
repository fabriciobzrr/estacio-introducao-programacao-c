#include <stdio.h>

int main() {
  char nome[50];
  int idade;
  printf("Digite seu nome: ");
  fgets(nome, 50, stdin);
  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("Seu nome: %s", nome);
  printf("Sua idade:  %d", idade);

  return 0;
}