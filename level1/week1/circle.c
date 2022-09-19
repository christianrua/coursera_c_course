/*
 * Circle an area
 * christian rua
 * september 14 2022
 * */
#include <stdio.h>
#define PI 3.14159

int main()
{
	double area = 0.0, radious = 0.0;
	printf("Enter radious: ");
	scanf("%lf", &radious);
	area = PI * radious * radious;
	printf("radius of %lf meters; area is %lf sq. meters\n", radious, area);
	return 0;
}
