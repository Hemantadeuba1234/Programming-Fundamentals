/*
Student Name: Hemanta Deuba
Roll no: 17
Subject: Programming Fundamentals
Program: WAP to print reverse of any number.
Lab sheet: 19
Date: January 16,2017
*/
#include<stdio.h>
int main ()
    {
    int n,rev,reverse=0;
            printf("enter the number:");
            scanf("%d",&n);
            while (n>0)
    {
    rev=n%10;
    reverse=reverse*10+rev;
   n=n/10;
    }
    printf("reverse %d",reverse);
return 0;
}
