//Q.2) Write C program to find gross salary by adding % of HRA,DA,and TA of user choice.

#include<stdio.h>
#include<conio.h>

int main () {
    
    float base_salary;
    float HRA,DA,TA;

    printf("Base salary: ");
    scanf("%f,", &base_salary);

    printf("HRA: ");
    scanf("%f",&HRA);

    printf("DA: ");
    scanf("%f",&DA);

    printf("TA: ");
    scanf("%f",&TA);

    HRA=(HRA/100)*base_salary;
    DA=(DA/100)*base_salary;
    TA=(TA/100)*base_salary;

    base_salary=base_salary+HRA+DA+TA;

    printf("RS. %.1f",base_salary);

return 0;
getch();
}