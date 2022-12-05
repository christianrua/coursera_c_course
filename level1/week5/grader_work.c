/* 
    This script reads the input data from a .txt file then, computes de avg value.
    Christian Rua Dec 5, 2022
*/

#include <stdio.h>
int main()
	{
		FILE *fp; // declaration of file pointer
		int x; // declaration of variable
        fp =fopen("/home/chr1st14n_ru4/development/coursera_c_course/level1/week5/weight_northern_elephant_seal.txt", "w"); // opening of file
        if (!fp) // checking of error
			return 1;
        for (x=1; x<=10; x++){
            fprintf(fp,"%d\n", x); // giving conten
        }
        
        fclose(fp); // closing of file
        return  0;
    }