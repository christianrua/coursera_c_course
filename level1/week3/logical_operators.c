/* 
Sally Coder
logical operators and short circuit evaluation
September 27, 2022
*/

#include <stdio.h>
int main() {
    int outside, weather;
    printf("\nEnter if outside 1 true 0 false: ");
    scanf("%d", &outside);
    printf("\nEnter if rain 1 true 0 false: ");
    scanf("%d", &weather);
    if (outside && weather)
        printf("\nPlease use an umbrella. \n");
    else
        printf("\nDress normally.\n");
    return 0;        
}