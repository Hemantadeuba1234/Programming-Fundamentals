/*
Student Name: Hemanta Deuba
Roll no: 17
Subject: Programming Fundamentals
Program: WAP to check the given number is palindrome or not.
Lab sheet: 19
Date: January 16,2017
*/
#include<stdio.h>
int main ()
    {
    int i,n,rev=0,reverse=0;
            printf("enter the number:");
            scanf("%d",&n);
    i=n;
            while (n>0)
    {
    rev=n%10;
    reverse=reverse*10+rev;
    n=n/10;
    }
    if(i==reverse)
    {
    printf("palindrome");
    }
    else
    {
    printf("not palindrome ");
    }
return 0;
}
