#include <stdio.h>
#include <conio.h>
float yfunction(float one,float two);
void main()
{
int i,j;
float x,y,k1,k2,k3,k4,x1,y1,a,a1,b,b1,c,c1,d,d1,z,z1;
float xfinal[100], yfinal[100];
float h;
clrscr();
h = 0.2;
y=0;
x=0;
xfinal[0] =0.0;
yfinal[0]=0.0;
for(i=0;i<=2;i++)
{
k1= h*(x+y);
k2=h*(x+0.5*h+y+0.5*k1);
k3=h*(x+0.5*h+y+0.5*k2);
k4=h*(x+h+y+k3);
x= x+h;
y1 = (k1+ 2* k2+ 2* k3+ k4);
y= y+(y1/6);
xfinal[i+1] = x;
yfinal[i+1] =y;
printf("\n%f\t%f\t%f\t%f",x,y,y1,k2);
}
for(i=4;i<=10;i++)
{
xfinal[i]=x+h;
a=xfinal[i-1];
a1=yfinal[i-1];
b=xfinal[i-2];
b1=yfinal[i-2];
c=xfinal[i-3];
c1=yfinal[i-3];
d=xfinal[i-4];
d1=yfinal[i-4];
yfinal[i] = yfinal[i-1]+ (h*(55*yfunction(a,a1)-59*yfunction(b,b1)+37*yfunction(c,c1)-9*yfunction(d,d1)))/24;
z=xfinal[i];
z1=yfinal[i];
yfinal[i] = yfinal[i-1]+ (h*(9*yfunction(z,z1)+19*yfunction(a,a1)-5*yfunction(b,b1)+1*yfunction(c,c1)))/24;
printf("\n%f\t%f",xfinal[i],yfinal[i]);
x=x+h;
}
getch();
}

float yfunction(float one, float two)
{
float yagain;
yagain = one+two;
return(yagain);
}
