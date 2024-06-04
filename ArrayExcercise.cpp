#include <iostream>

using namespace std;

int main(void) {
	
	int a[10];
	int b[10];
	int j=9;
	
	cout << "Wir fuellen ein Array mit zehn Zahlen und geben es umgekehrt wieder aus\n";
	
	for (int i = 0; i < 10; i++)
	{
		cout << "Bitte geben Sie eine Zahl ein: \n";
		cin >> a[i];
	}
	

		cout << "Ausgabe Original Array:\n";
	
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] <<"\n";
		
	}

	//Wir speichern die Werte von Array a in umgekehrter Reihenfolge in Array b

	
	for (int i = 0; i < 10; i++) 
	{
		b[i]=a[j];
		j--;
	}
	
	
	cout << "Ausgabe neuer umgekehrter Array:\n";
	
	for (int i = 0; i < 10; i++)
	{
		cout << b[i] <<"\n";
	}



return 0;
}
