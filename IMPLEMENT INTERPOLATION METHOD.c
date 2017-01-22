#include<iostream.h>
#include<conio.h>
void main ()
{
	int x[5]={80,85,90,95,100},i,j;
	float y[5]={5026,5674,6362,7088,7854},fd[4],sd[3],td[2],frd[1],p,h,a,t,s;
	clrscr();
	cout<<"enter the position which place find tjhe inter polution=";
	cin>>s;
	cout<<"\n the value of x=";
	for(i=0;i<5;i++)
	{
		cout<<"\n"<<x[i];
	 }
	cout<<"\n  the value of function=";
	for(i=0;i<5;i++)
	 {
		cout<<"\n"<<y[i];
	 }
	for(i=0;i<5;i++)
	 {
		if(x[i]<x[i+1])
		{
		      h=x[i+1]-x[i];
			break;
		} }
		for(j=0;j<5;j++)
		 {
			if(x[j]>s)
			{
			j--;
			a=x[j];
			break;
			}}
		p=(s-a)/h;
		cout<<"\np=\n";
		for(i=0;i<4;i++)
		{
			fd[i]=y[i+1]-y[i];
			cout<<"\nfd="<<fd[i];
		}
		for(i=0;i<3;i++)
		{
			sd[i]=fd[i+1]-fd[i];
			cout<<"\nsd="<<sd[i];
		}
		for(i=0;i<2;i++)
		{
			td[i]=sd[i+1]-sd[i];
			cout<<"\ntd="<<td[i];
		}

		for(i=0;i<1;i++)
		 {
			frd[i]=td[i+1]-td[i];
			cout<<"\nfrd="<<frd[i];
		 }
t =y[j]+p*fd[j]+(p*(p-1)*sd[j])/2+(p*(p-1)*(p-2)*td[j])/6+(p*(p-1)*(p-2)*(p-3)*frd[j])/24;
		cout<<"\np("<<s<<")="<<t;
		getch();

}
