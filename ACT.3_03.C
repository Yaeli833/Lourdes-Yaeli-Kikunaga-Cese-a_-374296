//Lourdes Yaeli Kikunaga Ceseña   374296
//Grupo:932

#include <stdio.h>

// Estructura para representar un número binario de punto flotante
typedef struct 
{
    int parte_entera;
    int parte_decimal;
} BinarioPuntoFlotante;

// Función para sumar dos números binarios de punto flotante
BinarioPuntoFlotante sumaBinariaPuntoFlotante(BinarioPuntoFlotante a, BinarioPuntoFlotante b) 
{
    BinarioPuntoFlotante resultado;
    resultado.parte_entera = a.parte_entera + b.parte_entera;
    resultado.parte_decimal = a.parte_decimal + b.parte_decimal;

    // Ajustar la parte decimal si supera 1
    if (resultado.parte_decimal >= 2) 
    {
        resultado.parte_decimal -= 2;
        resultado.parte_entera += 1;
    }

    return resultado;
}

// Función para restar dos números binarios de punto flotante
BinarioPuntoFlotante restaBinariaPuntoFlotante(BinarioPuntoFlotante a, BinarioPuntoFlotante b) 
{
    BinarioPuntoFlotante resultado;
    resultado.parte_entera = a.parte_entera - b.parte_entera;
    resultado.parte_decimal = a.parte_decimal - b.parte_decimal;

    // Ajustar la parte decimal si es negativa
    if (resultado.parte_decimal < 0) 
    {
        resultado.parte_decimal += 2;
        resultado.parte_entera -= 1;
    }

    return resultado;
}

int main() 
{
    // Ejemplo de uso
    BinarioPuntoFlotante num1 = {1, 1}; // Representa 1.1 en binario
    BinarioPuntoFlotante num2 = {0, 1}; // Representa 0.1 en binario

    // Realizar operaciones binarias con punto flotante y mostrar resultados
    BinarioPuntoFlotante suma = sumaBinariaPuntoFlotante(num1, num2); // Resultado debería ser 2.0
    BinarioPuntoFlotante resta = restaBinariaPuntoFlotante(num1, num2); // Resultado debería ser 1.0

    printf("Suma: %d.%d\n", suma.parte_entera, suma.parte_decimal);
    printf("Resta: %d.%d\n", resta.parte_entera, resta.parte_decimal);

    return 0;
}
