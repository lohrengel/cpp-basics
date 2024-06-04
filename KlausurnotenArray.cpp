#include <iostream>
#include <ctime>
#include <string>

int note(int punkte);

int main(void) {

int arrNoten[50] = {0};
int mini = 0, maxi = 0, summe = 0;

srand(time(NULL));

for (int i = 0; i < 50; i++)
	{
		arrNoten[i] = rand()%100+1;
		summe += arrNoten[i];
	}

for (int i = 0; i < 50; i++)
	{
		if (arrNoten[i] < 50)
		{
			
			printf("%5i Note %i Nicht Bestanden\n", arrNoten[i], note(arrNoten[i]));
			
		} else
		{
			
			printf("%5i Note %i Bestanden\n", arrNoten[i], note(arrNoten[i]));
		}	
		
		
	}

mini = maxi = arrNoten[0];

for(int i = 0; i < 50; i++)
{
	if (arrNoten[i] > maxi)
	{
		maxi = arrNoten[i];
	} 
	else if (arrNoten[i] < mini)
	{
		mini = arrNoten[i];
	}
}

printf("\nDie schlechteste Note ist %i und die beste Note %i", mini, maxi);

printf("\nDer Notenschnitt ist %i", summe/50);

return 0;
}

int note(int punkte)
{
	int note = 6;
	if (punkte > 91)
	{
		note=1;
	}
	else if (punkte > 80)
	{
		note = 2;
	} 
	else if (punkte > 66)
	{
		note = 3;
	} 	 
	else if (punkte > 49)
	{
		note = 4;
	}
	else if (punkte > 29)
	{
		note = 5;
	}  	
	return note;
}
