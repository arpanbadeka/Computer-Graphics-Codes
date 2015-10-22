#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int wx1,wy1,wx2,wy2;

void region_code(int x1, int y1, int x2, int y2)
{
int tempx,tempy;     
int l1=0,r1=0,t1=0,b1=0,l2=0,r2=0,t2=0,b2=0;
if(x1<wx1)
{
l1=1;
}
if(x1>wx2)
{
          r1=1;
}
if(y1<wy1)
{
          t1=1;
}
if(y1>wy2)
{
          b1=1;
}

if(x2<wx1)
{
l2=1;
}
if(x2>wx2)
{
          r2=1;
}
if(y2<wy1)
{
          t2=1;
}
if(y2>wy2)
{
          b2=1;
}    

if((l1==0)&&(r1==0)&&(b1==0)&&(t1==0)&&(l2==0)&&(b2==0)&&(t2==0)&&(r2==0))
{
printf("line is completely visible\n");
line(x1,y1,x2,y2);                                                                          
}
else
if(((l1==1)&&(l2==1))||((t1==1)&&(t2==1))||((b1==1)&&(b2==1))||((r1==1)&&(r2==1)))
{
printf("line is completely invisible\n");
}
else
{
    tempx=(x1+x2)/2;
    tempy=(y1+y2)/2;
    if((tempx>x1)&&(tempx<x2)&&(tempy>y1)&&(tempy<y2))
    {
    region_code(x1,y1,tempx,tempy);
    region_code(tempx,tempy,x2,y2);
    }
}
}


int main()
{
    initwindow(500,500);
    setcolor(RED);
    printf("enter the coordinates of the window wx1 wy1 wx2 wy2\n");
    scanf("%d %d %d %d",&wx1, &wy1, &wx2, &wy2);
    rectangle(wx1,wy1,wx2,wy2);
    int x1, y1, x2, y2;
    printf("enter the coordinates of the line");
    scanf("%d %d %d %d",&x1, &y1, &x2, &y2);
    line(x1,y1,x2,y2);
    setcolor(WHITE);
    region_code(x1,y1,x2,y2);
    
    getch();
    closegraph();
    return 0;
}
// Comdition of Stack Overflow
