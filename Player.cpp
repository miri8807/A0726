#include "Player.h"
#include <iostream>


using namespace std;

//constructor
Player::Player()
{
	HP = 10;
	X = 0;
	Y = 0;
	Gold = 0;

	name = "Player";
}


Player::~Player()
{
}

int Player::GetGold()
{
	return Gold;
}

void Player::SetGold(int NewGold)
{

}

void Player::Move()
{
}

