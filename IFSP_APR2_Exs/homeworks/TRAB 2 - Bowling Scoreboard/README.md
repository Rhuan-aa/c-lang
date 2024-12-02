#Bowling Scoreboard

Este projeto implementa uma solução para calcular e exibir o placar de um jogo de boliche.
O programa lê uma sequência de pontuações de um jogo de boliche, calcula a pontuação total
e gera uma representação textual do placar.
## Funções

- int count_points(int score[], int size): Calcula a pontuação total do jogo de boliche.
- char* create_scoreboard(int score[], int size): Gera uma representação textual do placar.
- int* read_score(char score[], int* size): Lê uma sequência de pontuações de uma string e retorna um vetor de inteiros.
- int main(int argc, char const *argv[]): Função principal que executa a leitura, cálculo e exibição do placar.

## Entrada
O programa lê uma string que representa a sequência de pontuações de um jogo de boliche.

## Saída

O programa escreve duas linhas:
1. A primeira linha exibe a representação textual do placar.
2. A segunda linha exibe a pontuação total do jogo.

## Compilação e Execução

Para compilar e executar o programa, siga os seguintes passos:

1. Compile o programa utilizando um compilador C, como `gcc`:
```sh
gcc -o bowling_scoreboard bowling_scoreboard.c
```

2. Execute o programa:
```sh
./bowling_scoreboard
```
## Exemplo de Uso

```sh
./bowling_scoreboard
```

Saída esperada:
```
X_ | X_ | X_ | X_ | X_ | X_ | X_ | X_ | X_ | X X X
300
```

## Estrutura do Código
 
O código está estruturado da seguinte forma:
- **count_points**: Função que calcula a pontuação total do jogo de boliche.
- **create_scoreboard**: Função que gera uma representação textual do placar.
- **read_score**: Função que lê uma sequência de pontuações de uma string e retorna um vetor de inteiros.
- **main**: Função principal que executa a leitura, cálculo e exibição do placar.

## Licença
Este projeto está licenciado sob a [MIT License](LICENSE).

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues e pull requests.
 
## Autor
 
 Rhuan
 