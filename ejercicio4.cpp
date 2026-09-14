/*Ejercicio 4
Autor: Maryuri Ruiz 
Fecha: 13 de septiembre

Enunciado:
    Desarrolla un programa que permita ingresar dos números enteros y luego
    intercambiar sus valores usando una función.
    El programa debe:
    • mostrar los valores antes del intercambio,
    • realizar el intercambio usando una función,
    • mostrar los valores después del intercambio.

E/P/S
*Entrada:
    - Ingreso de 2 numeros enteros 
*Proceso:
    -Mostrar los valores antes del intercambio
    -Realizar el intercambio usando una funcion
    -Mostrar los valores despues del intercambio
*Salida:
    -Mostrar los valores antes y despues del intercambio
*/  

#include <iostream>
using namespace std;

//Prototipos de funciones
void leerNumeros(int &num1, int &num2);
void intercambiarValores(int &num1, int &num2);

int main(){
    //Declaramos las variables
    int num1, num2;

    //llamamos a la funcion leerNumeros
    leerNumeros(num1, num2);

    //Mostramos los valores antes del intercambio
    cout << "Valores antes del intercambio: " << endl;
    cout << "Numero 1: " << num1 << endl;
    cout << "Numero 2: " << num2 << endl;

    //llamamos a la funcion intercambiarValores
    intercambiarValores(num1, num2);

    //Mostramos los valores despues del intercambio
    cout << "Valores despues del intercambio: " << endl;
    cout << "Numero 1: " << num1 << endl;
    cout << "Numero 2: " << num2 << endl;
    
}