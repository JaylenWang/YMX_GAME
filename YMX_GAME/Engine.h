#pragma once
#include "Modules.h"
#include "Setting.h"

//namespace nm_GameEngine {}

class Engine
{
public:
	int cnt;

	~Engine();

	void Init();
	void Run();

	Player *get_player(){return &player;}

	ResModule *get_mRes(){return &mRes;}
	RenderModule *get_mRender(){return &mRender;}
	SceneModule *get_mScene(){return &mScene;}

private:
	Player player;
	//vector<BaseObject> objList;

	ResModule mRes;
	RenderModule mRender;
	SceneModule mScene;


public:
	static Engine *get_Instance();
private:
	static Engine *instance;

	Engine();
};
