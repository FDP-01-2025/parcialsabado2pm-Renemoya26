//Ejercicio 1
//Solicita un color (Rojo , verde , azul) con numero (1 , 2 , 3) y muestra el significado emocional de ese color.
#include <iostream>
using namespace std ;
int main(){
    //Declaramos las varibales de nuestro programa.
    int color , numero , significado ;
    //Pedimmos al usario que elija un numero segun el significado de la emocion que quiera.
    cout << "Elija un color segun la numeracion" << endl;
    cout << "Rojo 1" << endl;
    cout << "Verde 2" << endl;
    cout << "Azul 3" << endl;
    cout <<"Ingrese un numero del 1 al 3" << endl;
    cin >> numero ;
    //Con el swich y con cada case dameos el significado
    switch (numero) {
        case 1:
        cout << "Usted a seleccionado el color rojo: El cual tiene como signicado emocional diferentes emociones como la pasio el amor o otros casos la ira." << endl;
        break ;

        case 2:
        cout << "Ustded a seleccionado el color verde: El cual tiene diferentes significados ya puede ser el asco la paz y la naturaleza" << endl;
        break ;

        case 3:
        cout << "Ustded a seleccionado el color Azul: El cual tiene diferentes significados ya puede ser la triztesa tambien puede llegar a representar el mar ." << endl;
        break ;
        
        default:
        cout << "opcion no valida " << endl;
        break ;
        }
    





 // se cierra el programa.
   return 0;
}