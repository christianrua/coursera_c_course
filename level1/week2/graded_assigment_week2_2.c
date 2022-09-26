#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main () {

   double value, response, val;
   printf("Enter value:");
   scanf("%lf", &value);
   val = PI / 180;
   response = sin(value*val);
   printf("The sine of %lf is %lf degrees", value, response);
   
   return(0);
}