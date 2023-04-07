#pragma once
#include "Character.h"

class FGoblin : public FCharacter
{
public:
	FGoblin();
	~FGoblin();

	virtual void Move() override;
};

