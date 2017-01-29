/*
Name: Hemanta Deuba
Roll: 17
Subject: Programming Fundamentals.
Program: Wap to find factorial using recursive function.
Date: January 29, 2017
*/
#include<stdio.h>
#include<conio.h>
int fact(int n);
int main()
{
int a,b;
printf("Enter a number:");
scanf("%d",&a);
b=fact(a);
printf("the factorial of %d is %d",a,b);
return 0;
}
int fact(int n)
{
    if(n==1 || n==0)
    return 1;
    else
        return n*fact(n-1);
}
