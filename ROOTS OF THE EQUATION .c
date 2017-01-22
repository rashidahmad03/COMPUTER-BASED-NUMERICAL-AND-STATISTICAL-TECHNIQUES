
#include<stdio.h>

#include<conio.h>

#include<math.h>

void main()

{

int a,b,c,d;

float x1,x2;

printf("enter the value of a,b,c\n"); scanf("%d%d%d",&a,&b,&c); d=b*b-4*a*c;
if(d==0)

{

printf("both root are equal");

x1=-b/(2*a);

x2=x1 ;

printf("first root x1=%f\n",x1);

printf("second root x2=%f\n",x2);

} else if(d>0)
{

printf("both roots are real and diff-2\n");

x1=(-b+sqrt(d))/(2*a); x2=(-b-sqrt(d))/(2*a); printf("first root x1=%f\n",x1); 

printf("second root x2=%f\n",x2);

}

else

printf("root are imaginary \n no solution \n");

getch();

} 
