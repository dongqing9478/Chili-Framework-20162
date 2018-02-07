#pragma once
#include "vec2.h"
#include "Keyboard.h"
#include "Graphics.h"
#include "xiang.h"
#include <random>

class xiang; 
class Graphics;

class Player
{
public:
	Player();
	void clampScreen(const Vec2& min, const Vec2& max);
	void movePlayerA(const Keyboard& kbd);
	void movePlayerB(const Keyboard& kbd);
	void fenshuing(const xiang& xiang);//如果xiang吃我的Id等于我的Id就有分数

	void drawPlayerA(Graphics& gfx)const;//const不会改变里面的东西
	void drawPlayerB(Graphics& gfx)const;
	void drawAfenshu(Graphics& gfx)const;
	void drawBfenshu(Graphics& gfx)const;

	Vec2 getPos()const { Vec2 c = {10,10}; return c+pos; }//获取玩家位置
	int getPlayerId()const { return id; }//玩家id
	int getfenshu()const { return fenshu; }//玩家id

	static constexpr Vec2 res = { 20,20 };//脸分辨率

private:
	std::random_device seed;//随机
	std::mt19937 rand;//随机种子
	std::uniform_int_distribution<int> fitx;
	std::uniform_int_distribution<int> fity;

	Vec2 pos;
	Vec2 v = { 3,3 };
	int fenshu = 0;
	int id;
};



