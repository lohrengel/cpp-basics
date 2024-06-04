#include <iostream>
#include <cstring>

int main ( ) {
	
	char arr[20];
	int i = 0;
	
	std::cout << "Bitte irgendeinen Text eingeben: ";
	std::cin >> arr;
	
	std::cout << "Sie haben eingegeben: \n" << arr;
	std::cout << "String in Grossbuchstaben: \n";
	
	for (i = 0; i < strlen(arr); i++) 
	{
		putchar(toupper(arr[i]));
	}
	
}
