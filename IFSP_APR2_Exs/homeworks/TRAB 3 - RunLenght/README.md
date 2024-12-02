# RLE (Run-Length Encoding) Image Compression

Este projeto implementa uma solução para compressão e descompressão de imagens utilizando o algoritmo de Run-Length Encoding (RLE). O programa lê uma imagem no formato PGM (Portable Gray Map), comprime ou descomprime a imagem e gera um arquivo de saída.

## Funções

- **int** `**createIntMatrix(int lines, int columns)`:
    Cria e aloca dinamicamente uma matriz de inteiros com o número especificado de linhas e colunas.

- **void** `freeIntMatrix(int** mat, int linhas, int colunas)`:
    Libera a memória alocada para uma matriz de inteiros.

- **char*** `**createStrMatrix(int lines, int columns, int profundidade)`:
    Cria e aloca dinamicamente uma matriz de strings com o número especificado de linhas, colunas e profundidade.

- **void** `freeStrMatrix(char*** mat, int linhas, int colunas)`:
    Libera a memória alocada para uma matriz de strings.

- **void** `encryptLine(int count, FILE* zippedImage, int** mat, int i, int j)`:
    Codifica uma linha da imagem utilizando RLE e escreve no arquivo comprimido.

- **void** `unzipImage(FILE* zippedImage, FILE* image, int linhas, int colunas, int profundidade)`:
    Descomprime uma imagem codificada em RLE e escreve no arquivo de imagem.

- **void** `allocateP2(FILE* image, char*** matrix, int linhas, int colunas)`:
    Aloca e escreve os dados descomprimidos no formato P2 (PGM).

- **void** `zipImage(FILE* zippedImage, FILE* image, int linhas, int colunas, int profundidade)`:
    Comprime uma imagem no formato PGM utilizando RLE e escreve no arquivo comprimido.

- **void** `allocateP8(FILE* zippedImage, int** matrix, int linhas, int colunas, int profundidade)`:
    Aloca e escreve os dados comprimidos no formato P8 (RLE).

- **void** `clean_buffer(FILE *img)`:
    Limpa o buffer de entrada até encontrar uma nova linha.

- **int** `main(int argc, char const *argv[])`:
    Função principal que executa a leitura do arquivo de entrada, identifica o tipo de imagem (P2 ou P8), e chama as funções apropriadas para compressão ou descompressão.

## Entrada

O programa lê um arquivo de imagem no formato PGM (P2 ou P8).

## Saída

O programa gera um arquivo comprimido ou descomprimido, dependendo do tipo de entrada.

## Compilação e Execução

Para compilar e executar o programa, siga os seguintes passos:

1. Compile o programa utilizando um compilador C, como `gcc`: