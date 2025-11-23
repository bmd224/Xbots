#ifndef R234_H
#define R234_H

#include <string>
using namespace std;

class R234 {
private:
	int direction;
	int strength;
	int speed;
	int range;
public:
	int doAttack(int defenceEnemy);
	int doProtect(int attackEnemy);
	void doMove(int& x, int& y);
	void doRotateLeft();
	void doRotateRight();
	R234(int direction, int strength, int speed, int range);
	R234(const R234&);
	~R234();
	void setDirection(int d);
	int getDirection() const { return direction; }
	void setStrength(int strength) {}
	int getStrength() const { return strength; }
	void setSpeed(int speed) {}
	int getSpeed() const { return speed; }
	void setRange(int range) {}
	int getRange() const { return range; }
};

#endif