/*
Student name: Hemanta Deuba
Subject: Programming Fundamentals
Roll no: 06
Lab-sheet no: 02
Program: Program to find division of two numbers given by the user.
Date: 16th November, 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
float a,b,divide;
printf("Enter a number: \n");
scanf("%f",&a);
printf("Enter a number: \n");
scanf("%f",&b);
divide=a/b;
printf(" Division of two numbers is: %f \n",divide);
getch();
return(0);
}
