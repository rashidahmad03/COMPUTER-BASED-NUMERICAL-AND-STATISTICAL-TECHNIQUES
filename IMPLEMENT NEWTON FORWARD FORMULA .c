#include <iostream.h>
#include <conio.h>
void main()
{
	inti,j,n;
	floatxy[10][11],h,p,px=1,x,y;
	charstr[80];
	clrscr();
cout<<"Enter the number of data : ";/* Data read opration. */
	cin>>n;
cout<<"Enter the data : "<<endl;
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
cout<<"\n"<<"The difference table is :-";/* Printing table */
cout<<"\n"<<"x       f(x)    ";
	for(i=0;i<n-1; i++)
		cout<<"^     "<<i+1;
	for(i=0;i<n;i++)
	{
		cout<<"\n";
		for(j=0;j<n+1-i;j++)
		{
			cout<<xy[i][j];
		}
	}
cout<<"\n"<<"Enter the value of 'x': ";/* Take the value of x for f(x) */
cin>>x;
h=xy[1][0]-xy[0][0];/* Calculate the value of f(x) */
	p=(x-xy[0][0])/h;
	y=xy[0][1];
	for(i=1;i<n;i++)
	{
		px*=(p-(i-1))/i;
		y+=xy[0][i+1]*px;
	}
	/* Printing the result */
	
cout<<"\n"<<"The value of function at x ="<<x<<"  is "<<y;
	getch();
}
