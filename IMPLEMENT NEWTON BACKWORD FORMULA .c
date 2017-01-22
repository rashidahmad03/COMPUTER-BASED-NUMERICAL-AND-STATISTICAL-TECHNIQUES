#include <iostream.h>
#include<stdio.h>
#include <conio.h>
void main()
{
	inti,j,n;
	floatxy[10][11],h,p,px=1,x,y;
	charstr[80];
	clrscr();
	/* Data read opratio. */
	cout<<"Enter the number of data : ";
	cin>>n;
	cout<<"Enter the data : "<<"\n";
	for(i=0;i<n;i++)
	{
		cout<<"x("<<i+1<<") ";
		cin>>xy[i][0];
		cout<<"y("<<i+1<<") ";
		cin>>xy[i][1];
	}                                                              /* Forming difference table */
	for(j=2;j<n+1;j++)
		for(i=0;i<n-1;i++)
			xy[i][j]=xy[i+1][j-1]-xy[i][j-1];
	/* Printing table */
	cout<<"The difference table is :-  ";
	cout<<"\n"<<"x       f(x)    ";
	for(i=0;i<n-1; i++)
		cprintf("^%d     ",i+1);
	for(i=0;i<n;i++)
	{
		cout<<"\n";
		for(j=0;j<n+1-i;j++)
			cout<<"\t"<<xy[i][j];
	}                                                                 /* Take the valuen of x for f(x) */
	cout<<"\n\n"<<"Enter the value of 'x' : ";
	cin>>x;
	/* Calculate the value of f(x) */
	h=xy[n-1][0]-xy[n-2][0];
	p=(x-xy[n-1][0])/h;
	y=xy[n-1][1];
	for(i=1;i<n;i++)
	{
		px*=(p+(i-1))/i;
		y+=xy[n-1-i][i+1]*px;
	}
	/* Printing the result */
	cout<<"The value of function at x = "<<x<<" is "<<y;
	getch();
}
