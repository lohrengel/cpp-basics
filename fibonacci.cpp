#include <iostream>

int main () 
{
	int i = 0 , speicher = 1;
	for (i=0; i < 4000000;i=i+speicher) 
	{
		speicher = i;
		
		std::cout << i;
	}
}
