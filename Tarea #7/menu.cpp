#include <iostream>
#include "producto.h"
#include "factura. h"



using namespace std;

extern void productos (int opcion);
extern void imprimaFactura();


	void menu ()
	{
	  	  int opcion = 0;
	
     	while (true)
	   {
		 
		 system ("cls");
		 
		 cout << "*****";
		 cout << "MENU";
		 cout << "*****";
		 cout << endl;
		
		 cout << "1- Bebidas calientes " << endl;
		 cout << "2- Bebidas frias " <<endl;
		 cout << "3- Reposteria " <<endl;
		 cout << "4- Imprimir Factura " << endl;
		 cout << "0- Salir" <<endl;
		 
		 cout << "Ingresar opcion:  ";
		 cin >> opcion;
		
		 if (opcion == 0)
		{
			break;
	    }
		if (opcion == 4)
		{
		  imprimaFactura();
		  
		}
		 else{
		 productos(opcion);
		 }
		
		
		 
        }
	} 
	
	   
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

