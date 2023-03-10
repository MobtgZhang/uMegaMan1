# pragma once
#include <SDL2/SDL.h>

#include <SDL2/SDL_gamecontroller.h>

#include <iostream>



enum KEYS_PRESSED_LIST 
{
	KEY_ESCAPE, KEY_A, KEY_D, KEY_R, KEY_SPACE, KEY_W, KEY_S, KEY_1, KEY_2, SIZE_OF_KEYS_PRESSED_ENUM
};
enum MOUSE_PRESSED_LIST 
{
	MOUSE_LEFT, MOUSE_RIGHT, MOUSE_MIDDLE, SIZE_OF_MOUSE_PRESSED_ENUM
};
enum CONTROLLER_PRESSED_LIST 
{
	DPAD_LEFT, DPAD_RIGHT, BUTTON_A, BUTTON_B, SIZE_OF_CONTROLLER_PRESSED_ENUM
};

class Input
{
public:
	Input();
	~Input();

	void Update();

	bool KeyIsPressed(KEYS_PRESSED_LIST key);
	bool MouseIsPressed(MOUSE_PRESSED_LIST mouse);
	bool ControllerIsPressed(CONTROLLER_PRESSED_LIST controller);

	int GetJoystickPosition();
	
	int GetMouseX();
	int GetMouseY();
	
private:
	int m_XMouse = 0;
	int m_YMouse = 0;

	int XDirection = 0;

	const int Deadzone = 7500;

	KEYS_PRESSED_LIST KeyList;
	MOUSE_PRESSED_LIST MouseList;
	CONTROLLER_PRESSED_LIST ControllerList;

	SDL_Event m_InputEvent;

	SDL_Joystick* Controller = NULL;
	bool ControllerActive = false;
	
	bool m_keysPressed[SIZE_OF_KEYS_PRESSED_ENUM];
	bool m_mousePressed[SIZE_OF_MOUSE_PRESSED_ENUM];
	bool m_controllerPressed[SIZE_OF_CONTROLLER_PRESSED_ENUM];
};

