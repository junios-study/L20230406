#pragma once
#include "Character.h"

class FBoar : public FCharacter
{
public:
	FBoar();
	~FBoar();

	virtual void Move() override;
};

