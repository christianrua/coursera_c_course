/* Christian Rua
if and realtions and flow of control
Sep 28, 2022
*/

#include <stdio.h>
int main() {
    int speed;
    printf("\nEnter your speed as an integer:");
    scanf("%d", &speed);
    if(speed < 65)
        printf("\nNo speeding Ticket\n\n");
    else
        printf("\n Speeding Ticket\n\n");
    return 0;        
}