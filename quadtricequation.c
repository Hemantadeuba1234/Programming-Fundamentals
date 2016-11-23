/*
student name:kamal rokka chhetri
subject:programming fundamental
program:w.a.p to find roots of quadratic equation
roll no.
date:31,nov,2016
*/
#include<stdio.h>
//#include<conio.h>
#include<math.h>
int main()
{
float a,b,c,x=0,y=0,e=0;
printf("enter value of a:\n");
scanf("%f",&a);
printf("enter value of b=\n");

scanf("%f",&b);
printf("enter value of c=\n");
scanf("%f",&c);
e=b*b-4*a*c;
printf("value of e=%f\n",e);

x=(-b+pow(e,0.5))/(2*a);
y=(-b-pow(e,0.5))/(2*a);

printf("quadratic equation if value is positive=%f\n",x);
printf("quadratic equation if value is negative=%f\n",y);
getch();
return 0;

}
