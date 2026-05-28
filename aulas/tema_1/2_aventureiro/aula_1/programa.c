#include <stdio.h>

void entradaDados() {
  float nota1, nota2;
  printf("Digite a nota 1: ");
  scanf("%.1f", &nota1);
  printf("Digite a nota 2: ");
  scanf("%.1f", &nota2);
  // calcularMedia(nota1, nota2);
}

// float calcularMedia(float nota1, float nota2) {
//   // float media = (nota1 + nota2) / 2;
//   // return media;
// }

// void exibirResultado() {
//   // float media = calcularMedia();
//   // printf("Média: ");
//   // scanf("%.1f", &media);
// }

int main() {
  entradaDados();
  // float media = calcularMedia();
  // exibirResultado();

  return 0;
}