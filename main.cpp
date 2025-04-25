#include <iostream>

using namespace std;

double sumar(double a, double b) {
    return a + b;
}





int main()
{
    double num1;
    double num2;
    int opcion;

    cout << "Porfavor ingresa el primer numero" << endl;
    cin >> num1;
    cout << "Porfavor ingresa el primer numero" << endl;
    cin >> num2;
    cout << "Que quieres hacer" << endl;
    cin >>opcion;

    switch(opcion){

case 1:

    cout << "la respuesta es: " <<sumar(num1,num2) <<endl;


default:
    cout << "Opción no válida." << endl;
            break;
    }
    return 0;
}
