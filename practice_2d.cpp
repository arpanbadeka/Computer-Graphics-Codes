#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<cmath>
using namespace std;
void draw2d(int, int [],int []);
int main()
{
int x[20], y[20];
int x1[20], y1[20], fs,i;
int tx =0, ty =0;
double t;
double theta;
int xr,yr;
float sc;
int ts;
int ch;
double xsh;
initwindow(400,500,"Practice 2D");
cout<<"Enter the no of cordinates:";
cin>>fs;
for(i=0;i<fs;i++)
{
                 cout<<"Enter the "<<i+1<<"Coordinate\n";
                 cin>>x[i]>>y[i];
                 
                 }
draw2d(fs,x,y);
                
cout<<"Enter the choice:\n";
cout<<"1. Translation 2. Scaling along Origin 3.Scaling along a fixed point 4. Rotation about Origin 5. Rotation about Fixed Point 6.Xshearing 7. Ysheering\n";

cin>>ch;  
switch(ch)
{
          case 1: cout<<"Enter the translation units";
          cin>>ts;
          for(i=0;i<fs;i++)
          {
                   x1[i] = x[i] + ts;
                   y1[i] = y[i] +ts;        
                           }
          cout<<"After Translation";
          draw2d(fs, x1, y1);
          break;
          
          case 2: cout<<"Enter the scaling value";
          cin>>sc;
          for(i=0;i<fs;i++)
          {
                           x1[i] = x[i]*sc;
                           y1[i] = y[i]*sc;
                           }
          cout<<"After Scaling";
          draw2d(fs,x1,y1);
          break;
              
          case 3: cout<<"Enter the scaling value:";
          cin>>sc;
          cout<<"Enter the fixed Point";
          cin>>xr>>yr;
          for(i=0;i<fs;i++)
          {
                           x1[i] = xr + (x[i]-xr)*sc;
                           y1[i] = yr + (y[i]-yr)*sc;
                           
                           }
           cout<<"After scvaling along fixed Point";
           draw2d(fs,x1,y1);
           break;
           
           case 4: cout<<"Enter the rotation angle";
           cin>>t;
          theta=3.14*t/180;
           for(i=0;i<fs;i++)
           {
             x1[i] = abs(x[i]*cos(theta) - y[i]*sin(theta));
             y1[i] = abs(x[i]*sin(theta) + y[i]*cos(theta));              
             }
             cout<<"After rotating about Origin";
             draw2d(fs, x1,y1);
             break;
            
             case 5: cout<<"Enter the rotation angle";
           cin>>theta;
           cout<<"Enter the fixed Point";
           cin>>xr>>yr;
           //theta=3.14*t/180;
           for(i=0;i<fs;i++)
           {
             x1[i] = abs(xr + ((x[i]-xr)*cos(theta)) - ((y[i]-yr)*sin(theta)));
             y1[i] = abs(yr + ((x[i]-xr)*sin(theta)) + ((y[i]-yr)*cos(theta)));              
             }
             cout<<"After rotating about Origin";
             draw2d(fs, x1,y1);
             break;
             
           case 6: cout<<"X shearing";
           cin>>xsh;
           for(i=0;i<fs;i++)
           {
            x1[i] = abs(x[i] + xsh * y[i]);
            y1[i] = y[i];                
                            }
            cout<<"After X shearing";
            draw2d(fs,x1,y1);
            break;
            
            case 7: cout<<"Y shearing";
           cin>>xsh;
           for(i=0;i<fs;i++)
           {
            x1[i] = x[i];
            y1[i] = xsh*x[i] + y[i];                
                            }
            cout<<"After y shearing";
            draw2d(fs,x1,y1);
            break;
}

getch();
return 0;
}
void draw2d(int fs, int x[],int y[])
{
     int i;
for(i=0;i<fs;i++)
{
                if(i != (fs-1))
                {
                     line(x[i],y[i],x[i+1],y[i+1]);
                     
                 }
                 else
                 line(x[i],y[i],x[0],y[0]);
                }
                }
