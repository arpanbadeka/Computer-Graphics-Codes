#include<iostream>
#include<graphics.h> 
#include<math.h>
using namespace std;
void circlepoints(int,int,int,int);
/*int main()
{
    initwindow(400, 300, "Bresenham Circle drawing Algorithm");
    int r;
    int x,y,di,x1,y1;
    cout<<"Enter the radius\n";
    cin>>r;
    cout<<"Enter the x cordinate-center of the circle ";
    cin>>x1;
    cout<<"Enter the y cordinate-center of the circle ";
    cin>>y1;
    
    
    x = 0;
    y = r;
    di = 3 - 2*r;
    circlepoints(x1,y1,x,y);
    while(x<y)
    {
              
         if(di<0)
         {
                 di = di + 4*x + 6;
                 }
         else
         {
             
         di = di + 4*(x-y) + 10;
          y = y-1;
        
     }
     x = x+1;
     circlepoints(x1,y1,x,y);
}
while (!kbhit( ))
    {
        delay(200);
    }
 
 return 0;
}*/


//----------------------------------------------//

//Midpoint Circle Generating algorithm
/*int main()
{
    initwindow(400, 300, "Midpoint Circle generating Algorithm");
    int r;
    int x,y,di,x1,y1;
    cout<<"Enter the radius\n";
    cin>>r;
    cout<<"Enter the x cordinate-center of the circle ";
    cin>>x1;
    cout<<"Enter the y cordinate-center of the circle ";
    cin>>y1;
    
    
    x = 0;
    y = r;
    di = 1 - r;
    circlepoints(x1,y1,x,y);
    while(x<y)
    {
          x = x+1;    
         if(di<0)
         {
                 di = di + 2*x + 1;
                 }
         else
         {
             y = y-1;
         di = di + 2*(x-y) + 1;
        
     }
     circlepoints(x1,y1,x,y);
}
while (!kbhit( ))
    {
        delay(200);
    }
 
 return 0;
}
*/


int main()
{
    initwindow(400, 300, "Trignometric Circle generating Algorithm");
    int r;
    int x,y,di,x1,y1,x2,y2,x3,y3,theta;
    int temp;
    double c,s;
    double n = 3.14159/180;
    cout<<"Enter the radius\n";
    cin>>r;
    cout<<"Enter the x cordinate-center of the circle ";
    cin>>x1;
    cout<<"Enter the y cordinate-center of the circle ";
    cin>>y1;
    for(theta = 0;theta<=360;theta++)
    {
              x2 = r*cos(theta*n);
              y2 = r*sin(theta*n);
              x3 = int(x2 + 0.5);
              y3= int(y2 + 0.5);
               circlepoints(x3,y3,x1,y1);
              }
    
while (!kbhit( ))
    {
        delay(200);
    }
 
 return 0;
}







//-----------------------------------------------------------------------------------------------------------
/*
int main()
{
    initwindow(400, 300, "Polynomial -Circle generating Algorithm");
    int r;
    int x,y,di,x1,y1;
    cout<<"Enter the radius\n";
    cin>>r;
    cout<<"Enter the x cordinate-center of the circle ";
    cin>>x1;
    cout<<"Enter the y cordinate-center of the circle ";
    cin>>y1;
    
    
    x = 0;
    y = r;
    di = r/M_SQRT2;

    while(x<=di)
    {
          x = x+1;  
          y=sqrt(pow(r,2)-pow(x,2)); 
     circlepoints(x1,y1,x,y);
}
while (!kbhit( ))
    {
        delay(200);
    }
 
 return 0;
}


*/
/*int main()
{
    initwindow(400, 300, "DDA-Circle generating Algorithm");
    int r;
    int x,y,di,x1,y1;
    cout<<"Enter the radius\n";
    cin>>r;
    cout<<"Enter the x cordinate-center of the circle ";
    cin>>x1;
    cout<<"Enter the y cordinate-center of the circle ";
    cin>>y1;
    
    
    x = 0;
    y = r;
    di = 1-r;
    circlepoints(x1,y1,x,y);
    

    while(x<y)
    {
          x = x+1;  
        if(di<0)
        {
                di = di + 2*x+1;
                }
  else
  {
  y--; 
  di = di + 2*(x-y)+1;
 }
                
     circlepoints(x1,y1,x,y);
}
while (!kbhit( ))
    {
        delay(200);
    }
 
 return 0;
}

*/


void circlepoints(int x1,int y1,int x,int y)
{
 putpixel(x1+y,y1+x,10);
 putpixel(x1+x,y1+y,10);
  putpixel(x1+y,y1-x,10);
   putpixel(x1+x,y1-y,10);
 putpixel(x1-x,y1-y,10);
  putpixel(x1-y,y1-x,10);
   putpixel(x1-y,y1+x,10);
    putpixel(x1-x,y1+y,10);
}
