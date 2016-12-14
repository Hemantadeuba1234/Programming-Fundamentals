/*
Student name: Hemanta Deuba
Subject: Programming Fundamentals
Roll no: 14
Lab-sheet no: 12
Program: WAP to check whether a number is divisible by 5 & 11 or not.
Date: 14th December, 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
    {
        int a;
    printf("Enter a number please! \n\n");
    scanf("%d",&a);
    if (a%5==0 && a%11==0)
        {
        printf("the number is divisible by 5 and 11 \n\n");
        }
    else
        {
        printf("the number is not divisible by 5 and 11 \n\n");
        }
    getch();
    return 0;
    }
