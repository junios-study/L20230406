#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"

#include <vector>

using namespace std;

int main()
{
	srand((unsigned int)time(nullptr));

	FPlayer* Player = new FPlayer();

	vector<FGoblin*> Goblins;
	int Count = (rand() % 3) + 1;
	for (int i = 0; i < Count; ++i)
	{
		Goblins.push_back(new FGoblin());
	}

	vector<FSlime*> Slimes;
	Count = (rand() % 3) + 1;
	for (int i = 0; i < Count; ++i)
	{
		Slimes.push_back(new FSlime());
	}

	vector<FBoar*> Boars;
	Count = (rand() % 3) + 1;
	for (int i = 0; i < Count; ++i)
	{
		Boars.push_back(new FBoar());
	}

	//while (1)
	//{
	//	Player->Move();
	//	for (int i = 0; i < Goblins.size(); ++i)
	//	{
	//		Goblins[i]->Move();
	//	}
	//	for (int i = 0; i < Slimes.size(); ++i)
	//	{
	//		Slimes[i]->Move();
	//	}
	//	for (int i = 0; i < Boars.size(); ++i)
	//	{
	//		Boars[i]->Move();
	//	}
	//}

	delete Player;
	for (int i = 0; i < Goblins.size(); ++i)
	{
		delete Goblins[i];
	}
	for (int i = 0; i < Slimes.size(); ++i)
	{
		delete Slimes[i];
	}
	for (int i = 0; i < Boars.size(); ++i)
	{
		delete Boars[i];
	}


	return 0;
}
