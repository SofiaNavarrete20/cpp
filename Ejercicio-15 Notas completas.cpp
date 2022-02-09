#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main(int argc, char** argv)

 {
	int nota=0;
	
	cout << "Ingrese la nota que obtuvo: ";
	cin  >>nota;
	
	//Proceso
	
	if (nota > 100  || nota < 0)
	{
	 cout<< "Ingrese una nota de 0 a 100:  ";
	}
	 else
	     
	     if(nota >= 96  && nota <=100)	
		 {
		 	cout<< "Obtuviste una A++";
		 }
	      else
	           if (nota >=95  && nota <=94) 
			   {
			   	 cout<< "Obtuviste una A+";  
			   }
	            else
	                 if (nota >=86  && nota <=90) 
					 {
					 	cout<< "Obtuviste una A";  
					 }
	                  else
	                       if (nota >=80  && nota <=84)      
						   {
						   	 cout<< "Obtuviste una A-";  
						   }
	                        else
	                             if (nota >=75  && nota <=80)
								 {
								 	cout<< "Obtuviste una B"; 
								 }
	                              else
	                                   if(nota >=65  && nota <=70)
									   {
									   	 cout<< "Obtuviste una B-";  
									   }
	                                     else
	                                          if (nota >=65  && nota <=60)
											  {
											  	cout<< "Obtuviste una C";
											  }
	                                           else
	                                                if (nota >=55  && nota <=50)
													{
														cout<< "Obtuviste una C-";
													}
	                                                 else
	                                                      if (nota >=50  && nota <=45) 
														  {
														  	cout<< "Obtuviste una D+";
														  }
	                                                       else
	                                                            if (nota >=40  && nota <=35) 
																{
																  cout<< "Obtuviste una D-";
																}
	                                                             else
	                                                                  if (nota >=35  && nota <=30)
																	  {
																	  	cout<< "Obtuviste una E+";
																	  }
	                                                                   else 
	                                                                        if (nota >=30  && nota <=25)
																			{
																				cout<< "Obtuviste una E-";
																			}
	                                                                         else
																			      if (nota >=20 && nota <=15)
																				  {
																				  	cout<< "Obtuviste una F+";
																				  }	
																		           else
																		                if (nota >=10 && nota <=5) 
																						{
																							cout<< "Obtuviste una F-"; 
																						}
	                                                                                     else
	                                                                                          if (nota >=5 && nota <=0)
																							  {
																							  	cout<< "Obtuviste una F--";
																							  }
	                                                                                           else
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

