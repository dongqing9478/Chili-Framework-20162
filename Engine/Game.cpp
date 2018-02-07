/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	jcgameStarted(wnd.kbd);
	if(gameStarted)
		UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	PlayerA.movePlayerA(wnd.kbd);
	PlayerB.movePlayerB(wnd.kbd);
	PlayerA.clampScreen(Graphics::topLeft, Graphics::bottomRight-Player::res);
	PlayerB.clampScreen(Graphics::topLeft, Graphics::bottomRight - Player::res);
	for (int i = 0; i < numxiang; i++)
	{
		if (!xiang[i].chimeichidao())//�ж��Ƿ�Ե�
		{
			xiang[i].move();//���ƶ�
			xiang[i].fantancaiqie();//��ķ����Ͳ���
			xiang[i].pengzhuang(PlayerA);//������A�Ƿ���ײ

			if (!xiang[i].chimeichidao())//�ж��Ƿ�Ե�
				xiang[i].pengzhuang(PlayerB);

			PlayerA.fenshuing(xiang[i]);//���A�ļǷ�
			PlayerB.fenshuing(xiang[i]);
		}
	}
}


void Game::ComposeFrame()
{
	if (!gameStarted)//��Ϸû�п�ʼ������
		drawfengmian(Graphics::center.x - fenmiam.x *0.5, Graphics::center.y - fenmiam.y*0.5);//������Ϸ����
	else//�����Ϸ��ʼ�˾��´�ָ��
	{
		for (int i = 0; i < numxiang; i++)
		{
			if (!xiang[i].chimeichidao())//�ж��Ƿ�Ե�
				xiang[i].draw(gfx);//�������ͼ��
		}

		PlayerA.drawPlayerA(gfx);//���A
		PlayerB.drawPlayerB(gfx);//���B
		PlayerA.drawAfenshu(gfx);//���A������
		PlayerB.drawBfenshu(gfx);
	}

	/*bool alldie = 1;//�ж���Ϸ�Ƿ����
	for (int i = 0; i < numxiang; i++)
	{
		alldie = alldie && xiang[i].chimeichidao();
		gameend = alldie;
	}*/
	if (xiang[0].getnumxiang() == 0)
		gameend = 1;
	if (gameend)//�����Ϸ������
		drawend(Graphics::center.x - endhuamian.x *0.5, Graphics::center.y - endhuamian.y*0.5);//������Ϸ����
}





/*void Game::jcgameend(const xiang& xiang )
{
	for (int i = 0; i < numxiang;i++)
		xiang[i].getchimeichidao;
}*/


