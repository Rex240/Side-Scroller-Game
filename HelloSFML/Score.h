#pragma once
#include "State.h"
#include <string>


class Score :
	public State
{
	Texture Scoreback;
	Sprite ScoreBackground;
	Font Myfont;
	Text CoinsCollectedLabel;
	Text Coins;

	Text LivesleftLabel;
	Text Lives;

	Text ScoreMadeLabel;
	Text ScoreMade;

	Clock timer;

	int LivesLeft;
	int totalScore;
	int CoinsCollected;


	LevelState LState; // holds current state of level

public:

	
	Score(RenderWindow& window, SFMLDebugDraw& debugDraw, b2World* World);
	void LoadContent();
	
	void HandleInput(Event gameEvent);

	void UnloadContent();
	 
	State::LevelState Update(Event gameEvent, Event prevEvent, Time timeSinceLastUpdateCall);


	 
	void Draw(RenderWindow& window, Time timeSinceLastDrawCall);


	void IncrementScore(int x);
	void IncrementCoins();
	void IncrementLife();
	void DecrementScore(int x);
	void DecrementCoins();
	void DecrementLife();

	int GetLives();
	int GetScore();
	int GetCoins();


};

