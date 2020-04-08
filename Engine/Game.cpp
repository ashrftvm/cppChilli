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
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
}

void Game::ComposeFrame()
{

    const int x = 400;
    const int y = 300;

    const bool cond = wnd.kbd.KeyIsPressed(VK_UP);

    if (cond) {
        gfx.PutPixel(395, 300, 255, 0, 0);
        gfx.PutPixel(396, 300, 255, 0, 0);
        gfx.PutPixel(397, 300, 255, 0, 0);
        gfx.PutPixel(403, 300, 255, 0, 0);
        gfx.PutPixel(404, 300, 255, 0, 0);
        gfx.PutPixel(405, 300, 255, 0, 0);
        gfx.PutPixel(400, 295, 255, 0, 0);
        gfx.PutPixel(400, 296, 255, 0, 0);
        gfx.PutPixel(400, 297, 255, 0, 0);
        gfx.PutPixel(400, 303, 255, 0, 0);
        gfx.PutPixel(400, 304, 255, 0, 0);
        gfx.PutPixel(400, 305, 255, 0, 0);
    }
    
}
