#include <iostream>
#include <ctime>
#include <cmath>

int main(void) {

int arr[6] ={0};

srand(time(NULL));

for (int i = 0; i < 6; i++) 
{
	bool x = false;
	
	do 
	{
	
		arr[i] = rand()%6+1;
	
		for (int j = i+1; j<6; j++)
		{
			if (arr[i] == arr[j])
			{
				x = true;
			}
		}
	} 
	while (x == true);
}

	std::cout << "Deine Lottozahlen: ";

for (int i = 0; i < 6; i++) 
{
	std::cout << arr[i] << " ";
}

return 0;
}
