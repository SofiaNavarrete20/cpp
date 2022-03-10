#include <iostream>



using namespace std;

extern void agregarProducto (string descripcion, int cantidad, double precio)

void productos (int opcion)
{
	system ("cls");
	int opcionProducto = 0;
	
      switch (opcion)
	  {
	  	     case 1:
	  	     cout <<endl;
		     cout << "BEBIDAS CALIENTES" <<endl;
	         cout << "*****************" <<endl;
	         cout << "1 Chocolate caliente" <<endl;
	         cout << "2 Te chai" << endl;
	         cout << "Ingrese la opcion de su preferencia: ";
	         cin  >>opcionProducto;
	         
	         switch
			 {
			 	case 1
			 	agregarProducto ("1 Chocolate caliente - L.38.00 , 1,38");
			 	break;
			 	
			 	case 2
			 	agregarProducto ("2 Te de chai- L.45.00, 2, 45");
			 	break;
			 	
			 	
			 	default:
				 {
				 cout << endl;
				 cout << "OPCION NO VALIDA"	<< endl;
				 
				 system ("pause");
				 return ;
				 break;
				 
			 	
			 }
			  
			  cout << endl;
			  cout << "Producto agregado con exito " << endl;
			  system ("pause");
			  
		  	 
			default:
				cout << "OPCION NO VALIDA"	<< endl;
				system ("pause");
				 return ;
				 break;
				
		  break;
			
			    
			 	
		  
	  }
}
	
	
	
	
}




