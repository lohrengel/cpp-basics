#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h> 

int main () {
	
	int a = 0, i =0, min=0, max=0, av=0, summe=0;
	
	std::cout << "Wir fuellen ein Array mit Zufallszahlen.\n";
	std::cout << "Wieviele stellen soll unser Array haben?\n";
	std::cin >> a;
	
	int myArray[a];
	
	std::srand(std::time(nullptr));
	
	
	std::cout<<"Zahlen werden generiert: \n";
	for (i=0; i<a; i++) {
		myArray[i] = rand()%a+1;
	}
	
	min=myArray[0];
	max=myArray[0];
	
	std::cout << std::endl;
	
	for (i=0; i<a; i++) 
	{
		std::cout << myArray[i] << " ";
		summe+=myArray[i];
		
		if (myArray[i]<min) 
		{
			min=myArray[i];
		} 
		else if (myArray[i]>max) 
		{
			max=myArray[i];
		}
		
		if (i>0 && i%10==0) 
		{
			std::cout<<std::endl;
		}
			
	}
	
	av=summe/a;
	
	std::cout << std::endl;
	std::cout << std::endl;
	 
	std::cout << "Max:" << max << std::endl;
	std::cout << "Min:" << min << std::endl;
	std::cout << "Durchschnitt:" << av << std::endl;
	
	
	return 0;
}
