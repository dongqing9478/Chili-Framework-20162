#pragma once
struct Vec2
{
	int x = 0 ;
	int y = 0 ;
	Vec2 operator += (const Vec2& b);
	Vec2 operator -= (const Vec2& b);
	void clamp(const Vec2& min, const Vec2& max);//成员函数放上面，友员函数放下面
	friend Vec2 operator +  (const Vec2& a, const Vec2& b);
	friend Vec2 operator -  (const Vec2& a, const Vec2& b);
	friend Vec2 operator *  (const Vec2& a, int b);
}; 