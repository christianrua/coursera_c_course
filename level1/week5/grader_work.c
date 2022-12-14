/* 
    This script reads the input data from a .txt file then, computes de avg value.
    Christian Rua Dec 5, 2022
*/

/* C program to read text from a file - ReadingFile.C */

#include <stdio.h>
#include <stdlib.h> //for exit() function
#include <ctype.h>
#include <string.h>

void main()
{
 //variables declaration
 FILE *fptr;
 char ch;
 char weight[5]; /* variable to do the casting from char to int */
 int sumWeight = 0; /* variable to sum all the values */
 int counter = 0; /*variable to count the total values in the txt file.*/



 /* opening the file for reading */
 fptr = fopen("/home/chr1st14n_ru4/development/coursera_c_course/level1/week5/weight_northern_elephant_seal_small.txt", "r");
 if (fptr == NULL)
  {
   printf("Cannot open file \n");
   exit(0);
  }
  ch = fgetc(fptr);
  while (ch != EOF)
  {
   printf ("%c\n",ch);
   if(isdigit(ch)){
       weight = weight + ch;
       if(strlen(weight) == 5){
           weight = ch;
       }
       if(strlen(weight) == 4){
           counter++;
           printf("the counter value is %d\n", counter);
           printf("the weight value is %c", weight);
           sumWeight = sumWeight + (int) weight;
       }  
   } 
   ch = fgetc(fptr);
    
  }
 printf("counter value %d",counter); 
 fclose(fptr);
}