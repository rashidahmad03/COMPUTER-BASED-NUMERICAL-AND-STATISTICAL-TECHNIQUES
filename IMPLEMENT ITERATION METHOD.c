#include<conio.h>
#include<iostream.h>
float  fx(float);
floatgx(float );
void main()
{
	floatn,a,c,x=0;
	clrscr();
	cout<<"enter the no. of iterations";
	cin>>n;
	a=fx(x);
	cout<<"\n"<<a;
	for(inti=0;i<n;i++)
	{
                  c=gx(x);
cout<<"\nx"<<i<<"\t"<<x<<"\t"<<c;
		if(c==x)
		{
		cout<<"\n roots are identical";
		cout<<c;
		break;
		}
                 x=c;
       }
getch();
}
floatfx(float x)
{
	float y;
	y=x*x-2*x+1;
	return y;
}
floatgx(float x)
{
	float z;
	z=((x*x)+1)/2;
	return z;
}
