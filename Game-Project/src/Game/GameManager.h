#pragma once
#include "Entity/Player/Player.h"
#include "Entity/World/Enemy/EnemyEntity.h"


class GameManager
{
public:	
	void Run();
	GameManager();
	~GameManager();

private:
	void Init();
	void Update();
	void WindowUpdate();
	void Draw();
	void UpdateDeltaTime();

public:
	float m_DeltaTime;

private:
	sf::Clock m_Clock;
	InputManager m_Input;
	Window m_Window;
	Player m_Player;
	Enemy m_Foe;

	//Book m_Ability;
};

