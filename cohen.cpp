#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
 int wx1,wy1,wx2,wy2;
 initwindow(500,500);

 printf("enter the window coordinates wx1, wy1, wx2, wy2\n");   
 scanf("%d %d %d %d",&wx1,&wy1,&wx2,&wy2);
  rectangle(wx1,wy1,wx2,wy2);
  setcolor(RED);
 int x1, y1, x2, y2;
 printf("enter the coordinates of the line\n");
 scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
 line(x1,y1,x2,y2);
 int tempx, tempy;
 setcolor(WHITE);
 int l1=0,r1=0,t1=0,b1=0,l2=0,r2=0,t2=0,b2=0;

 
 if(x1<wx1)
 {
 l1=1;
 tempx=wx1;
 tempy=(y2-y1)*(tempx-x1)/(x2-x1)+y1;
 if((tempy>=wy1)&&(tempy<=wy2))
 {
                                x1=tempx;
                                y1=tempy;
 }
 }
 if(x1>wx2)
 {
 r1=1;
 tempx=wx2;
 tempy=(y2-y1)*(tempx-x1)/(x2-x1)+y1;
 if((tempy>=wy1)&&(tempy<=wy2))
 {
                                x1=tempx;
                                y1=tempy;
 }
 }
 if(y1<wy1)
 {
 t1=1;
 tempy=wy1;
 tempx=(x2-x1)*(tempy-y1)/(y2-y1)+x1;
 if((tempx>=wx1)&&(tempx<=wx2))
 {
       x1=tempx;
       y1=tempy;                              
 }
 }
 if(y1>wy2)
 {
 b1=1;
 tempy=wy2;
 tempx=(x2-x1)*(tempy-y1)/(y2-y1)+x1;
 if((tempx>=wx1)&&(tempx<=wx2))
 {
       x1=tempx;
       y1=tempy;                              
 }
 }
 if(x2<wx1)
 {
 l2=1;
 tempx=wx1;
 tempy=(y2-y1)*(tempx-x1)/(x2-x1)+y1;
 if((tempy>=wy1)&&(tempy<=wy2))
 {
                                x2=tempx;
                                y2=tempy;
 }
 }
 if(x2>wx2)
 {
 r2=1;
 tempx=wx2;
 tempy=(y2-y1)*(tempx-x1)/(x2-x1)+y1;
 if((tempy>=wy1)&&(tempy<=wy2))
 {
                                x2=tempx;
                                y2=tempy;
 }
 }
 if(y2<wy1)
 {
 t2=1;
 tempy=wy1;
 tempx=(x2-x1)*(tempy-y1)/(y2-y1)+x1;
 if((tempx>=wx1)&&(tempx<=wx2))
 {
       x2=tempx;
       y2=tempy;                              
 }
 }
 if(y2>wy2)
 {
 b2=1;
 tempy=wy2;
 tempx=(x2-x1)*(tempy-y1)/(y2-y1)+x1;
 if((tempx>=wx1)&&(tempx<=wx2))
 {
       x2=tempx;
       y2=tempy;                              
 }
}
  if((l1==0)&&(r1==0)&&(b1==0)&&(t1==0)&&(l2==0)&&(b2==0)&&(r2==0)&&(t2==0))
 {
 printf("line is completely visible\n");
 line(x1,y1,x2,y2);                                                                          
 }
 
 else if(((l1==1)&&(l2==1))||((b1==1)&&(b2==1))||((b1==1)&&(b2==1))||((t1==1)&&(t2==1)))
 {
      printf("line is completely invisible\n");
 }
 
 else
 line(x1,y1,x2,y2);

getch();
closegraph();
return 0;   
}
