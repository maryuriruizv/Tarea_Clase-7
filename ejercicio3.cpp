/*Ejercicio 3
Autor: Maryuri Ruiz 
Fecha: 13 de septiembre

Enunciado:
    Desarrolla un programa que permita ingresar la base y la altura de un rectángulo.
    Usa funciones para:
    • leer los datos,
    • calcular el área,
    • mostrar el resultado.
    El programa debe trabajar con valores reales si el usuario ingresa decimal.

E/P/S
*Entrada:
    - Ingreso de la base y la altura del rectangulo      
*Proceso:
    -Leer los datos
    -Calcular el area
    -Mostrar el resultado
*Salida:
    -Mostrar el area del rectangulo
*/  

#include <iostream>
using namespace std;

//Prototipos de funciones
void leerDatos(float &base, float &altura);
float calcularArea(float base, float altura);
void mostrarResultado(float area);

int main(){
    //Declaramos las variables
    float base, altura, area;

    //llamamos a la funcion leerDatos
    leerDatos(base, altura);

    //llamamos a la funcion calcularArea
    area = calcularArea(base, altura);

    //llamamos a la funcion mostrarResultado
    mostrarResultado(area);

    return 0;
}

//Funcion para leer los datos
void leerDatos(float &base, float &altura){
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;
}

//Funcion para calcular el area
float calcularArea(float base, float altura){
    return base * altura;
}

//Funcion para mostrar el resultado
void mostrarResultado(float area){
    cout << "El area del rectangulo es: " << area << endl;
}
