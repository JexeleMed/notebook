//Jakub Majer 2F
#include <math.h>
#include <graphics.h>

const int WIDTH = 600, HEIGHT = 600;
void drawLine(int moveToX, int moveToY, int drawX, int drawY, int color, int textX, int textY, char *name)
{
	moveto(moveToX, moveToY);
	setcolor(color);
	lineto(drawX, drawY);
	outtextxy(textX, textY, name);
}




int main()
{
	double x, y;
	moveto(WIDTH / 2, HEIGHT / 2);
	initwindow(WIDTH, HEIGHT);
	moveto(WIDTH / 2, HEIGHT / 2);
	//funkcja
	for(x=0; x<WIDTH; x+=0.01)
		{
			y=pow(x,2);
			setcolor(14);
			lineto(WIDTH / 2 + (x*100), HEIGHT / 2 - (y*100));
			
			
		}
	moveto(WIDTH / 2, HEIGHT / 2);
	for(x=0; x<WIDTH; x+=0.01)
		{
			y=pow(x,2);
			setcolor(14);
			lineto(WIDTH / 2 - (x*100), HEIGHT / 2 - (y*100));
		}	
	//linie
	drawLine(0, HEIGHT / 2, WIDTH, HEIGHT / 2, WHITE, WIDTH - 20, HEIGHT / 2 + 10,"X");
	drawLine(WIDTH / 2, 0, WIDTH / 2, HEIGHT, WHITE, WIDTH / 2 +10, 0, "Y");
	for(int k=300;k<WIDTH;k++)
	{
		for(int l=290;l<310;l++)
		{
			line(k,l,k,l+20);
			l+=100;
		}
		k+=50;
	}
	
	for(int k=0;k<WIDTH/2;k++)
	{		for(int l=290;l<310;l++)
		{
			line(k,l,k,l+20);
			l+=100;
		}
		k+=50;
	}
	
	// podzia³ka osi Y
	for(int k=290;k<310;k++)
	{
		for(int l=300;l<HEIGHT;l++)
		{
			line(k,l,k+20,l);
			l+=50;
		}
		k+=100;
	}
	
	for(int k=290;k<310;k++)
	{
		for(int l=300;l<HEIGHT;l++)
		{
			line(k,l,k+20,l);
			l-=50;
		}
		k-=100;
	}
	getch();
	closegraph();
	
	system("PAUSE");
	return 0;
}
