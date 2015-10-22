#include<stdio.h>
#include<graphics.h>
void car(int x)
{
    
    line(x + 150, 100, x + 252, 100);
    line(x + 150, 100, x + 120, 150);
    line(x + 252, 100, x + 280, 150);
    rectangle(x + 100, 150, x + 320, 200);
    circle(x + 130, 200, 17);
    circle(x + 290, 200, 17);
}
int main()
{
    int gd=DETECT,gm,i=-120;
    initgraph(&gd, &gm, "");
    setcolor(10);
    car(i);
    while(!kbhit())
    {
	i+=5;
	cleardevice();
	car(i);
	if(i>600)
	i=-120;
    }
    getch();
    closegraph();
    return 0;
}

