#include <stdio.h>
#include "include/calculadora.h"

int main(){
  int opcao;
  float numberOne, numberTwo, resultado;

  // Menu de operações
  printf("Escolha uma operação:\n 1. Soma\n 2. Subtração\n 3. Multiplicação\n 4. Divisão\n Digite sua opção: ");
  scanf("%d", &opcao);

  // Solicita números
  printf("Informe o primeiro número: ");
  scanf("%f", &numberOne);
  printf("Informe o segundo número: ");
  scanf("%f", &numberTwo);

  // Processa a operação escolhida
  switch (opcao)
  {
  case 1: 
    resultado = somaNumbers(numberOne, numberTwo);
    printf("Resultado da soma: %.2f\n", resultado);
    break;
  case 2: 
    resultado = subtracaoNumbers(numberOne, numberTwo);
    printf("Resultado da subtração: %.2f\n", resultado);
    break;
  case 3: 
    resultado = multiplicacaoNumbers(numberOne, numberTwo);
    printf("Resultado da multiplicação: %.2f\n", resultado);
    break;
  case 4:
    if (numberTwo != 0) {
     resultado = divisaoNumbers(numberOne, numberTwo);
    printf("Resultado da divisão: %.2f\n", resultado);
    } else {
      printf("Não é possível dividir um número por 0!");
    }
    break;
  default:
    printf("Opção inválida escolha um número entre 1 e 4!");
    break;
  }
  return 0;
}