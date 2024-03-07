
#include <stdio.h>
#include <string.h>

// Função para inverter uma palavra
void inverterPalavra(char palavra[]) {
    int comprimento = strlen(palavra);
    int i, j;

    // Trocar os caracteres da palavra da posição inicial até a metade
    for (i = 0, j = comprimento - 1; i < j; i++, j--) {
        char temp = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = temp;
    }
}

int main() {
    char palavra[100];

    // Solicitar a entrada da palavra
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    // Inverter a palavra
    inverterPalavra(palavra);

    // Exibir a palavra invertida
    printf("Palavra Invertida: %s\n", palavra);

    return 0;
}
