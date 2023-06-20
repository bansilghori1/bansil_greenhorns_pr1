/*Q.1) Write a program to convert temperature from degrees celsius to Fahrenheit.
      Use formula for C TO F is: F = (C*9/5)+ 32  */

#include<stdio.h>
#include<conio.h>

float main (){
      
float C,F;

printf("The temperature in Celcius:  ");
scanf("%f", &C);

F = (C * 9/5)+32 ;

printf("The temperature in Fahrenheit: %.1f",F);

return 0;
getch();
}