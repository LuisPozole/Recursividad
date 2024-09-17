#include <stdio.h>

//int factorial ( int n) {
//    if (n == 0 || n ==1) {
//        return 1;
//    }
//    return n * factorial(n - 1);
//}
int factorial(int i, int resultado, int num){
    if (i > num ) {
        return resultado;
    }
    resultado *= i;

    factorial (i+1, resultado, num);
    }

int main () {
    int num = 0;
    printf("ingrese el numero del que desea sacar factorial: ");
    scanf("%d", &num);
    if (num >= 0){   
    printf("el factorial de %d e: %d\n", num, factorial(1,1, num));
    return 0;
    }
    else{
        printf("el valor no puede ser negativo");
    }
}