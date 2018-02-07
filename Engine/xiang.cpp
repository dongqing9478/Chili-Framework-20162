#include"xiang.h"
#include"Graphics.h"

xiang::xiang()
	:
	rand(seed()),
	fitx(0, Graphics::bottomRight.x - res.x),
	fity(0, Graphics::bottomRight.y - res.y),//最后不能加逗号
	fitvx(-2,2),
	fitvy(-2,2)
{
	pos.x = fitx(rand);
	pos.y = fity(rand);
	v.x = fitvx(rand);
	v.y = fitvy(rand);
}

void xiang::move()
{
	pos += v;
}

void xiang::fantancaiqie()
{
	static Vec2 mybottomRight = Graphics::bottomRight - res;//静态局部变量

//		Vec2 mybottomRight = Graphics::bottomRight - res;
		if (pos.x <= Graphics::topLeft.x || pos.x >= mybottomRight.x)//限制x范围
			v.x *= -1;
		if (pos.y <= Graphics::topLeft.y || pos.y >= mybottomRight.y)
			v.y *= -1;
		pos.clamp(Graphics::topLeft, Graphics::bottomRight - res);
}


void xiang::draw(Graphics & gfx)const
{

		gfx.PutPixel(14 + pos.x, 0 + pos.y, 138, 77, 0);
		gfx.PutPixel(7 + pos.x, 1 + pos.y, 138, 77, 0);
		gfx.PutPixel(13 + pos.x, 1 + pos.y, 138, 77, 0);
		gfx.PutPixel(20 + pos.x, 1 + pos.y, 138, 77, 0);
		gfx.PutPixel(6 + pos.x, 2 + pos.y, 138, 77, 0);
		gfx.PutPixel(13 + pos.x, 2 + pos.y, 138, 77, 0);
		gfx.PutPixel(20 + pos.x, 2 + pos.y, 138, 77, 0);
		gfx.PutPixel(6 + pos.x, 3 + pos.y, 138, 77, 0);
		gfx.PutPixel(6 + pos.x, 4 + pos.y, 138, 77, 0);
		gfx.PutPixel(14 + pos.x, 4 + pos.y, 138, 77, 0);
		gfx.PutPixel(21 + pos.x, 4 + pos.y, 138, 77, 0);
		gfx.PutPixel(7 + pos.x, 5 + pos.y, 138, 77, 0);
		gfx.PutPixel(13 + pos.x, 5 + pos.y, 138, 77, 0);
		gfx.PutPixel(21 + pos.x, 5 + pos.y, 138, 77, 0);
		gfx.PutPixel(7 + pos.x, 6 + pos.y, 138, 77, 0);
		gfx.PutPixel(20 + pos.x, 6 + pos.y, 138, 77, 0);
		gfx.PutPixel(6 + pos.x, 7 + pos.y, 138, 77, 0);
		gfx.PutPixel(14 + pos.x, 7 + pos.y, 51, 28, 0);
		gfx.PutPixel(15 + pos.x, 7 + pos.y, 51, 28, 0);
		gfx.PutPixel(20 + pos.x, 7 + pos.y, 138, 77, 0);
		gfx.PutPixel(12 + pos.x, 8 + pos.y, 51, 28, 0);
		gfx.PutPixel(13 + pos.x, 8 + pos.y, 51, 28, 0);
		gfx.PutPixel(14 + pos.x, 8 + pos.y, 51, 28, 0);
		gfx.PutPixel(7 + pos.x, 9 + pos.y, 138, 77, 0);
		gfx.PutPixel(11 + pos.x, 9 + pos.y, 51, 28, 0);
		gfx.PutPixel(12 + pos.x, 9 + pos.y, 102, 57, 0);
		gfx.PutPixel(13 + pos.x, 9 + pos.y, 138, 77, 0);
		gfx.PutPixel(14 + pos.x, 9 + pos.y, 138, 77, 0);
		gfx.PutPixel(15 + pos.x, 9 + pos.y, 51, 28, 0);
		gfx.PutPixel(21 + pos.x, 9 + pos.y, 138, 77, 0);
		gfx.PutPixel(10 + pos.x, 10 + pos.y, 51, 28, 0);
		gfx.PutPixel(11 + pos.x, 10 + pos.y, 51, 28, 0);
		gfx.PutPixel(12 + pos.x, 10 + pos.y, 102, 57, 0);
		gfx.PutPixel(13 + pos.x, 10 + pos.y, 138, 77, 0);
		gfx.PutPixel(14 + pos.x, 10 + pos.y, 138, 77, 0);
		gfx.PutPixel(15 + pos.x, 10 + pos.y, 51, 28, 0);
		gfx.PutPixel(20 + pos.x, 10 + pos.y, 138, 77, 0);
		gfx.PutPixel(9 + pos.x, 11 + pos.y, 51, 28, 0);
		gfx.PutPixel(10 + pos.x, 11 + pos.y, 138, 77, 0);
		gfx.PutPixel(11 + pos.x, 11 + pos.y, 138, 77, 0);
		gfx.PutPixel(12 + pos.x, 11 + pos.y, 51, 28, 0);
		gfx.PutPixel(13 + pos.x, 11 + pos.y, 51, 28, 0);
		gfx.PutPixel(14 + pos.x, 11 + pos.y, 51, 28, 0);
		gfx.PutPixel(15 + pos.x, 11 + pos.y, 51, 28, 0);
		gfx.PutPixel(16 + pos.x, 11 + pos.y, 51, 28, 0);
		gfx.PutPixel(9 + pos.x, 12 + pos.y, 51, 28, 0);
		gfx.PutPixel(10 + pos.x, 12 + pos.y, 138, 77, 0);
		gfx.PutPixel(11 + pos.x, 12 + pos.y, 138, 77, 0);
		gfx.PutPixel(12 + pos.x, 12 + pos.y, 111, 62, 0);
		gfx.PutPixel(13 + pos.x, 12 + pos.y, 102, 57, 0);
		gfx.PutPixel(14 + pos.x, 12 + pos.y, 102, 57, 0);
		gfx.PutPixel(15 + pos.x, 12 + pos.y, 102, 57, 0);
		gfx.PutPixel(16 + pos.x, 12 + pos.y, 51, 28, 0);
		gfx.PutPixel(9 + pos.x, 13 + pos.y, 51, 28, 0);
		gfx.PutPixel(10 + pos.x, 13 + pos.y, 109, 61, 0);
		gfx.PutPixel(11 + pos.x, 13 + pos.y, 138, 77, 0);
		gfx.PutPixel(12 + pos.x, 13 + pos.y, 138, 77, 0);
		gfx.PutPixel(13 + pos.x, 13 + pos.y, 138, 77, 0);
		gfx.PutPixel(14 + pos.x, 13 + pos.y, 138, 77, 0);
		gfx.PutPixel(15 + pos.x, 13 + pos.y, 138, 77, 0);
		gfx.PutPixel(16 + pos.x, 13 + pos.y, 51, 28, 0);
		gfx.PutPixel(5 + pos.x, 14 + pos.y, 51, 28, 0);
		gfx.PutPixel(7 + pos.x, 14 + pos.y, 51, 28, 0);
		gfx.PutPixel(8 + pos.x, 14 + pos.y, 51, 28, 0);
		gfx.PutPixel(9 + pos.x, 14 + pos.y, 51, 28, 0);
		gfx.PutPixel(10 + pos.x, 14 + pos.y, 51, 28, 0);
		gfx.PutPixel(11 + pos.x, 14 + pos.y, 138, 77, 0);
		gfx.PutPixel(12 + pos.x, 14 + pos.y, 138, 77, 0);
		gfx.PutPixel(13 + pos.x, 14 + pos.y, 138, 77, 0);
		gfx.PutPixel(14 + pos.x, 14 + pos.y, 138, 77, 0);
		gfx.PutPixel(15 + pos.x, 14 + pos.y, 138, 77, 0);
		gfx.PutPixel(16 + pos.x, 14 + pos.y, 51, 28, 0);
		gfx.PutPixel(4 + pos.x, 15 + pos.y, 51, 28, 0);
		gfx.PutPixel(5 + pos.x, 15 + pos.y, 138, 77, 0);
		gfx.PutPixel(6 + pos.x, 15 + pos.y, 51, 28, 0);
		gfx.PutPixel(7 + pos.x, 15 + pos.y, 116, 65, 0);
		gfx.PutPixel(8 + pos.x, 15 + pos.y, 138, 77, 0);
		gfx.PutPixel(9 + pos.x, 15 + pos.y, 138, 77, 0);
		gfx.PutPixel(10 + pos.x, 15 + pos.y, 138, 77, 0);
		gfx.PutPixel(11 + pos.x, 15 + pos.y, 51, 28, 0);
		gfx.PutPixel(12 + pos.x, 15 + pos.y, 51, 28, 0);
		gfx.PutPixel(13 + pos.x, 15 + pos.y, 51, 28, 0);
		gfx.PutPixel(14 + pos.x, 15 + pos.y, 51, 28, 0);
		gfx.PutPixel(15 + pos.x, 15 + pos.y, 51, 28, 0);
		gfx.PutPixel(16 + pos.x, 15 + pos.y, 51, 28, 0);
		gfx.PutPixel(17 + pos.x, 15 + pos.y, 51, 28, 0);
		gfx.PutPixel(18 + pos.x, 15 + pos.y, 51, 28, 0);
		gfx.PutPixel(1 + pos.x, 16 + pos.y, 51, 28, 0);
		gfx.PutPixel(2 + pos.x, 16 + pos.y, 51, 28, 0);
		gfx.PutPixel(3 + pos.x, 16 + pos.y, 51, 28, 0);
		gfx.PutPixel(4 + pos.x, 16 + pos.y, 51, 28, 0);
		gfx.PutPixel(5 + pos.x, 16 + pos.y, 138, 77, 0);
		gfx.PutPixel(6 + pos.x, 16 + pos.y, 51, 28, 0);
		gfx.PutPixel(7 + pos.x, 16 + pos.y, 116, 65, 0);
		gfx.PutPixel(8 + pos.x, 16 + pos.y, 138, 77, 0);
		gfx.PutPixel(9 + pos.x, 16 + pos.y, 138, 77, 0);
		gfx.PutPixel(10 + pos.x, 16 + pos.y, 138, 77, 0);
		gfx.PutPixel(11 + pos.x, 16 + pos.y, 138, 77, 0);
		gfx.PutPixel(12 + pos.x, 16 + pos.y, 138, 77, 0);
		gfx.PutPixel(13 + pos.x, 16 + pos.y, 109, 61, 0);
		gfx.PutPixel(14 + pos.x, 16 + pos.y, 51, 28, 0);
		gfx.PutPixel(15 + pos.x, 16 + pos.y, 138, 77, 0);
		gfx.PutPixel(16 + pos.x, 16 + pos.y, 138, 77, 0);
		gfx.PutPixel(17 + pos.x, 16 + pos.y, 138, 77, 0);
		gfx.PutPixel(18 + pos.x, 16 + pos.y, 123, 69, 0);
		gfx.PutPixel(19 + pos.x, 16 + pos.y, 51, 28, 0);
		gfx.PutPixel(0 + pos.x, 17 + pos.y, 51, 28, 0);
		gfx.PutPixel(1 + pos.x, 17 + pos.y, 87, 49, 0);
		gfx.PutPixel(2 + pos.x, 17 + pos.y, 87, 49, 0);
		gfx.PutPixel(3 + pos.x, 17 + pos.y, 87, 49, 0);
		gfx.PutPixel(4 + pos.x, 17 + pos.y, 87, 49, 0);
		gfx.PutPixel(5 + pos.x, 17 + pos.y, 51, 28, 0);
		gfx.PutPixel(6 + pos.x, 17 + pos.y, 51, 28, 0);
		gfx.PutPixel(7 + pos.x, 17 + pos.y, 43, 24, 0);
		gfx.PutPixel(8 + pos.x, 17 + pos.y, 51, 28, 0);
		gfx.PutPixel(9 + pos.x, 17 + pos.y, 51, 28, 0);
		gfx.PutPixel(10 + pos.x, 17 + pos.y, 51, 28, 0);
		gfx.PutPixel(11 + pos.x, 17 + pos.y, 51, 28, 0);
		gfx.PutPixel(12 + pos.x, 17 + pos.y, 51, 28, 0);
		gfx.PutPixel(13 + pos.x, 17 + pos.y, 40, 22, 0);
		gfx.PutPixel(14 + pos.x, 17 + pos.y, 51, 28, 0);
		gfx.PutPixel(15 + pos.x, 17 + pos.y, 138, 77, 0);
		gfx.PutPixel(16 + pos.x, 17 + pos.y, 138, 77, 0);
		gfx.PutPixel(17 + pos.x, 17 + pos.y, 138, 77, 0);
		gfx.PutPixel(18 + pos.x, 17 + pos.y, 123, 69, 0);
		gfx.PutPixel(19 + pos.x, 17 + pos.y, 51, 28, 0);
		gfx.PutPixel(0 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(1 + pos.x, 18 + pos.y, 138, 77, 0);
		gfx.PutPixel(2 + pos.x, 18 + pos.y, 138, 77, 0);
		gfx.PutPixel(3 + pos.x, 18 + pos.y, 138, 77, 0);
		gfx.PutPixel(4 + pos.x, 18 + pos.y, 138, 77, 0);
		gfx.PutPixel(5 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(6 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(7 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(8 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(9 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(10 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(11 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(12 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(13 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(14 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(15 + pos.x, 18 + pos.y, 138, 77, 0);
		gfx.PutPixel(16 + pos.x, 18 + pos.y, 138, 77, 0);
		gfx.PutPixel(17 + pos.x, 18 + pos.y, 138, 77, 0);
		gfx.PutPixel(18 + pos.x, 18 + pos.y, 123, 69, 0);
		gfx.PutPixel(19 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(20 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(21 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(22 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(0 + pos.x, 19 + pos.y, 51, 28, 0);
		gfx.PutPixel(1 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(2 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(3 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(4 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(5 + pos.x, 19 + pos.y, 51, 28, 0);
		gfx.PutPixel(6 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(7 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(8 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(9 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(10 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(11 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(12 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(13 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(14 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(15 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(16 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(17 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(18 + pos.x, 19 + pos.y, 123, 69, 0);
		gfx.PutPixel(19 + pos.x, 19 + pos.y, 51, 28, 0);
		gfx.PutPixel(20 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(21 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(22 + pos.x, 19 + pos.y, 65, 36, 0);
		gfx.PutPixel(23 + pos.x, 19 + pos.y, 51, 28, 0);
		gfx.PutPixel(1 + pos.x, 20 + pos.y, 51, 28, 0);
		gfx.PutPixel(2 + pos.x, 20 + pos.y, 51, 28, 0);
		gfx.PutPixel(3 + pos.x, 20 + pos.y, 51, 28, 0);
		gfx.PutPixel(4 + pos.x, 20 + pos.y, 51, 28, 0);
		gfx.PutPixel(5 + pos.x, 20 + pos.y, 51, 28, 0);
		gfx.PutPixel(6 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(7 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(8 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(9 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(10 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(11 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(12 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(13 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(14 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(15 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(16 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(17 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(18 + pos.x, 20 + pos.y, 123, 69, 0);
		gfx.PutPixel(19 + pos.x, 20 + pos.y, 51, 28, 0);
		gfx.PutPixel(20 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(21 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(22 + pos.x, 20 + pos.y, 65, 36, 0);
		gfx.PutPixel(23 + pos.x, 20 + pos.y, 51, 28, 0);
		gfx.PutPixel(0 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(1 + pos.x, 21 + pos.y, 138, 77, 0);
		gfx.PutPixel(2 + pos.x, 21 + pos.y, 138, 77, 0);
		gfx.PutPixel(3 + pos.x, 21 + pos.y, 138, 77, 0);
		gfx.PutPixel(4 + pos.x, 21 + pos.y, 138, 77, 0);
		gfx.PutPixel(5 + pos.x, 21 + pos.y, 138, 77, 0);
		gfx.PutPixel(6 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(7 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(8 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(9 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(10 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(11 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(12 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(13 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(14 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(15 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(16 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(17 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(18 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(20 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(21 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(22 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(0 + pos.x, 22 + pos.y, 51, 28, 0);
		gfx.PutPixel(1 + pos.x, 22 + pos.y, 65, 36, 0);
		gfx.PutPixel(2 + pos.x, 22 + pos.y, 65, 36, 0);
		gfx.PutPixel(3 + pos.x, 22 + pos.y, 65, 36, 0);
		gfx.PutPixel(4 + pos.x, 22 + pos.y, 65, 36, 0);
		gfx.PutPixel(5 + pos.x, 22 + pos.y, 65, 36, 0);
		gfx.PutPixel(6 + pos.x, 22 + pos.y, 51, 28, 0);
		gfx.PutPixel(1 + pos.x, 23 + pos.y, 51, 28, 0);
		gfx.PutPixel(2 + pos.x, 23 + pos.y, 51, 28, 0);
		gfx.PutPixel(3 + pos.x, 23 + pos.y, 51, 28, 0);
		gfx.PutPixel(4 + pos.x, 23 + pos.y, 51, 28, 0);
		gfx.PutPixel(5 + pos.x, 23 + pos.y, 51, 28, 0);
		gfx.PutPixel(6 + pos.x, 23 + pos.y, 51, 28, 0);

}
void xiang::pengzhuang(Player & a)
{

		if (a.getPos().x > pos.x - 5 &&
			a.getPos().x< pos.x + res.x + 5 &&
			a.getPos().y> pos.y - 5 &&
			a.getPos().y < pos.y + res.y + 5)
		{
			chidao = 1;
			chidaoId = a.getPlayerId();
		}
}
