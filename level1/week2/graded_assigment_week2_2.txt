/* Print the sin value for a given value between 0 and 1 non inclusive
 * Christian Rua
 * September 27 2022
 * */
#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main () {

   double value, response, constant;
   printf("Enter value between 0 and 1, non inclusive: ");
   scanf("%lf", &value);
   if (value < 0 || value > 1) {
      printf("The input value must be in the range 0 to 1, non inclusive \n");
      return(0);
   } else {
      constant = PI / 180;
      response = sin(value*constant);
      printf("The sine of %lf is %lf degrees\n", value, response);
      return(0);
   }
}