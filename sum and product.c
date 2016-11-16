/*
Student name: Hemanta Deuba
Subject: Programming Fundamentals
Roll no: 06
Lab-sheet no: 02
Program: Program to find the sum and product of three numbers given by the user.
Date: 16th November, 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,product,sum;
printf("Enter first number:\n");
scanf("%d",&a);
printf("Enter second number:\n");
scanf("%d",&b);
printf("Enter third number:\n");
scanf("%d",&c);
sum=a+b+c;
product=a*b*c;
printf("The sum of numbers are: %d \n",sum);
printf("The product of numbers are: %d \n",product);
getch();
return(0);
}
