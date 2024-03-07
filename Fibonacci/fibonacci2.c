#include <stdio.h>


int estaNaFibonacci(int numero) {
    int fib1 = 0, fib2 = 1, proximoTermo;

    while (fib1 <= numero) {
        if (fib1 == numero) {
            return 1;
        }

        proximoTermo = fib1 + fib2;
        fib1 = fib2;
        fib2 = proximoTermo;
    }

    return 0;
}

int main() {
    int numero;


    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (estaNaFibonacci(numero)) {
        printf("%d esta presente na sequencia de Fibonacci.\n", numero);
    } else {
        printf("%d nao esta presente na sequencia de Fibonacci.\n", numero);
    }

    return 0;
}
