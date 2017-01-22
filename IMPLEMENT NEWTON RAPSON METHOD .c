#include <iostream.h>
#include <conio.h>
#define MAX 8
float f(float x);
float f1(float y);
void main()
{
	floata,b,c,d;
	inti,j,n;
	cout<<"\nEnter the number of iterations: ";
	cin>>n;
	for(i=-MAX;i<MAX;i++)
	{
		a=i;
		b=i+1;
		if(f(a)*f(b)<=0)
		{
			cout<<"\nThe initial approximate value is:";
			c=(a+b)/2.0;
			cout<<c;
			cout<<"\nn           c              f(c)";
for(j=0;j<n;j++)
			{
				cout<<"\n"<<j+1<<"   "<<c<<"   "<<f(c);
				d=c-(f(c)/f1(c));
				c=d;
			}
			getch();
		}
	}
}                                                                             /* Function is x^2-2x+1 */
float f(float x)
{
	return(x*x-2*x+1);
}                                                                       /* Differential of Function is 2x-2 */
float f1(float y)
{
	return(2*y-2);
}
