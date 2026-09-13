/*Ejercicio 2
Autor: Maryuri Ruiz 
Fecha: 13 de septiembre

Enunciado:
    Desarrolla un programa que permita ingresar dos números enteros y determine cuál
    de los dos es mayor.
    El programa debe estar modularizado usando funciones para:
    • leer los datos,
    • comparar los valores,
    • mostrar el resultado.
    Si ambos números son iguales, el programa también debe indicarlo.

E/P/S
*Entrada:
    - Ingreso de 2 numeros enteros
*Proceso: 
    -Leer los numeros 
    -comparar los valores
    -mostrarel resultado
*Salida:
    -Mostrar cual de los 2 numeros es mayor o si son iguales
*/

#include <iostream>
using namespace std;

//Prototipos de funciones
void leerNumeros(int &num1, int &num2);
void compararValores(int num1, int num2);
void mostrarResultado(int num1, int num2, int mayor);

int main(){
    //Declaramos las variables
    int num1, num2, mayor;

    //llamamos a la funcion leerNumeros
    leerNumeros(num1, num2);


}

//Funcion para leer los numeros