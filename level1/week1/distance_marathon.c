/* Distance of a marathon in yards
 * ABC page 11 - variation
 * Sept 14, 2022
 * */
#include <stdio.h>

int main(void){
	int miles = 26, yards=385;
	double kilometers;
	kilometers = 1.609 * (miles + yards / 1760.0);
	printf("\n A marathon is %lf kilometers.\n", kilometers);
	return 0;
}
