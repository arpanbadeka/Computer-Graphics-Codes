#include<stdio.h>
#include<graphics.h>
int main()
{
    initwindow(800,600);
    int x1,y1,x2,y2,dx,dy,i;
    float f;
    printf("Enter x1,y1,x2,y2");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    putpixel(x1,y1,WHITE);
    dx=x2-x1;
    dy=y2-y1;
    f=(dy-dx)/2;
    for(i=abs(dx);i>=0;i--)
    {
       if(f>0)
       {
         x1-=1;
         putpixel(x1,y1,WHITE);
         y1-=1;
         f-=dy;
         }
       else 
       {
           x1-=1;
           y1-=1;
           putpixel(x1,y1,WHITE);
           f-=dy-dx;
           }
           }
           while(!kbhit());
           closegraph();
           }
      
