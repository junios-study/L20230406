#pragma once
#include "Character.h"

class FSlime : public FCharacter
{
public:
	FSlime();
	~FSlime();

	virtual void Move() override;
};