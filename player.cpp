#include "player.h"
#include <iostream>

void Player :: move() {
	int y{ (int) (IsKeyDown(KEY_S) - IsKeyDown(KEY_W))};
	int x{ (int) (IsKeyDown(KEY_D) - IsKeyDown(KEY_A))};
	pos.y += y * speedBoost() * DELTA;
	pos.x += x * speedBoost() * DELTA;
}

float Player :: speedBoost() const {
	if (IsKeyDown(KEY_LEFT_SHIFT)) {
		return speed * speedMult;
	}
	else {
		return speed;
	}
}

void Player :: update() {
	move();
	speedBoost();

}
