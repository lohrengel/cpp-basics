#include <iostream>

int main () {
	
	int i = 0, summe = 0;
	
	for (i = 0; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			summe += i;
		}
	}
	std::cout << "Die Summe aller Zahlen die durch 3 oder 5 teilbar sind ist:" << summe;
}
