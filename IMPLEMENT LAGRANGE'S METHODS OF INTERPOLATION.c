#include <iostream.h>
#include <conio.h>
void main()
{
	Int i,j,n;
	float  x[10],y[10],h,p,xx,yy=0,nr,dr;
	/* Data read opratio. */
	cout<<"\n"<<"Enter the number of data : ";
	cin>>n;
	cout<<"Enter the data : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"x("<<i+1<<"):";
		cin>>x[i];
		cout<<"y("<<i+1<<"):";
		cin>>y[i];
	}
	cout<<"\n"<<"Enter the value of 'x' : ";
	cin>>xx;
	for(i=0;i<n;i++)
	{
		nr = dr = 1;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				nr *= (xx-x[j]);
				dr *= (x[i]-x[j]);
			}
		}
		yy += (nr/dr)*y[i];
	}
	cout<<"\nValue of function at x="<<xx<<" is : "<<yy;
	getch();
}
