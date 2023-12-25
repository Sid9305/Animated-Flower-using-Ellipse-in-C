#include<stdio.h>
#include<graphics.h>
#include<math.h>

void rotateEllipse(int x_center, int y_center, int x_radius, int y_radius, float angle) 
{
    float t, x, y;
    float theta = angle * 3.1416 / 180;
    for (t = 0; t < 360; t += 0.01) 
	{
        x = x_center + x_radius * cos(t * 3.1416 / 180) * cos(theta) - y_radius * sin(t * 3.1416 / 180) * sin(theta);
        y = y_center + x_radius * cos(t * 3.1416 / 180) * sin(theta) + y_radius * sin(t * 3.1416 / 180) * cos(theta);
        putpixel(x, y, WHITE);
    }
}


int main()
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	
	setfillstyle(SOLID_FILL,YELLOW);
	circle(250,250,25);
	floodfill(250,250,WHITE);
	
	setfillstyle(SOLID_FILL,MAGENTA);
	
	rotateEllipse(250,198,8,35,0);//top center
	floodfill(250,200,WHITE);
	
	rotateEllipse(200,250,35,8,0); //left center
	floodfill(200,250,WHITE);
	
	rotateEllipse(218, 203, 35, 8, 50); //left center top upside
	floodfill(218,203,WHITE);
	
	rotateEllipse(200, 220, 35, 8, 30); //left center bottom upside
	floodfill(200,220,WHITE);
	
	rotateEllipse(280,203,35,8,300); //right center top upside
	floodfill(280,203,WHITE);
		
	rotateEllipse(300,220,35,8,330); //right center bottom upside
	floodfill(300,220,WHITE);
	
	rotateEllipse(300,250,35,8,0); //right center
	floodfill(300,250,WHITE);
	
	rotateEllipse(205,275,8,35,65); //left center top downside
	floodfill(205,275,WHITE);	

	rotateEllipse(217,295,8,35,45); //left center bottom downside
	floodfill(217,295,WHITE);
	
	rotateEllipse(295,275,8,35,295);//right center top downside
	floodfill(295,275,WHITE);	
	
	rotateEllipse(283,295,8,35,315);//right center bottom downside
	floodfill(283,295,WHITE);
	
	rotateEllipse(250,302,8,35,0);//bottom center
	floodfill(250,300,WHITE);
	
	getch();
	closegraph();	
	return 0;
}
