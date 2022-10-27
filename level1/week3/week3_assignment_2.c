/* Function that prints a table of values for sine and cosine between (0, 1)
Christian Rua Oct 26, 2022
    
*/

#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{ 
    double sin_value, cos_value,i;
    printf("\n"); //start building the table shape
    printf("---------------------------------\n");
    printf("|  number  | sin value| cos value |\n"); //table header
    for(i = 0.0; i <= 1; i = i +0.1)
        { //table content
            printf("---------------------------------\n");
            printf("| %lf | %lf | %lf  |\n", i, sin(i), cos(i));
        }
    printf("---------------------------------\n"); //table footer
    return 0;
}