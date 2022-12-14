/* This script reads the file weight_northern_elephant_seal.txt, and computes de avg weight for the
northern elephant seal.

the total values been computed are 1000, the sum value is equal to 6840015, the avg weight is 6840.
the approach been followed is to check char by char if there is a digit, if so, it been save at a string buffer
later, when we got a number of four digits we accumulate the sum value, and we reset the string buffer for the next number.

*/

#include <stdio.h>
#include <errno.h>
#include <ctype.h>


int main () {
   FILE *fp;
   int c, number, acc, num_counter, sum;
   char str_name[3];

   fp = fopen("/home/chr1st14n_ru4/development/coursera_c_course/level1/week5/weight_northern_elephant_seal.txt","r");
   
   num_counter = 0;
   sum = 0;
   while(1) {
      c = fgetc(fp);
      if( feof(fp) ) {
         break;
      }
      // printf("%c", c);
      // printf("\n");
      if(isdigit(c)){
         str_name[num_counter] = c;
         if(num_counter==3){
            // printf("%s", str_name);
            // printf("\n");
            sscanf(str_name, "%d", &number);
            // printf("%d", number);
            // printf("\n");
            acc = acc + 1;
            sum = sum + number;
            //printf("sum value so far %d", sum);
            //printf("\n");
            num_counter = 0;
         } else {
            num_counter = num_counter + 1;
         }
         
      }
      
   }

   printf("number of elements %d \n", acc);
   printf("the sum value is %d \n", sum);
   printf("the avg value is %d \n", sum/acc);
   fclose(fp);
   return(0);
}
