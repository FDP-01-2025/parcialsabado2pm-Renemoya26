//Ejercicio 2-For
//Solicita un numero y muestra la suma de los digitos  de todos los numero del 1 hasta ese numero.
#include <iostream>
using namespace std;
int main(){
    //Declaramos las variables.
    int num , suma = 0 ;
    //Pedimos un numero al usuario.
    cout << "Ingrese un numero: ";
    cin >> num;
   //Iniciamos el bucle for
    for(num; num > 0; num /= 10) {
        suma += num % 10; 
    }
     // damos el resultado.
    cout << "La suma de los digitos es: " << suma << endl;
// se cierra el programa
    return 0;

}
