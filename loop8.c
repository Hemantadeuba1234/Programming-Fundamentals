/*
Student Name: Hemanta Deuba
Roll no: 17
Subject: Programming Fundamentals
Program: WAP to display loop patterns.
Lab sheet: 19
Date: January 16,2017
*/
#include<stdio.h>
#include<conio.h>
    int main()
        {
        int i,j,a;
        a=1;
        for(i=1;i<=2;i++)
        {
            for(j=1;j<=4;j++)
            {
            printf("%d",a);
            a++;
            }
        printf("\n");
        }
        getch();
        return 0;
        }
