#include <stdio.h>
#include <math.h>
int main()
{
    // my varaible
    float basic_salary,allowance,house_rent,gross_salary;
    printf("enter your basic salary . ");
  scanf("%f",&basic_salary);
  //allownce
  allowance=0.40*basic_salary;
  printf("allownce.""%2f\n",allowance);
  //house rent
  house_rent=0.20*basic_salary;
  printf("house rent.""%2f\n",house_rent);
 //gross salary
 gross_salary=allowance+house_rent+basic_salary;
 printf("gross salaary.""%2f",gross_salary);
return 0;
}