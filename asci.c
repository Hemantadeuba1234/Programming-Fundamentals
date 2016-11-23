/*
Student name: Hemanta Deuba
Subject: Programming Fundamentals
Roll no: 06
Lab-sheet no: 05
Program: Program to find ASCII value of any character assigned from users.
Date: 23 November, 2016
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    char c;
    int a;
    printf("Enter a character: ");
    scanf("%c", &c);

    a=c;

    printf("ASCII value is: %d", a);
    getch();
    return 0;
}
