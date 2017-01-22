#include <iostream.h>

#include <conio.h>

#define MAX 8 float f(float x);



void main()

{

floata,b,c,d,t; inti,j,n; clrscr();
cout<<"\n"<<"Enter the number of iterations:";

cin>>n;

for(i=-MAX;i<MAX;i++)

{

a=i; b=i+1; if(f(a)*f(b)<=0)
{

if(f(a)>f(b)) { t=a; a=b; b=t; }

cout<<"\n"<<"The initial approximate limits are:  ";

cout<<a<<b;

cout<<"\n"<<"a            b            c          f(c)";

for(j=0;j<n;j++) 
9

{

c=(a+b)/2; cout<<"\n"<<a<<b<<c<<f(c); if(f(c)<0)
a=c;

else

b=c;

}

getch();

}

}

}

float f(float x)

{

return(x*x-2*x+1);

} 
