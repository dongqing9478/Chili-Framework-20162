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
	xiang();//���캯�� Ĭ�ϵĹ��캯��û�в��� ÿ���γ��µ��趼��ִ��
	void move();
	void fantancaiqie();
	void pengzhuang( Player& a);//����ı���ҵĲ���
	void draw(Graphics& gfx) const;
	bool chimeichidao() const { return chidao; }
	int hqchidaoId() const { return chidaoId; }//��ȡ�Ե�����
	int getnumxiang()const { return numxiang; }//�Żص�ǰ���������
	static constexpr Vec2 res = { 24,24 };//��ķֱ���xiang:res

private:

	std::random_device seed;//���
	std::mt19937 rand;//�������
	std::uniform_int_distribution<int> fitx;
	std::uniform_int_distribution<int> fity;
	std::uniform_int_distribution<int> fitvx;
	std::uniform_int_distribution<int> fitvy;

	Vec2 pos;//xiang��λ��
	Vec2 v{3,3};//����ٶ�
	bool chidao = 0;
	int chidaoId = -1;
	static int numxiang;//���������Ǳ���
};
