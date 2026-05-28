#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3, float nota4) {
  return (nota1 + nota2 + nota3 + nota4) / 4;
}

void exibirResultado(float media) {
  printf("Media: %.1f \n", media);
}

int main() {
  float nota1, nota2, nota3, nota4, media;

  printf("===== CALCULO DE MEDIA =====\n");
  printf("Nota 1: ");
  scanf("%f", &nota1);
  
  printf("Nota 2: ");
  scanf("%f", &nota2);
  
  printf("Nota 3: ");
  scanf("%f", &nota3);
  
  printf("Nota 4: ");
  scanf("%f", &nota4);
  printf("============================\n");
  
  
  media = calcularMedia(nota1, nota2, nota3, nota4);
  
  printf("\n=========== MEDIA ==========\n");
  exibirResultado(media);
  printf("============================");
  
  return 0;
}