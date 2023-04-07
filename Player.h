#pragma once
#include "Character.h"

class FPlayer : public FCharacter
{
public:
	FPlayer();
	~FPlayer();

	virtual void Move() override;
};

