#include <stdio.h>

void decimalABinario(int n) {
    if(n == 0){
        return;
    }
    decimalABinario(n / 2);
printf("%d", n % 2);
}



int main() {
    int num = 0;
    printf("ingresa el numero que deseas convertir a binario: ");
    scanf("%d", &num);
    if (num == 0){
        printf("el valor no puede ser 0");
    }
    else{
        if (num < 0){
          printf( "el valor no puede ser negativo");
        }
        else{
    printf("la representacion binaria de %d es: ", num);
    decimalABinario(num);
    printf("\n");
    return 0;
        }
    }
}