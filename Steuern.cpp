#include <iostream>

using namespace std;

int main () {
	
	float brutto = 0, netto = 0, sl = 0;
	cout<<"Bitte geben Sie Ihr Jahresgehalt ein:";
	cin>>brutto;
	
	if(brutto > 50000) 
	{
		sl = brutto * 0.5;
	} 
	else if (brutto > 25000) 
	{
		sl = brutto * 0.3;
	} 
	else if (brutto > 10000) 
	{
		sl = brutto * 0.2;
	} 
	else 
	{
		sl = brutto * 0.1;
	}
	
	netto = brutto - sl;
	
	cout << "Ihr Nettogehalt: " << netto << " Euro" << endl;
	cout << "Ihre Steuerlast: " << sl << " Euro" << endl;
	
	return 0;
}
