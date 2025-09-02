# Simulador de Movimentos de Xadrez

Este programa simula o movimento de quatro peças de xadrez (Torre, Bispo, Rainha e Cavalo) em um tabuleiro de xadrez usando a linguagem C. O movimento de cada peça é implementado com estruturas de controle específicas, incluindo recursividade e loops aninhados, conforme os requisitos.

## Pré-requisitos

- Um compilador C (por exemplo, `gcc`) instalado no seu sistema.
- Um terminal ou interface de linha de comando para compilar e executar o programa.

## Instruções de Compilação

Para compilar o programa, siga estas etapas:

1. Salve o código-fonte em um arquivo chamado `xadrez.c`.
2. Abra um terminal e navegue até o diretório que contém o arquivo `xadrez.c`.
3. Execute o seguinte comando para compilar o programa:

   ```bash
   gcc xadrez.c -o xadrez
   ```

   Este comando compila o código-fonte e gera um executável chamado `xadrez`.

## Instruções de Execução

Para executar o programa, siga estas etapas:

1. Certifique-se de que o programa foi compilado com sucesso (veja acima).
2. No mesmo terminal, execute o seguinte comando:

   ```bash
   ./xadrez
   ```

   No Windows, use:

   ```bash
   xadrez.exe
   ```

3. O programa será executado e exibirá no console o movimento de cada peça de xadrez, com as seguintes saídas:
   - **Torre**: Move-se 5 casas para a direita (usando recursividade).
   - **Bispo**: Move-se 5 casas na diagonal para cima e à direita (usando recursividade com loops aninhados).
   - **Rainha**: Move-se 8 casas para a esquerda (usando recursividade).
   - **Cavalo**: Move-se em formato de "L" (duas casas para cima, uma casa à direita) usando loops aninhados com comandos de controle (`continue` e `break`).

## Saída Esperada

O programa imprime a direção de cada movimento para cada peça, separada por linhas em branco. Exemplo de saída:

```
Movimento da Torre (Direita):
Direita
Direita
Direita
Direita
Direita

Movimento do Bispo (Cima e Direita):
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita

Movimento da Rainha (Esquerda):
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

Movimento do Cavalo (Duas para cima, uma para a direita):
Cima
Cima
Direita
```

## Observações

- O programa não requer entrada do usuário; todas as distâncias de movimento são predefinidas no código.
- O código está documentado com comentários explicando a lógica da recursividade e dos loops aninhados.
- Certifique-se de que seu terminal suporta codificação UTF-8 para exibir a saída corretamente.
