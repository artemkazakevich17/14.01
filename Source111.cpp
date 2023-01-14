#include "settings.h"
#include "founctions.h"
#include "Header.h"
using namespace sf;

int main()
{
	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(
		VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT),
		WINDOW_TITLE
	);
	Bat bat;
	batInit(bat);
	Ball ball;
	ballInit(ball);
	while (window.isOpen())
	{
		checkEvents(window);
		updateGame(bat, ball);
		//����� ���������? - �������� ����
		if (ball)
		checkCollisions(bat, ball);
		drawGame(window, bat, ball);
	}
	
	return 0;
}