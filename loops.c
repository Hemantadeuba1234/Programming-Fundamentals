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
        int i,j,n;
        printf("Enter number of rows: \n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
            printf("%d",j);
            }
        printf("\n");
        }
        getch();
        return 0;
        }
