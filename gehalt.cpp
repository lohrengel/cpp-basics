#include <iostream>

int main () {
	
	float gehalt=0, jahresgehalt=0;
	
	char zeit='?';
	
	std::cout << "Bitte geben Sie ihr Gehalt ein: ";
	std::cin >> gehalt;
	
	std::cout << "Ist das der (s)tunden-, (w)ochen- oder (m)onatswert:";
	std::cin >> zeit;
	
	if (zeit == 's')
	{
		jahresgehalt=gehalt*2080;
	} 
	else if ( zeit == 'w')
	{
		jahresgehalt=gehalt*52;
	} 
	else if (zeit=='m')
	{
		jahresgehalt=gehalt*12;
	} 
	else 
		std::cout<<"Diese Auswahlmöglichkeit gabe es nicht";
		
	std::cout << "Ihr Jahresgehalt betraegt: " << jahresgehalt;
	
	return 0;
}
