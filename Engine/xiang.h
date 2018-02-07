#pragma once
#include"Vec2.h"
#include"Graphics.h"
#include"Player.h"
#include<random>

class Player;
class Graphics;

class xiang
{
public:
	xiang();//构造函数 默认的构造函数没有参数 每次形成新的翔都会执行
	void move();
	void fantancaiqie();
	void pengzhuang( Player& a);//不会改变玩家的参数
	void draw(Graphics& gfx) const;
	bool chimeichidao() const { return chidao; }
	int hqchidaoId() const { return chidaoId; }//获取吃到了吗
	int getnumxiang()const { return numxiang; }//放回当前翔存活的总数
	static constexpr Vec2 res = { 24,24 };//翔的分辨率xiang:res

private:

	std::random_device seed;//随机
	std::mt19937 rand;//随机种子
	std::uniform_int_distribution<int> fitx;
	std::uniform_int_distribution<int> fity;
	std::uniform_int_distribution<int> fitvx;
	std::uniform_int_distribution<int> fitvy;

	Vec2 pos;//xiang的位置
	Vec2 v{3,3};//翔的速度
	bool chidao = 0;
	int chidaoId = -1;
	static int numxiang;//翔总数且是变量
};
