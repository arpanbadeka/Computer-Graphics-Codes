#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2,dx,dy;
    float len,new_dx,new_dy,x,y;
    printf("Enter the x1,y1 Value");
    scanf("%d%d",&x1,&y1);
    printf("Enter the x2,y2 Value");
    scanf("%d%d",&x2,&y2);
    initwindow(600,800);
    dx=x2-x1;
    dy=y2-y1;
    if(abs(dx)>=abs(dy))
    {
       len=abs(dx);
       }
    else
    {
        len=abs(dy);
        }
    new_dx=dx/len;
    new_dy=dy/len;
    x=x1+0.5*(new_dx);
    y=y1+0.5*(new_dy);
    int i=1;
    while(i<=len)
    {
    putpixel(int(x),int(y),RED);
    x+=new_dx;
    y+=new_dy;
    i=i+1;
}
 while(!kbhit()); 
closegraph(); 
}
    
    
