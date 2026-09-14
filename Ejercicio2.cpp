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

    //llamamos a la funcion compararValores
    compararValores(num1, num2);

    //llamamos a la funcion mostrarResultado
    mostrarResultado(num1, num2, mayor);

return 0;
}

//Funcion para leer los numeros
void leerNumeros(int &num1, int &num2){
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
}

//Funciones para comparar los valores
void compararValores(int num1, int num2){;
    cout << "Comparando los valores..." << endl;
}

//Funcion para mostrar el resultado
void mostrarResultado(int num1, int num2, int mayor){
    if (num1 > num2){
        cout << "El primer numero es mayor que el segundo." << endl;
    }else if (num2 > num1){
        cout << "El segundo numero es mayor que el primero." << endl;
    }else if (num1 == num2){
        cout << "Ambos numeros son iguales." << endl;
    }
}