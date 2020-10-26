#pragma once
#ifndef __TARGET__
#define __TARGET__

#include "DisplayObject.h"

class Target final : public DisplayObject {
public:
	Target();
	~Target();

	// Inherited via GameObject
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;
	bool isGravityEnabled = false;

	glm::vec2 throwspeed;
	glm::vec2 throwposition;

	glm::vec2 fallenspeed;
	glm::vec2 fallenposition;

	float fricAcc;
	float velocity;
	float acc;
	void doThrow();
	void doFallen();
	bool ifLanded = true;
private:
	void m_move();
	void m_checkBounds();
	void m_reset();
};


#endif /* defined (__TARGET__) */