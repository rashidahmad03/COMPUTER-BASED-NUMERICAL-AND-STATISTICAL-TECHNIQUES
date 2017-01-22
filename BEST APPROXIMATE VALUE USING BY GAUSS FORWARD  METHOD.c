#include <iostream.h>
#include <conio.h>
void main()
{
	Int i,j,n,a;
	Float xy[10][11],h,p,px=1,x,y;
	Char str[80];
	clrscr();
	/* Data read opratio. */
	cout<<"Enter the number of data : ";
	cin>>n;
	cout<<"Enter the data : "<<"\n";
	for(i=0;i<n;i++)
	{
		cout<<"x("<<i+1<<")";
		cin>>xy[i][0];
		cout<<"y("<<i+1<<")";
		cin>>xy[i][1];
	}
	/* Forming difference table */
	for(j=2;j<n+1;j++)
		for(i=0;i<n-1;i++)
			xy[i][j]=xy[i+1][j-1]-xy[i][j-1];
	/* Printing table */
	cout<<"\n"<<"The difference table is :-";
	cout<<"\n"<<"x             f(x)    ";
	for(i=0;i<n-1; i++)
		cout<<"^"<<i+1;
	for(i=0;i<n;i++)
	{
		cout<<"\n";
		for(j=0;j<n+1-i;j++)
		{
			cout<<xy[i][j];
		}
	}
	/* Take the value of x for f(x) */
cout<<"\n"<<"Enter the value of 'x' : ";
	cin>>x;
	/* Calculate the value of x0 */
	while(xy[j][0]<x){j++;};
	j=j-1;
	cout<<"j ="<<j;
	/* Calculate the value of f(x) */
	h=xy[1][0]-xy[0][0];
	p=(x-xy[j][0])/h;
	y=xy[j][1];
	for(i=1;i<n;i++)
	{
		a=((i+2)/2-1)*((i%2)?1:-1);
		cout<<"\n"<<a;
		px*=(p+a)/i;
		y+=xy[j][i+1]*px;
		cout<<"\n"<<xy[j][i+1]*px;
		(i%2)?j--:j;
	}
	/* Printing the result */
	cout<<"\nThe value of function at x = "<<x<<"  is "<<y;
	getch();
}
