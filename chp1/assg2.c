//distance between two cities
#include<stdio.h>
#include<math.h>
int main()
{
   //variable declare
   float dist_cities,meter,feet,inches,centimeters;
   printf("Enter your distance in km. ");
   scanf("%f",&dist_cities);
   //distance in meters
   meter=1000*dist_cities;
   printf("km in meters. ""%f\n",meter);
   //distance in feet
   feet=3280.84*dist_cities;
   printf("km in feet. ""%f\n",feet);
   //distance inches
   inches=3970.079*dist_cities;
   printf("km in inches. ""%f\n",inches);
   //distamce in centimeters
   centimeters=100000*dist_cities;
   printf("km in centimeters.  ""%f",centimeters);
return 0;
}