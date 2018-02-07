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
	void fenshuing(const xiang& xiang);//���xiang���ҵ�Id�����ҵ�Id���з���

	void drawPlayerA(Graphics& gfx)const;//const����ı�����Ķ���
	void drawPlayerB(Graphics& gfx)const;
	void drawAfenshu(Graphics& gfx)const;
	void drawBfenshu(Graphics& gfx)const;

	Vec2 getPos()const { Vec2 c = {10,10}; return c+pos; }//��ȡ���λ��
	int getPlayerId()const { return id; }//���id
	int getfenshu()const { return fenshu; }//���id

	static constexpr Vec2 res = { 20,20 };//���ֱ���

private:
	std::random_device seed;//���
	std::mt19937 rand;//�������
	std::uniform_int_distribution<int> fitx;
	std::uniform_int_distribution<int> fity;

	Vec2 pos;
	Vec2 v = { 3,3 };
	int fenshu = 0;
	int id;
};



