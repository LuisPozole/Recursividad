#include <stdio.h>


int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void imprimirFibonacci(int i, int n) {
    if (i < n) {
        int valor = fibonacci(i);
        if (valor > 100) {
            return; 
        }
        printf("%d ", valor);
        imprimirFibonacci(i + 1, n); 
    }
}

int main() {
    int n;
    
    printf("Ingresa el numero de terminos que deseas en la secuencia de Fibonacci: ");
    scanf("%d", &n);

    printf("Secuencia de Fibonacci (hasta 100):\n");
    imprimirFibonacci(0, n);

    return 0;
}