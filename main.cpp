#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    float h,l,k,radius,x,y,p;
    cout<<"Enter the center of the circle (l,k)...";
    cin>>l>>k;
    cout<<"Radius...";
    cin>>radius;
    h=0;
    x=0;
    y=radius;
    p=h*(h-radius);
    putpixel(l,k,YELLOW);
    do
    {
        x+=h;
        if(p<0)
        {
            p+=(2*h)*(x+h)+(h)*(h);
        }
        else
        {
            y-=h;
            p+=(2*h)*(x-y+h)+(h)*(h);
        }
        putpixel(l+x,k-y,YELLOW);
        putpixel(l-x,k-y,YELLOW);
        putpixel(l+x,k+y,YELLOW);
        putpixel(l-x,k+y,YELLOW);
        putpixel(l+y,k-x,YELLOW);
        putpixel(l-y,k-x,YELLOW);
        putpixel(l+y,k+x,YELLOW);
        putpixel(l-y,k+x,YELLOW);
    }while(x<y);
    getch();
    closegraph();
    return 0;
}
