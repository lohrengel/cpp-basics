//Taschenrechner
#include <iostream>

int main () {
	
	float zahl1 = 0, zahl2 = 0, erg;
	char op = '?';
	
	std::cout << "Bitte geben sie die erste Zahl ein " << std::endl;
	std::cin >> zahl1;
	
	std::cout << "Welchen Rechenoperator wollen Sie benutzen? +-*/ oder Modulo %" << std::endl;
	std::cin >> op;
	
	do 
	{
		std::cout << "Bitte geben sie die zweite Zahl ein " << std::endl;
		std::cin >> zahl2;
	} 
	while (op == '/' && zahl2 == 0);
	
	
	
	if (op == '+') 
	{
		erg = zahl1 + zahl2;
	} 
	else if (op == '-') 
	{
		erg = zahl1 - zahl2;
	} 
	else if (op == '*') 
	{
		erg = zahl1 * zahl2;
	}  
	else if (op == '/') 
	{
		erg = zahl1 / zahl2;
	} 
	else if (op == '%') 
	{
		int a = zahl1;
		int b = zahl2;
		int erga = a % b;
		int ergb = a / b;
		std::cout << "Das Ergebnis: " << ergb << " Rest " << erga;
	}
	else
	{
		std::cout<<"Das kann ich leider nicht rechnen!";
	}
	
	if (op != '%')
	{
		std::cout << "Das Ergebnis: " << erg;
	}
	
	return 0;
}
