/*
    Christian Rua
    ternary operator and flow control
    Oct 20, 2022
*/

#include <stdio.h>
int main()
{
    int i=1,j=2;
    int result = (i, j + 1);
    printf("%d", result);
    int speed;
    printf("\nEnter your speed as an integer:");
    scanf("%d", &speed);
    speed = (speed <= 65)? (65) :(speed <=70)? (70):(90);
    switch (speed)
    {
        case 65: printf("\nNo speeding Ticket\n\n");break;
        case 70: printf("\nSpeeding Ticket\n\n");break;
        case 90: printf("\nExpensive Speeding Ticket\n\n");break;
        default: printf("\nIncorrect speed\n\n"); //unneeded
    }
    
    return 0;
}