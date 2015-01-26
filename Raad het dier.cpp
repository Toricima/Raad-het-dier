// Raad het dier.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <string>
#include "RegisteredAnimals.h"
using namespace std;

#define CheckFlag(type) ((animalConfigurationYes & type) == type)

int animalConfigurationYes = 0, animalConfigurationNo = 0;

bool AskQuestion(string pQuestion, int pAnimalTypeResult) {
	string input;
	cout << pQuestion <<endl;
	while (true) {
		getline(cin, input);

		if (input == "yes" || input == "Yes" || input == "y" || input == "1") {
			animalConfigurationYes |= pAnimalTypeResult;
			return true;
		}
		else if (input == "no" || input == "No" || input == "n" || input == "0") {
			animalConfigurationNo |= pAnimalTypeResult;
			return false;
		}

		cout << "Invalid answer." << endl;
	}
}

int _tmain(int argc, _TCHAR* argv[]) {
	string input;
	
	AskQuestion("Is it a vertebrate?", Vertebrate); //1
	if(CheckFlag(Vertebrate))
	{
		AskQuestion("is it a mammal?", Viviparous);
		if(CheckFlag(Viviparous))
		{
			AskQuestion("Is it a pet?", Pet);
			AskQuestion("Does it roam the land?", RoamsTheLand);
			AskQuestion("Does it have hooves?", HasHooves);

			if(CheckFlag(HasHooves) && CheckFlag(RoamsTheLand))
			{
				AskQuestion("does it do Rumination?",Rumination);
				AskQuestion("Does it have ivory?", Ivor);
				AskQuestion("Does it live in a herd?", Herd);
			}
			else if(CheckFlag(RoamsTheLand))
			{
				AskQuestion("is it a nocturnal animal?", Nocturnal);
				AskQuestion("Does it have claws?", HasClaws);
				AskQuestion("Does it eat nuts?",EatsNuts);

				if(CheckFlag(HasClaws) && CheckFlag(Nocturnal))
				{
					AskQuestion("Does it live in the savannah", Savannah);
				}
				else if(CheckFlag(Nocturnal))
				{

				}
				else
				{
					 AskQuestion("does it live in trees", LivesInTree);
					 AskQuestion("does it live in the jungle", Jungle);
					 AskQuestion("Does it eat leaves", EatsLeaves);

					 if(CheckFlag(EatsLeaves))
					 {

					 }
					 else
					 {

					 }
				}
			}
			else 
			{
			}
		}
		else if(AskQuestion("Can it fly?", CanFly))
		{
		}
		else
		{
			// Lives in the waters
			AskQuestion("Is it a small animal",Small);
			AskQuestion("Does it live in the Ocean", Ocean);
		}

	}
	else
	{

	}

	cout << endl << "Gevonden beestjes: " << endl;

	for (int i = 0; i < MAX_ANIMALS; i++) {
		if ((animals[i].Type & animalConfigurationYes) == animalConfigurationYes && (animals[i].Type & animalConfigurationNo) == 0)
			cout << animals[i].Name << endl;
	}
	system("PAUSE");
	return 0;
}

