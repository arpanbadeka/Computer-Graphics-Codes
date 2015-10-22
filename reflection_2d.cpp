#include<iostream>
#include<conio.h>
#include<graphics.h>
void disp(int , int [][3]);
void mul(int,int [][3], int [][3], int [][3]);
void reflection(int, int [][3]);
using namespace std;
int main()
{
    int c[10][3], n;
    int i;
    initwindow(1000,1000);
    cout<<"Enter the number of Vertices:\n";
    cin>>n;
    cout<<"Enter the coordinates:\n";
    for(i=0;i<n;i++)
    {
                    cin>>c[i][0]>>c[i][1];
                    c[i][2] = 1;
    }
    
    setcolor(BLUE);
    disp(n,c);
    reflection(n,c);
    getch();
    return 0;
    
}



void disp(int n, int c[][3])
{
     
     
     int maxx, maxy;
     maxx = getmaxx()/2;
     maxy = getmaxy()/2;
     
     int i = 0;
     while(i<n-1)
     {
     line(maxx+c[i][0], maxy-c[i][1], maxx + c[i+1][0], maxy - c[i+1][1]);
      i++;
      }
     i = n-1;
     line(maxx + c[i][0], maxy - c[i][1], maxx + c[0][0], maxy - c[0][1]);
     
     setcolor(RED);
     line(0, maxy, maxx*2, maxy);
     line(maxx, 0, maxx, maxy*2);
     setcolor(WHITE);
     
        
}
 void mul(int n, int a[][3], int b[][3], int c[][3])
 {
      int i,j,k;
 for(i=0;i<n;i++)
 for(j=0;j<3;j++)
 a[i][j] = 0;
 
 for(i=0;i<n;i++)
 for(j=0;j<3;j++)
 for(k=0;k<3;k++)
 {
                 a[i][j] = a[i][j] + c[i][k]*b[k][j];
                 }
 
 }
    
void reflection(int n, int c[][3])
{
     int a[10][3], b[10][3];
     int i,j;
     int ch;
     for(i=0;i<n;i++)
     for(j=0;j<3;j++)
                     {
                                     b[i][j] = 0;
                                     if(i==j)
                                     b[i][j] = 1;
                                     
                                     }
                                     cout<<"Enter your choice\n";
                                     cin>>ch;
                                     //1 is x : 2 is y : 3 is origin : 4 is y=x : 5 is y=-x
switch(ch)
{
case 1:
b[1][1]=-1;
break;
case 2:
b[0][0]=-1;
break;
case 3:
b[0][0]=-1;
b[1][1]=-1;
break;
case 4:
b[0][0]=0;
b[1][1]=0;
b[0][1]=1;
b[1][0]=1;
break;
case 5:
b[0][0]=0;
b[1][1]=0;
b[0][1]=-1;
b[1][0]=-1;
break;
case 6:
break;
default:
cout<<"\n\tInvalid Choice: ";
break;
}
mul(n,a,b,c);
setcolor(RED);
disp(n,a);
                                     
 }
 
