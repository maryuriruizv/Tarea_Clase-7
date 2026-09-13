/*Ejercicio 1 
Autor: Maryuri Ruiz 
Fecha: 13 de septiembre

Enunciado:
    Suma y promedio de 3 números
    Desarrolla un programa que permita ingresar 3 números enteros y que use funciones
    para:
    • leer los números,
    • calcular la suma,
    • calcular el promedio,
    • mostrar los resultados.

E/P/S
*Entrada:
    - Ingreso de 3 numeros eteros
*Proceso:
    -Leer los numeros 
    -Calcular la suma
    -Calcular el promedio
    -Mostrar los resultados
*Salida:
    -Mostrar la suma y el promedio de los 3 numeros ingresados
*/

#include <iostream>
using namespace std;

int main(){
    //Declaramos las variables 
    int numeros[3];
    int suma = 0;
    double promedio;
    

    //llamamos a la funcion LeerNumeros 
    leerNumeros(numeros);

    //llamamos a la funcion calcularSuma
    suma = calcularSuma(numeros);

    //llamamos a la funcion calcularPromedio
    promedio = calcularPromedio(suma);

    //Mostramos los resultados
    cout << "La suma de los 3 numeros es: " << suma << endl;
    cout << "El promedio de los 3 numeros es: " << promedio << endl;

    return 0;
}



//Esta funcion lee los 3 numeros y los guarda en las variables originales
void leerNumeros(int numeros[]){
    for (int i = 0; i < 3; i++){
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
}

//Esta funcion calcula la suma de los 3 numeros y devuelve el resultado
int calcularSuma(int numeros[]){
    int suma = 0;
    for (int i = 0; i < 3; i++){
        suma += numeros[i];
    }
}

//Esta funcion calcula el promedio de los 3 numeros 
double calcularPromedio(int suma){
    return suma / 3.0;
}

//Esta funcion muestra los resultados de la suma y el promedio de los 3 numeros
void mostrarResultados(int suma, double promedio){
    cout << "La suma de los 3 numeros es: " << suma << endl;
    cout << "El promedio de los 3 numeros es: " << promedio << endl; 
}