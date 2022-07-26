#pragma once
#include "Character.h"

class Player : public Character
{
public:  //인터페이스 공개, 상속 가능
	Player();
	virtual ~Player();

public:
	int GetGold();
	void SetGold(int NewGold);

	virtual void Move();


}