#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

#include <iostream>
#include <fstream>
#include <list>
#include <string>

#include "Input.h"
#include "UI.h"
//#include "Player.h"
//#include "Goomba.h"
//#include "Sky.h"
#include "LevelManager.h"
//#include "Coin.h"
#include "EntityManager.h"
#include "Renderer.h"
#include "Camera.h"
#include "Audio.h"

class Game
{
public:
	Game();
	~Game();

	void GameLoop(); //Main game loop

	void CheckKeyPressed(); //Checks for keyboard / mouse input

private:

	//Size of the window
	int m_ScreenWidth = 1280;
	int m_ScreenHeight = 720;

	//FPS
	Uint32 TotalFrameTicks = 0;
	Uint32 TotalFrames = 0;


	//Camera
	Camera* CameraObj;

	//Renderer
	Renderer* RendererObj;

	//Input
	Input* InputObj;

	//UI
	UI* UIObj;

	//Entity Manager
	EntityManager* EMObj;

	//Level Manager
	LevelManager* LevelObj;

	//AudioManager
	Audio* AudioObj;

};

