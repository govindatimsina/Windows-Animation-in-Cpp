#include <stdio.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm, (char *)"c:\\tc\\bgi" );
	delay(500);
	setbkcolor(1);
	cleardevice();
	delay(500);
//	setlinestyle(0, 0, 3);

	//'D'
	  	line(50,50, 50, 200);
  		arc(50, 125, 270, 90, 75);
	
	//'E' 
	 	line(120, 125, 180, 200);
 		line(120, 125, 185, 80);
  		line(153, 165, 185, 140);
  		line(180, 200, 230, 160);
  
  	//'L'
  		line(225, 50, 225, 200);
  		line(225, 200, 260, 200);
  
  	//'L'
  		line(265, 50, 265, 200);
  		line(265, 200, 285, 200);
  
  	delay(2000);
  	cleardevice();
  
  	setbkcolor(0);
  	cleardevice();
  	moveto(225, 350);
  	outtext("Starting Windows");
  	delay(4000);
  	setbkcolor(8);
  	cleardevice();
  
  	//Windows logo Animation
	for(int i=0; i<=150; i++)
  	{
  		setfillstyle(SOLID_FILL, RED);
  		rectangle(100+i,50+i, 150+i, 100+i);
  		floodfill(100+i+1,50+i+1, WHITE);
  	
  		setfillstyle(SOLID_FILL, GREEN);
  		rectangle(455-i, 50+i, 505-i, 100+i);
  		floodfill(455-i+1,50+i+1, WHITE);
  
  		setfillstyle(SOLID_FILL, BLUE);
 		rectangle(100+i, 405-i, 150+i, 455-i);
		floodfill(100+i+1,405-i+1, WHITE);
  
  		setfillstyle(SOLID_FILL, YELLOW);
  		rectangle(455-i, 405-i, 505-i, 455-i);
  		floodfill(455-i+1,405-i+1, WHITE);
  	
	delay(30);
  
  	if(i==150)
  		{
  			delay(30);
  			moveto(250, 320);
  			outtext("Microsoft Windows");
  			getch();
  		}
  		cleardevice();
  	}
  
  	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	outtextxy(177,180,"Please Wait...");
	
	for(int i=170;i<450;i++)
	{
		delay(30);
		line(i,210,i,230);
	}

  	cleardevice();
  	moveto(290, 225);
  	outtext("Welcome...");
  	delay(3000);
  	setbkcolor(0);
  	cleardevice();
  	delay(1000);
  
  	rectangle(20, 10, 50, 40);
  	rectangle(30, 40, 40, 49);
  	ellipse(35, 54, 0, 360, 10, 5);
  	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
  	outtextxy(20, 56, "This PC");
  	delay(5000);
  	getch();
  	closegraph();
}
