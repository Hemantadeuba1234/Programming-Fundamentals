/*
Student name: Hemanta Deuba
Subject: Programming Fundamentals
Roll no: 06
Lab-sheet no: 02
Program: Program to print area of a triangle, base & height are asked from users.
Date: 16th November, 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
float b,h,area=0;
printf("Enter base of the triangle:\n");
scanf("%f",&b);
printf("Enter height of the triangle:\n");
scanf("%f",&h);
area=0.5*b*h;
printf("The area of the triangle is: %f\n",area);
getch();
return(0);
}
