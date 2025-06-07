#include <iostream>
using namespace std;

int main(){
    int  numero;

    cout<<"Numeros pares desde 0"<< endl;
    while (numero != 0)
    {
     
      cout<<"El programa no termina hasta que ingresas 0 \n Salir del programa \n ingresa tu numero: ";
      cin >> numero;

      for (int i = 0; i <= numero; i++)
      {
        
        cout<< i << endl;
      }
    }
    
    cout<<"El progama termino";
    return 0;
}