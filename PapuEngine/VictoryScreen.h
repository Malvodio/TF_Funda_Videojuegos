#pragma once
#include "IGameScreen.h"
#include "Window.h"
#include "GLS_Program.h"
#include "SpriteBacth.h"
#include "Background.h"
#include "Camera2D.h"
#include "SpriteFont.h"
#include "Buttom.h"

using namespace std;


class VictoryScreen: public IGameScreen
{
private:
	Camera2D camera;
	Background* background = nullptr;
	Window* _window = nullptr;
	bool btngameclick;
	GLS_Program _program;
	SpriteBacth _spriteBatch;
	SpriteFont* spriteFont;
	SpriteFont* spriteFont1;
	Buttom* buttom;

	bool isClicked;
public:
	VictoryScreen(Window* window);
	virtual void build() override;
	virtual void destroy() override;
	virtual void onExit() override;
	virtual void onEntry() override;
	virtual void initGUI() override;
	virtual void draw() override;
	virtual void update()override;
	virtual void initSystem()override;
	virtual int getNextScreen() const override;
	virtual int getPreviousScreen() const override;
	virtual void checkInput() override;
	~VictoryScreen();
};


