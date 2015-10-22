#include <graphics.h>
#include <conio.h>
#include<stdio.h>
void ffill8(int x,int y,int fcolor,int ocolor)
 {
          int current;
          current= getpixel(x,y);
          if(current == ocolor)
          {
               putpixel(x,y,fcolor);
               ffill8(x,y+1,fcolor,ocolor);
               ffill8(x,y-1,fcolor,ocolor);
               ffill8(x+1,y,fcolor,ocolor);
               ffill8(x-1,y,fcolor,ocolor);
          }
 }  

 int main()
 {
          int gd=DETECT,gm,n,ch,xc,yc,r,fcolor,ocolor;
          initgraph(&gd,&gm,"");
          
         rectangle(50,50,100,100);
         //circle(50,50,100);
         ffill8(55,55,12,0);
          
          getch();
          closegraph();
 }
