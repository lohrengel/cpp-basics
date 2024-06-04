#include <iostream>


int main () {
	
	int i = 0, min = 0, max = 0, summe = 0, zahl = 0;
	float durch = 0.0;
	
	std::cout << "1. Zahl: \n";
	std::cin >> zahl;
	
	min = zahl;
	max = zahl;
	summe = zahl;
	
	for (i = 0; i < 16; i++) 
	{
		std::cout << "Zahl bitte: \n";
		std::cin >> zahl;
		summe += zahl;
		if (zahl > max) 
		{
			max = zahl;
		} 
		else if (zahl < min) 
		{
			min = zahl;
		}
	}
	
	durch = summe / i;
	std::cout<<"max: "<< max << std::endl;
	std::cout<<"min: "<< min << std::endl;
	std::cout<<"durchschnitt: "<< durch << std::endl;
	return 0;
}
