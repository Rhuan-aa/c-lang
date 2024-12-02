# Círculo do Milhão

## Descrição do Trabalho

Este projeto implementa uma solução para o problema do "Círculo do Milhão". O problema consiste em um bilionário que deseja distribuir um milhão de dólares para uma pessoa em um círculo de N pessoas. O bilionário elimina pessoas do círculo seguindo duas regras:

1. O bilionário elimina uma pessoa do círculo e sempre pula a seguinte, até sobrar apenas uma pessoa, que é a ganhadora do prêmio.
2. O bilionário sempre começa eliminando a pessoa de número 2.

Por exemplo, considerando N = 1000, o bilionário elimina a pessoa número 2, seguida da 4, 6, 8, ..., 996, 998, 1000. Nesse momento, ele pula a número 1 e elimina a pessoa número 3, número 7 e assim sucessivamente.

## Objetivo

O objetivo do programa é, dado o número N de pessoas no círculo, informar:
- Qual o número da pessoa que irá ganhar o prêmio.
- Qual a x-ésima pessoa a ser eliminada.

## Entrada

O programa lê duas entradas:
1. Um número inteiro N, que representa o número de pessoas no círculo.
2. Um número inteiro X, que representa a x-ésima pessoa a ser eliminada.

## Saída

O programa escreve duas linhas:
1. A primeira linha indica a x-ésima pessoa a ser eliminada.
2. A segunda linha indica o número da pessoa ganhadora do prêmio.

## Compilação e Execução

Para compilar e executar o programa, siga os seguintes passos:

1. Compile o programa utilizando um compilador C, como `gcc`:
    ```sh
    gcc -o circulo_do_milhao circulo_do_milhao.c
    ```

2. Execute o programa:
    ```sh
    ./circulo_do_milhao
    ```

3. Insira o número de pessoas no círculo (N) e o número da eliminação desejada (X) quando solicitado.

## Exemplo de Uso

```sh
Digite o numero de pessoas no circulo: 1000
Digite o numero da eliminacao que deseja: 500
```

Saída esperada:
```
500
997
```

## Estrutura do Código

O código está estruturado da seguinte forma:

- **T_CIRCLE**: Estrutura que representa o círculo de pessoas.
- **create_circle**: Função que cria e inicializa o círculo de pessoas.
- **elimination**: Função que realiza o processo de eliminação das pessoas no círculo até restar apenas uma.
- **main**: Função principal que lê as entradas, cria o círculo, executa a eliminação e imprime os resultados.

## Licença

Este projeto está licenciado sob a [MIT License](LICENSE).

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues e pull requests.

## Autor

Rhuan
