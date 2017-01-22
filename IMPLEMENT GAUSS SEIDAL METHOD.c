#include<iostream.h>
#include<conio.h>
float f1(float,float );
float f2(float, float);
float f3(float, float);
void main()
{
	float x=0,y=0,z=0,a,b,c;
	inti,itr;
	clrscr();
	cout<<"enter the iteration";
	cin>>itr;

	for(i=0; i<itr;i++)
	{
		a=f1(y,z);
		b=f2(x,z);
		c=f3(x,y);
		cout<<"\nx"<<x<<"\ty"<<y<<"\tz"<< z;
	  }
	getch();
}
float f1(float y, float z)
{
	float x;
	x=(10-2*y-z)/3;
	return x;
}
float f2(float x, float z)
{
	float y;
	y=(14-2*x-2*z)/3;
	return y;
}
float f3(float x,float y)
{
	float z;
	z=(14-x-2*y)/3;
	return z;
}
