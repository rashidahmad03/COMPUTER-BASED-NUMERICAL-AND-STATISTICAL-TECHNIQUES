#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>
float f(float x)
{
return cos(x)-x*exp(x);
}
Void regula(float *x,float x0,float x1,float fx0,float fx1,int *itr)
{
	*x=x0-((x1-x0)/(fx1-fx0))*fx0;
	++(*itr);
	cout<<"iteration no."<<setw(3)<<*itr<<"x= "<<setw(7)<<setprecision(5)<<*x<<endl;
}
int main()
{
	Int itr=0,max itr;
	float x0,x1,x2,x3,aerr;
	clrscr();
cout<<"enter the value for x0,x1"<<"allowed error  ,  maximum itration"<<endl;
	cin>>x0>>x1>>aerr>>maxitr;
	regula(&x2,x0,x1,f(x0),f(x1),&itr);
	do{
		
if(f(x0)*f(x2)<0)
			x1=x2;
		else
			x0=x2;
		regular (&x3,x0,x1,f(x0),f(x1),&itr);
		if(fabs(x3-x2)<aerr)
		{
cout<<"after"<<itr<<"iterations"<<"root ="<<setw(6)<<setprecision(4)<<x3<<endl;
			getch();
			return 0;
}
		x2=x3;
	}
	while(itr<maxitr);
cout<<"\nsolution does not converge ,"<<"iterations not sufficient" <<endl;
getch();
	return1;
}
