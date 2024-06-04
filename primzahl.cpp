//Primzahlen erkennen:

#include <iostream>
#include <cmath>

int main (){
	unsigned long long zahl;
	int i, counter = 0;
	
	std::cout << "Wir wollen ueberpruefen ob eine Zahl eine Primzahl ist. Bitte gib eine Zahl ein:";
	std::cin >> zahl;
	
	
	if (zahl % 2 == 0) 
	{
		counter++;
	}
	for (i = 3; i < sqrt(zahl) + 1; i += 2) 
	{
		if (zahl % i == 0) 
		{
			counter++;
		} 
	}
	
	if (counter == 0) 
	{
		std::cout << "Die Zahl ist eine Primzahl" << std::endl;
	} 
	else 
	{
		std::cout << "Die Zahl ist keine Primzahl";
	}
	
	return 0;
}
