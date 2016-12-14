/*
Student name: Hemanta Deuba
Subject: Programming Fundamentals
Roll no: 14
Lab-sheet no: 12
Program: Write a menu based program to create a calculator.(using switch case)
Date: 14th December, 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
    {
    int a,b,n;
    printf("\n ***************  THIS IS A SIMPLE CALCULATOR  *******************\n");
    printf("------------------------------------------------------------------------------\n");
    printf("\n ############### CHOOSE FROM THE MENU PLEASE!!! ###################\n");
    printf("\n 1. ADDITION \n");
    printf("\n 2. SUBTRACTION \n");
    printf("\n 3. MULTIPLICATION \n");
    printf("\n 4. DIVISION \n");
    printf("\n 5. EXIT \n");
    printf("------------------------------------------------------------------------------\n");
    scanf("%d",&n);
    printf("\n\n ##### ENTER FIRST NUMBER PLEASE!!! #####\n");
    scanf("%d",&a);
    printf("\n\n ##### ENTER SECOND NUMBER PLEASE!!! #####\n");
    scanf("%d",&b);
    switch(n)
    {
case 1:printf("\n ADDITION OF %d AND  %d is %d \n",a,b,a+b);
break;
case 2:printf("\n SUBTRACTION OF %d AND %d is %d \n",a,b,a-b);
break;
case 3:printf("\n MULTIPLICATION OF  %d AND %d is %d \n",a,b,a*b);
break;
case 4:printf("\n DIVISION OF %d AND %d is %d \n",a,b,a/b);
break;
case 5:printf("\n EXIT");
break;
    }
    printf("\n\n ********** THANKYOU PLEASE VISIT AGAIN *********\n\n");
    printf("--------------------------------------------------------------");
    getch();
    return 0;
    }
