# Documentação do Projeto: Calculadora Simples em C

## Índice

1. [Descrição do Projeto](#descrição-do-projeto)
2. [Características](#características)
3. [Pré-requisitos](#pré-requisitos)
4. [Instalação](#instalação)
5. [Uso](#uso)
6. [Estrutura do Projeto](#estrutura-do-projeto)
7. [Contribuição](#contribuição)
8. [Licença](#licença)

## Descrição do Projeto

A **Calculadora Simples em C** é uma aplicação de linha de comando que permite ao usuário realizar operações matemáticas básicas, como soma, subtração, multiplicação e divisão. Este projeto é uma ótima introdução à programação em C e ao uso de funções, estrutura de controle e manipulação de entrada/saída.

## Características

- Suporte para quatro operações básicas: soma, subtração, multiplicação e divisão.
- Validação de entrada do usuário para evitar erros, como divisão por zero.
- Estrutura modular, com funções separadas para cada operação matemática.

## Pré-requisitos

Para compilar e executar este projeto, você precisa ter o seguinte instalado em seu sistema:

- Um compilador C (como GCC).
- Um terminal ou linha de comando.
- (Opcional) Make, para usar o Makefile incluído.

## Instalação

1. **Clone ou baixe o repositório** para o seu computador. Se estiver usando o Git, execute o seguinte comando:

   ```bash
   git clone <URL_DO_REPOSITORIO>
   ```

2. **Navegue até o diretório do projeto**:

   ```bash
   cd "/home/kay/.Outras pastas/Locais/Downloads/Documentos/Udemy/Curso de C e C++/Calcaladora simples em C"
   ```

3. **Compile o projeto**. Você pode compilar usando o GCC diretamente ou usar o Makefile:

   Para compilar manualmente:

   ```bash
   gcc -Wall -Wextra -g3 main.c src/calculadora.c -o output/main
   ```

   Ou, se estiver usando o Makefile, execute:

   ```bash
   make
   ```

## Uso

1. **Execute o programa** a partir do diretório `output`:

   ```bash
   "./output/main"
   ```

2. **Siga as instruções** na tela para selecionar a operação desejada e insira os números quando solicitado.

## Estrutura do Projeto

A estrutura do projeto é organizada da seguinte forma:

```
Calcaladora simples em C/
├── include/
│   └── calculadora.h         # Cabeçalho das funções da calculadora
├── src/
│   └── calculadora.c         # Implementação das funções da calculadora
├── output/
│   └── main                  # Executável gerado
└── main.c                    # Função principal do programa
└── Makefile                  # Arquivo Makefile para construção do projeto
```

## Contribuição

Contribuições são bem-vindas! Se você gostaria de contribuir para este projeto, siga estas etapas:

1. Fork o repositório.
2. Crie uma nova branch (`git checkout -b minha-contribuicao`).
3. Faça suas alterações e commit (`git commit -m 'Adicionando nova funcionalidade'`).
4. Envie suas alterações (`git push origin minha-contribuicao`).
5. Crie um Pull Request.

## Licença

Este projeto está licenciado sob a Licença MIT. Veja o arquivo `LICENSE` para mais detalhes.

---

### Notas Finais

Esta documentação pode ser adaptada conforme necessário para incluir informações adicionais específicas do seu projeto, como testes, exemplos de uso, e links para recursos adicionais. Certifique-se de manter a documentação atualizada conforme o projeto evolui!
