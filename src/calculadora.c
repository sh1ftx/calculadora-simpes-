#include "../include/calculadora.h"

// Função para adição
float somaNumbers(float numberOne, float numberTwo) {
  return numberOne + numberTwo;
}

// Função para subtração
float subtracaoNumbers(float numberOne, float NumberTwo) {
  return numberOne - NumberTwo;
}

// Função para multiplicação
float multiplicacaoNumbers(float numberOne, float NumberTwo) {
  return numberOne * NumberTwo;
}

// Função para divisão
float divisaoNumbers(float numberOne, float NumberTwo) {
  if(NumberTwo != 0) {
    return numberOne / NumberTwo;
  } else {
    return 0;
  }
}