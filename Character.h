#pragma once
class FCharacter
{
public:
	FCharacter();
	~FCharacter();

	//property, member variable
	int MP;
	int HP;

	//method, member function
	void Move();
	void Attack();
};

