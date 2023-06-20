//Q.3) Write C program to find the third angle of triangle if two angle are given.


#include<stdio.h>
#include<conio.h>

int main () {

int First_angle,Second_angle,Third_angle ;

printf("First angle  :  ");
scanf("%d", &First_angle);

printf("Second angle  :  ");
scanf("%d", &Second_angle);

Third_angle = 180 - (First_angle +Second_angle);

printf("Third angle  : %d",Third_angle);

return 0;
getch();
}