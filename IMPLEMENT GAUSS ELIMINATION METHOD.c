#include<iostream.h>
#include<conio.h>
float fun(float x,float y);
void main()
{
	inti,n;
	float x0,y0,h,xv,k1,k2,k3,k4,x,y,k;
	clrscr();
	cout<<"\nEnter the value of x0,y0,h,xv:\n";
	cin>>x0>>y0>>h>>xv;
	n=(xv-x0)/h;
	x=x0;
	y=y0;
	for(i=0;i<=n;i++)
	{
		k1=h*fun(x,y);
		k2=h*fun(x+h/2,y+k1/2);
		k3=h*fun(x+h/2,y+k2/2);
		k4=h*fun(x+h,y+k3);
		k=(k1+(k2+k3)*2+ k4)/6;
		cout<<"\nx="<<x<<"\t"<<"y="<<y;
		x=x+h;
		y=y+k;
	}
	getch();
}
float fun(float x,float y)
{
	float r;
	r=x+y;
	return r;
}
