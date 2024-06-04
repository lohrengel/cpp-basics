#include <iostream>
#include <ctime>

int main(void) {

int myArray[100] = {0};
int durch6 = 0;
int anz23 = 0;

srand(time(NULL));

for (int i = 0; i < 100; i++)
{
	myArray[i] = rand() % 10000 + 1;
	printf("%6i", myArray[i]);
	if (i + 1 % 10 == 0)
	{
	printf("\n");	
	} 
}

for (int i = 0; i < 100; i++)
{
	if (myArray[i] % 6 == 0)
	{
		durch6++;
	}
}

printf("\n%i Zahlen sind durch 6 teilbar.\n", durch6);

for (int i = 0; i < 100; i++)
{
	if (myArray[i] % 5 == 0)
	{
		myArray[i] = 227;
	}
}

printf("\nHier wurden alle Fuenfen durch die Zahl 227 ausgetauscht\n");

for (int i = 0; i < 100; i++)
{
	printf("%6i", myArray[i]);
	if (i + 1 % 10 == 0)
	{
	printf("\n");	
	} 
}

for (int i = 1; i < 100; i++)
{
	if (myArray[i] == 23)
	{
		anz23++;
	}
}

printf("\nDie Zahl 23 kommt %i Mal vor.\n", anz23);

return 0;
}
