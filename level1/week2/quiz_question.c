#include <stdio.h>  
 int main(void) {
    int a = 3, b = 4, c = -2;
    int result;
    result = ++a + b++;
    printf("\n result %d \n", result);
    return 0;
 }