// 11. Buscar en un Arreglo
#include <stdio.h>

int *buscarElemento(int *arr, int tamaño, int valor) {
    // Implementar búsqueda aquí
    for (int i = 0; i < tamaño; i++) {
        if (arr[i] == valor) {
            return &arr[i]; // Retorna la dirección de memoria del elemento encontrado
        }
    }
    return NULL; // Retorna NULL si no se encuentra el elemento
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    // Código para buscar un número y mostrar su dirección
    int tamaño = sizeof(arr) / sizeof(arr[0]);
    int valor;

    rintf("Ingrese un número a buscar: ");
    scanf("%d", &valor);
    
    int *direccion = buscarElemento(arr, tamaño, valor);
    
    if (direccion != NULL) {
        printf("El número %d se encuentra en la dirección de memoria: %p\n", valor, (void*)direccion);
    } else {
        printf("El número %d no se encuentra en el arreglo.\n", valor);
    }

    
    return 0;
}
