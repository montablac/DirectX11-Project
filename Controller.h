#pragma once

// DEFINE actions return value and type
typedef short ControllerAction;
#define ACTION_LEFT    0x0001
#define ACTION_RIGHT   0x0002
#define ACTION_DOWN    0x0004
#define ACTION_UP      0x0008
#define ACTION_ATTACK  0x0010
#define ACTION_JUMP    0x0020
#define ACTION_OTHER_A 0x0040
#define ACTION_OTHER_B 0x0080
#define ACTION_OTHER_C 0x0100
#define ACTION_OTHER_D 0x0200

#define ACTION_FORCE16BIT 0xffff
// end DEFINE

class Controller
{
public:
	virtual ControllerAction PollController() = 0;
	virtual void Update() = 0;
protected:
	ControllerAction sCurrentAction = 0;
};