#include <iostream>
#include "snake.h"
#include "startship.h"

using namespace std;

void menu()
{
  int opcion = 0;

  while(true)
   {
      system("cls");

      cout << "***************";
      cout << "MENU DEL JUEGO";
      cout << "***************";
      cout << endl ;
      cout << "1. Snake" << endl;
      cout << "2. StarShip" << endl;
      cout << "0. Salir" << endl;
      cout << endl;
      cout << "ingrese una opcion: ";
      cin >>opcion;

      if (opcion == 0)
      {
         break;
      }
      if (opcion == 1)
      {
        system("cls");
        snake();
        system("pause");
      }
     if (opcion == 2)
      {
        system("cls");
        starShip();
        system("pause");
      }
     if (opcion < 0 ||  opcion > 2)
      {
        system("cls");
        cout<<"Debe de ingresar una opcion valida"<<endl;
        break;
      }
    }
}