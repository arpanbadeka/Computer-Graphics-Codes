#include<stdio.h>
#include<graphics.h>
int main()
{
    int x1,y1,x2,y2,dx,dy,i;
    float p;
    initwindow(800,600);
    printf("enter x1,y1");
    scanf("%d%d",&x1,&y1);
    printf("enter x2,y2");
    scanf("%d%d",&x2,&y2);
    putpixel(x1,y1,WHITE);
    dx=x2-x1;
    dy=y2-y1;
    p=2*dy-dx;
    for(i=0;i<=dx;i++)
    {
      if(p>0)
      {
             x1+=1;
          putpixel(x1,y1,WHITE);
          p+=2*dy;
          }
      else
      {
          x1+=1;
          y1+=1;
          putpixel(x1,y1,WHITE);
          p+=(2*dy)-(2*dx);
          }
          }
           while(!kbhit());
           closegraph();
} 
    
