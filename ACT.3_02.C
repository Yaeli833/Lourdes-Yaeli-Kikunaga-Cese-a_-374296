//Lourdes Yaeli Kikunaga Ceseña   374296
//Grupo:932

#include <stdio.h>

// Función para convertir un número binario a su complemento a dos
int complementoADos(int num) 
{
    return ~num + 1;
}

int main() 
{
    // Ejemplo de uso
    int numBinario = 101; // Representa el número binario 5

    // Convertir a complemento a dos y mostrar resultado
    printf("Complemento a dos: %d\n", complementoADos(numBinario)); // Resultado debería ser -5

    return 0;
}
