#include<iostream.h>
#include<conio.h>
float fun1(float x);
void main()
{
	floata,b,c;//where initial conditio is a=4, b=2
	inti,itr;
	clrscr();
	cout<<"enter the max iteration";
	cin>>itr;
	for(i=0;i<itr;i++)
	{
if(fun1(i)*fun1(i+1)<0)
{          a=i;
			b=i+1;
			break;
		}
	}
	for(i=0;i<itr;i++)
	{
		c=b-(fun1(b)*(b-a))/(fun1(b)-fun1(a));
		if(fun1(a)*fun1(c)<0)
		{
			b=c;
		}
		else
		{
			a=c;
		}
		cout<<i<<"\t"<<a<<"\t"<<b<<endl;
	}
	getch();
}
float fun1(float x)
{
	float g;
	g=x*x-4*x-10;
	return g;
}
