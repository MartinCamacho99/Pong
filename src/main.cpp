#include "sl.h"

int main()
{
	const int width = 1200;
	const int height = 800;
	const int speedRectangle = 800;

	slWindow(width, height, "Simple SIGIL Example", false);

	double recx = width * 0.5;
	double recy = height * 0.5;


	while (!slShouldClose() && !slGetKey(SL_KEY_ESCAPE))
	{

		if (slGetKey(SL_KEY_UP))
		{
			recy += speedRectangle *slGetDeltaTime();
		}
		if (slGetKey(SL_KEY_DOWN))
		{
			recy -= speedRectangle * slGetDeltaTime();
		}
		if (slGetKey(SL_KEY_RIGHT))
		{
			recx += speedRectangle * slGetDeltaTime();
		}
		if (slGetKey(SL_KEY_LEFT))
		{
			recx -= speedRectangle * slGetDeltaTime();
		}

		slSetBackColor(0.5, 0.75, 1.0);
		slSetForeColor(1, 0, 0, 1);
		slRectangleFill(recx,recy, 100, 100);

		slRender();
	}

	slClose();

	return 0;
}
