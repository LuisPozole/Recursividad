#include <stdio.h>
void torres(int n, char origen, char auxiliar, char destino) {
    if (n == 1) {
        printf("Mover disco 1 de %c a %c\n", origen, destino);
        return;
    }
    torres(n - 1, origen, destino, auxiliar); 
    printf("Mover disco %d de %c a %c\n", n, origen, destino); 
    torres(n - 1, auxiliar, origen, destino); 
}
int main() {
    int n;
    printf("Introduce el numero de discos: ");
    scanf("%d", &n);
    torres(n, 'A', 'B', 'C');
    printf("Presiona Enter para salir...\n");
    getchar(); 
    getchar(); 
    
    return 0;
}
