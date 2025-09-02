# Simulador de Super Trunfo

Este programa em C simula um jogo de Super Trunfo, onde duas cartas representando cidades são comparadas com base em dois atributos escolhidos pelo usuário. Cada carta contém informações como estado, código, nome da cidade, população, área, PIB, número de pontos turísticos e densidade demográfica (calculada automaticamente). O programa determina o vencedor com base na soma dos valores dos atributos selecionados.

## Pré-requisitos

- Um compilador C (por exemplo, `gcc`) instalado no seu sistema.
- Um terminal ou interface de linha de comando para compilar e executar o programa.

## Instruções de Compilação

Para compilar o programa, siga estas etapas:

1. Salve o código-fonte em um arquivo chamado `super_trunfo.c`.
2. Abra um terminal e navegue até o diretório que contém o arquivo `super_trunfo.c`.
3. Execute o seguinte comando para compilar o programa:

   ```bash
   gcc super_trunfo.c -o super_trunfo
   ```

   Este comando compila o código-fonte e gera um executável chamado `super_trunfo`.

## Instruções de Execução

Para executar o programa, siga estas etapas:

1. Certifique-se de que o programa foi compilado com sucesso (veja acima).
2. No mesmo terminal, execute o seguinte comando:

   ```bash
   ./super_trunfo
   ```

   No Windows, use:

   ```bash
   super_trunfo.exe
   ```

3. O programa solicitará a entrada de dados para duas cartas, incluindo:
   - Estado (uma letra de A a H).
   - Código da carta (exemplo: A01).
   - Nome da cidade.
   - População (número inteiro).
   - Área (em km², número decimal).
   - PIB (em bilhões de reais, número decimal).
   - Número de pontos turísticos (número inteiro).

4. Após a entrada dosdados, o programa pedirá que o usuário escolha dois atributos para comparação (1: População, 2: Área, 3: PIB, 4: Número de Pontos Turísticos, 5: Densidade Demográfica). O segundo atributo deve ser diferente do primeiro.

5. O programa exibirá:
   - Os valores de cada atributo para ambas as cartas.
   - O vencedor de cada atributo individual (maior valor vence, exceto para densidade, onde o menor vence).
   - A soma dos valores dos atributos para cada carta.
   - O resultado final, indicando qual carta venceu com base na soma dos atributos ou se houve empate.

## Exemplo de Saída

Exemplo de interação com o programa:

```
Digite os dados da Carta 1:
Estado (A a H): A
Código da Carta (ex: A01): A01
Nome da Cidade: São Paulo
População: 12300000
Área (em km²): 1521
PIB (em bilhões de reais): 700
Número de Pontos Turísticos: 10

Digite os dados da Carta 2:
Estado (A a H): B
Código da Carta (ex: B02): B02
Nome da Cidade: Rio de Janeiro
População: 6700000
Área (em km²): 1200
PIB (em bilhões de reais): 400
Número de Pontos Turísticos: 15

Escolha o primeiro atributo para comparação:
1. População
2. Área
3. PIB
4. Número de Pontos Turísticos
5. Densidade Demográfica
Digite sua opção (1-5): 1

Escolha o segundo atributo para comparação (diferente do primeiro):
1. Área
2. PIB
3. Número de Pontos Turísticos
4. Densidade Demográfica
Digite sua opção (1-4): 3

Resultado da Comparação:
Carta 1: São Paulo (A)
Carta 2: Rio de Janeiro (B)

Atributos escolhidos:
1. População
2. PIB

Comparação Individual:
População:
Carta 1: 12300000.00
Carta 2: 6700000.00
Vencedor: São Paulo

PIB:
Carta 1: 700.00 bilhões de reais
Carta 2: 400.00 bilhões de reais
Vencedor: São Paulo

Soma dos Atributos:
Carta 1: 12300700.00
Carta 2: 6700400.00
Resultado Final: Carta 1 (São Paulo) venceu!
```

## Observações

- O programa calcula automaticamente a densidade demográfica (população / área) e o PIB per capita, mas apenas a densidade é usada como atributo opcional para comparação.
- O programa valida as escolhas de atributos, garantindo que sejam válidas e que o segundo atributo seja diferente do primeiro.
- Certifique-se de que seu terminal suporta codificação UTF-8 para exibir a saída corretamente.
- O código está documentado com comentários explicando a lógica de entrada, cálculo e comparação.
