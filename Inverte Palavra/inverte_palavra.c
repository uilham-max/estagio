
#include <stdio.h>
#include <string.h>

void inverterPalavra(char palavra[]) {
    int comprimento = strlen(palavra);
    int i, j;

    for (i = 0, j = comprimento - 1; i < j; i++, j--) {
        char temp = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = temp;
    }
}

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    inverterPalavra(palavra);

    printf("Palavra Invertida: %s\n", palavra);

    return 0;
}
