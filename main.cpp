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

	vector<FCharacter*> Characters;

	Characters.push_back(new FPlayer());
	int Count = (rand() % 3) + 1;
	for (int i = 0; i < Count; ++i)
	{
		Characters.push_back(new FGoblin());
	}
	Count = (rand() % 3) + 1;
	for (int i = 0; i < Count; ++i)
	{
		Characters.push_back(new FSlime());
	}
	Count = (rand() % 3) + 1;
	for (int i = 0; i < Count; ++i)
	{
		Characters.push_back(new FBoar());
	}

	while (1)
	{
		for (int i = 0; i < Characters.size(); ++i)
		{
			Characters[i]->Move();
		}
	}

	//for (int i = 0; i < Characters.size(); ++i)
	//{
	//	delete Characters[i];
	//}

	return 0;
}
