#include <iostream>

int main () 
{
	int a,b;
	
	for (b=1; b<=20; b++) 
	{
		for (a=1;a<=20;a++)
		{
			std::cout << a << " x " << b << " = " << a*b << std::endl;
		}
	}
}
