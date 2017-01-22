#include <iostream.h>
#include <conio.h>
void main()
{
	Int i,j,n;
	Float xy[10][11],h,p,px=1,x,y;
	/* Data read opratio. */
	clrscr();
	cout<<"\nEnter the number of data : ";
	cin>>n;
	cout<<"\nEnter the data : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"x("<<i+1<<") : ";
		cin>>xy[i][0];
		cout<<"y("<<i+1<<") : ";
		cin>>xy[i][1];
	}
	/* Forming difference table */
	for(j=2;j<n+1;j++)
		for(i=0;i<n-j+1;i++)
			xy[i][j]=(xy[i+1][j-1]-xy[i][j-1])/(xy[i+(j-1)][0]-xy[i][0]);
	/* Printing table */
	cout<<"\nThe difference table is :-";
	cout<<"\n"<<"x           f(x)       ";
	for(i=0;i<n-1; i++)
		cout<<"^"<<i+1<<"           ";
	for(i=0;i<n;i++)
	{
		cout<<"\n";
		for(j=0;j<n+1-i;j++)
			cout<<xy[i][j]<<"         ";
	}
	/* Take the valuen of x for f(x) */
	cout<<"\nEnter the value of 'x' : ";
	cin>>x;
	/* Calculate the value of f(x) */
	y=xy[0][1];
	for(i=1;i<n;i++)
	{
		px *= (x-xy[i-1][0]);
		y += xy[0][i+1]*px;
	}
	/* Printing the result */
	cout<<"\nThe value of function at x = "<<x<<" is "<<y;
	getch();
}
