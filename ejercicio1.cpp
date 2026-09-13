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

}


//Esta funcion lee los 3 numeros y los guarda en las variables originales
void leerNumeros(int numeros[]){
    for (int i = 0; i < 3; i++){
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
}