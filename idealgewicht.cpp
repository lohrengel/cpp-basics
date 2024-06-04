#include <iostream>

int main () {
	
	int cm=0, ng=0, ig=0;
	char gesch='?';
	
	std::cout << "Wie gross sind sie in cm?:";
	std::cin >> cm;
	std::cout << "Ihr Geschlecht: ";
	std::cin >> gesch;
	ng = cm - 100;
	
	if (gesch=='w') 
	{
		ig = ng*.85;
	} 
	else 
	{
		ig = ng*.9;
	}
	
	std::cout << "Ihr Normalgewicht: " << ng <<" kg\n";
	std::cout << "Ihr Idealgewicht: " << ig << " kg";
	return 0;
}
