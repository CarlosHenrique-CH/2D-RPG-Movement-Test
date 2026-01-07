#pragma once
#include "raylib.h"
#include "config.h"
#define DELTA GetFrameTime()

class Player {
public:
	Vector2 pos{ (float)winConfig::width/2, (float)winConfig::height/2 };
	float speed{ 200 };
	int speedMult{ 2 };
	const float radius{50};

	float speedBoost() const;
	void move();
	void update();
	

};
