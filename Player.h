#pragma once
#include "Character.h"

class Player : public Character
{
public:  //�������̽� ����, ��� ����
	Player();
	virtual ~Player();

public:
	int GetGold();
	void SetGold(int NewGold);

	virtual void Move();


}