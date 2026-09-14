/*Ejercicio 5
Autor: Maryuri Ruiz 
Fecha: 13 de septiembre

Enunciado:
    Desarrolla un programa que pida al usuario un número entero positivo n y luego
    incremente un contador desde 0 hasta n, usando una función que actualice el valor
    del contador.
    El objetivo es que practiques el uso de paso por referencia para modificar una
    variable desde una función.
    El programa debe mostrar el valor del contador en cada incremento.

E/P/S
*Entrada:
    - Ingreso de un numero entero positivo n
*Proceso:
    -Incrementar un contador desde 0 hasta n usando una funcion que actualice el valor del contador
*Salida:
    -Mostrar el valor del contador en cada incremento
*/  

#include <iostream>
using namespace std;

//Prototipo de la funcion
void incrementarContador(int n, int &contador);


int main(){
    //Declaramos las variables
    int n, contador = 0;

    //Pedimos al usuario que ingrese un numero entero positivo n
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    //llamamos a la funcion incrementarContador
    incrementarContador(n, contador);

    return 0;
}


//Funcion para incrementar el contador
void incrementarContador(int n, int &contador){
    //Recorremos desde 0 hasta n
    for (int i = 0; i <= n; i++){
        //Actualizamos el valor del contador
        contador = i;
        //Mostramos el valor del contador en cada incremento
        cout << "Contador: " << contador << endl;
    }
}

