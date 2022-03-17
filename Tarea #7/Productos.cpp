#include <iostream>
#include "productos.h"
#include "factura.h"

using namespace std;



void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1 - Te de chai" << endl;
        cout << "2 - chocolate caliente" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Te de chai - L 40.00", 1, 40);
            break;
        case 2:
            agregarProducto("1 chocolate caliente - L 30.00", 1, 30);
            break;        
        default:
            {
                cout << "OPCION NO VALIDA";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        
        break;
    }
    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1 - Mochaccino" << endl;
        cout << "2 - granita de mora" << endl;
        cout << "3 - Frappe caramelo" << endl;
        cout << endl;
        
        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
        
        if(opcionProducto == 1){
        	agregarProducto("1 Mochaccino - L 63.00", 1, 63);
		} else if(opcionProducto == 2){
			agregarProducto("1 granita de mora - L 52", 1, 52);
		} else if(opcionProducto == 3){
			agregarProducto("1 Frappe caramelo - L 80.00", 1, 80);
		} else {
			cout << "OPCION NO VALIDA" << endl;
			return;
		}
        
        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        break;
    }
    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "1 - Dona" << endl;
        cout << "2 - rollos de canela" << endl;
        cout << endl;
        
        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
        
        if(opcionProducto == 1){
        	agregarProducto("1 Dona - L 20.00", 1, 20);
		} else if(opcionProducto == 2){
			agregarProducto("1  rollos de canela - L 30.00", 1, 30);
		} else {
			cout << "OPCION NO VALIDA" << endl;
			return;
		}
        
        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        break;
    }        
    default:
        break;
    }
}



