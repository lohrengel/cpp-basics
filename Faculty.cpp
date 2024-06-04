#include <iostream>

int main (){

	int fak=0, erg=1;
	
	std::cout<<"Wir berechnen die Fakultät. Bitte Zahl eingeben:"<<std::endl;
	std::cin>>fak;
	
	for (int i =1; i<=fak; i++) 
	{
		erg*=i;
	}
	
	std::cout<<erg;
	
	return 0;
}
