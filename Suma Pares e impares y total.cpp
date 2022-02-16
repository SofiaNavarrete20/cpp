#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) 
{
	//Datos de entrada
		int pares= 0, impares= 0, total=0;
		
		
	
	  //Proceso
	 for (int i=0; i <= 10;  i++)
	 {
	 	
	 	if ( i % 2 == 0) {
	 		pares = pares +i;
		 }
	    	cout << i << " ";
		 
	 	
	 }
	
	for (int i = 1; i <= 10; i++) 
    {
        if (i % 2 == 1){
            impares = impares + i;
        }
        cout << i << "  ";
    }
    
    //Proceso
     total=pares+impares;
     
     cout <<endl;
	
	
	
	//Datos de salida
	cout  << " \n Total pares :  " << pares;
	cout  << " \n Total impares :  " <<impares;
	cout  << " \n suma de pares e impares :  " << total;
	
	

	
	return 0;
}
