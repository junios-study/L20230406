#pragma once
class FCharacter
{
public:
	FCharacter();
	~FCharacter();

	//method, member function
	virtual void Move();
	void Attack();

protected:
	//property, member variable
	int MP;
	int HP;

private:

};

