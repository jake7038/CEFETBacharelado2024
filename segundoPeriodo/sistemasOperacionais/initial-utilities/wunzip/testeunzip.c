#include <stdio.h>

int main(int argc, char *argv[]) {
    unsigned char repeat_count;  // Buffer para armazenar o número de repetições
    unsigned char character;     // Buffer para armazenar o caractere
    FILE *file;

    // Verifica se o arquivo foi passado como argumento
    if (argc != 2) {
        printf("Uso: %s <arquivo>\n", argv[0]);
        return 1;
    }

    // Abre o arquivo em modo binário (modo 'rb' é necessário para arquivos binários)
    file = fopen(argv[1], "rb");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }
     while (fread(&buffer, 1, 1, file) == 1) {
        // Se o byte for imprimível (entre 32 e 126 no código ASCII)
        if (buffer >= 32 && buffer <= 126) {
            printf("%c", buffer);  // Imprime o caractere ASCII correspondente
        } else {
            // Caso contrário, imprime o byte em formato hexadecimal (representação legível de não-imprimíveis)
            printf("\\x%02x", buffer);
        }

    fclose(file);  // Fecha o arquivo
    return 0;
}

