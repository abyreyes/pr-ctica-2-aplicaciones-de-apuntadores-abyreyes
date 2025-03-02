// 10. Ordenamiento con Apuntadores (Burbuja)
#include <stdio.h>

void ordenarBurbuja(int *arr, int tamaño) {
    // Implementar algoritmo de ordenamiento aquí
    for (int i = 0; i < tamaño - 1; i++) {
        for (int j = 0; j < tamaño - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) { // Comparación usando apuntadores
                // Intercambio de valores usando apuntadores
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void mostrarArreglo(int *arr, int tamaño) {
    for (int i = 0; i < tamaño; i++) {
        printf("%d ", *(arr + i)); // Accediendo con apuntadores
    }
    printf("\n");
}

int main() {
    int arr[] = {34, 12, 56, 78, 23};
    // Código para ordenar y mostrar el arreglo
    int tamaño = sizeof(arr) / sizeof(arr[0]);
    
    printf("Arreglo antes de ordenar: \n");
    mostrarArreglo(arr, tamaño);
    
    ordenarBurbuja(arr, tamaño);
    
    printf("Arreglo después de ordenar: \n");
    mostrarArreglo(arr, tamaño);
    
    return 0;
}
