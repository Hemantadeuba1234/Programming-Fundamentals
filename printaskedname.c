/*
STUDENT NAME: Hemanta Deuba
SUBJECT: Programming Fundamentals
ROLL NO: 6
LAB SHEET NO: 1
PROGRAM: WAP to print name given by the user.
DATE: November 14
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    char name[20];
printf("What is your Name?\n");
scanf("%s",&name);
printf("Name of user is:%s",name);
getch(); //hold screen o/p
return 0; //return (0)
}
