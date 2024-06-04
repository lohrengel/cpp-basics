#include <cstdlib>
#include <ctime>
#include <iostream>

int main () {
	int user = 0, comp = 0, userWon = 0, compWon = 0, draw = 0, runden = 0;
	const char* GAMEARR[3]={"Stein", "Schere", "Papier"};
	
	std::cout << "Lass uns Stein, Schere, Papier spielen" << std::endl;
	std::cout << std::endl; 
	std::cout << "Wieviele Runden wollen wir spielen?";
	std::cin >> runden;
	
	for (int i = 0; i < runden; i++){
		
	std::cout << std::endl; 
	
	std::cout << "Bitte triff deine Wahl. Stein(0), Schere(1), Papier(2)";
	std::cin >> user;
	
	std::srand(std::time(nullptr)); 
	
	comp = rand() % 3; 
	
	if (user == comp) 
	{
		std::cout << std::endl; 
		std::cout << "Unentschieden: " << GAMEARR[user] << " vs " << GAMEARR[comp] << std::endl;
		draw++;
	} 
	else if (user == 0 && comp == 1 || user == 1 && comp == 2 || user == 2 && comp == 0)
	{
		std::cout << std::endl; 
		std::cout << "Gewonnen: " << GAMEARR[user] << " gewinnt gegen " << GAMEARR[comp] << std::endl;
		userWon++;
	}
	else if (user == 0 && comp == 2 || user == 1 && comp == 0 || user == 2 && comp == 1)
	{
		std::cout << std::endl; 
		std::cout << "Verloren: " << GAMEARR[user] << " verliert gegen " << GAMEARR[comp] << std::endl;
		compWon++;
	} 
	else 
	{
		std::cout << std::endl; 
		std::cout<< "ERROR, bitte Eingabe mit einem richtigen Wert wiederholen" << std::endl;
		i--;
	}
	
	}
	std::cout << std::endl; 
	
	std::cout << "Wir haben " << runden << " Runden gespielt." << std::endl;
	std::cout << "Es gab " << draw << " Unentschieden" << std::endl;
	std::cout << "Der Computer hat " << compWon << " Mal gewonnen" << std::endl;
	std::cout << "Du hast " << userWon << " Mal gewonnen" << std::endl;
	
	std::cout << std::endl; 

	if (compWon == userWon)
	{
		std::cout << "Das Gesamtergebnis ist: Unentschieden" << std::endl;
	} 
	else if (compWon<userWon)
	{
		std::cout << "Glueckwunsch, du hast das Spiel gewonnen" << std::endl;	
	} 
	else 
	{
		std::cout << "Du hast leider Verloren" << std::endl;
	}
	
	return 0;
	
}
