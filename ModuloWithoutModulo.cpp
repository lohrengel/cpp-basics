#include <iostream>

int main () {
	
	
	int a = 31, b = 8, c = 0;
	
	std::cout << "Bitte Dividend eingeben:";
	std::cin >> a;
	
	std::cout << "Bitte Divisor eingeben:";
	std::cin >> b;
	
	while (a >= b) 
	{
		a-=b;
		c++;
	}
	
	std::cout << "Ergebnis: " << c << " Rest " << a;
}
