#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int dado1,dado2;
string lanzar;



int main()
{
    while (true)
    {
        cout<<"Partida de Dados "<<endl <<endl  <<endl;
        
		cout<<"-  GANO  Con Los Numeros  #3,  #5,  #7 -"<<endl  <<endl;
        cout<<"-  PERDIO Con Los Numeros #2, #11, #13 -"<<endl <<endl <<endl  <<endl;
        
        cout<<" LANZAR LOS DADOS: "<<endl <<endl;
        cin>>lanzar;
        system ("cls");
        for (int i=0;i<=1;i++)
        {
            srand (time (0));
            dado1=rand()%(6)+1;
            dado2=rand()%(6)+1; 
            
        }
        cout<<"Dado 1 ["<<dado1<<"]";
        cout<<" Dado 2 ["<<dado2<<"]"<<endl;
        cout<<"LA SUMA DE LOS DADOS ES: ["<< dado1 + dado2 << "]"<<endl <<endl;
        if (dado1+dado2 == 3 or dado1+dado2 == 5 or dado1+dado2 == 7)
        {
            cout<<"JUGADOR 1 YO GANA / JUGADOR 2 PIERDE"<<endl <<endl;
            break;
            
        }
        if (dado1+dado2 == 2 or dado1+dado2 == 11 or dado1+dado2 == 13)
        {
            cout<<"GANA EL JUGADOR 2 / USTED PIERDE"<<endl <<endl;
            break;
            
            
        }
        cout<<"LANZA NUEVAMENTE"<<endl <<endl;
        system("pause");
        system ("cls");
    }   
}

