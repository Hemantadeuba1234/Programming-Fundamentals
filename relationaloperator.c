/*
Student Name     : Hemanta Deuba
Roll No          : 14
Lab Sheet        : 10
Program          : WAP to use relational operator.(To print the division of the entered percentage.)
Date             : December 05,2016
*/
#include<stdio.h>
#include<conio.h>
int main()
    {
    float a;
    printf("Enter the percentage of 1st student \n\n\n");
    scanf("%f",&a);
    if(a>=60 && a<80)
        {
            printf("The division of the student is 1st division \n\n");
        }
    if(a>=50 && a<60)
    {

        printf("The division of the student is 2nd divison \n\n");
    }
    if(a>=40 && a<50)
    {
        printf("The division of the student is 3rd division \n\n");
    }
    if(a>=80)
    {
        printf("The division of the student is distinction \n\n");
    }
    if(a<40)
    {
        printf("The student has failed \n\n");
    }
return 0;
    }
