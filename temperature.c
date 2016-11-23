/*
Student Name: Hemanta Deuba	
Subject: Programming Fundamentals
roll no: 06
lab no: 05
Program: WAP to read temperature in Fahrenheit and convert it into centigrade.
Date: 23 Nov,2016
*/
#include<stdio.h>
int main(){
float a, c;
printf("enter temperature in Fahrenheit\n ");
scanf("%f",&a);
c=0.55*(a-32);
printf("Temperature in centigrade:%f",c);
return 0;
}

