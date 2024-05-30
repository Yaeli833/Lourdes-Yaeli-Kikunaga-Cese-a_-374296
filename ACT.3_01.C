//Lourdes Yaeli Kikunaga Ceseña   374296
//Grupo:932

#include <stdio.h>

// Función para sumar dos números binarios
int sumaBinaria(int a, int b) 
{
    return a + b;
}

// Función para restar dos números binarios
int restaBinaria(int a, int b) 
{
    return a - b;
}

// Función para multiplicar dos números binarios
int multiplicacionBinaria(int a, int b) 
{
    return a * b;
}

// Función para dividir dos números binarios
int divisionBinaria(int a, int b) 
{
    return a / b;
}

int main() 
{
    // Ejemplo de uso
    int num1 = 101; // Representa el número binario 5
    int num2 = 110; // Representa el número binario 6

    // Realizar operaciones binarias y mostrar resultados
    printf("Suma: %d\n", sumaBinaria(num1, num2)); // Resultado debería ser 11 (binario 3)
    printf("Resta: %d\n", restaBinaria(num1, num2)); // Resultado debería ser -9 (binario -1)
    printf("Multiplicacion: %d\n", multiplicacionBinaria(num1, num2)); // Resultado debería ser 600 (binario 110010100)
    printf("Division: %d\n", divisionBinaria(num1, num2)); // Resultado debería ser 0 (binario 0)

    return 0;
}

