#include <stdio.h>
#include <errno.h>

int main () {
   FILE *fp;
   int c, number, acc;
   char str_num[5];

   fp = fopen("/home/chr1st14n_ru4/development/coursera_c_course/level1/week5/weight_northern_elephant_seal_small.txt","r");
   fgets(str_num, 5, fp); 
   printf("string is: %s\n", str_num);

   return(0);
}

// int main () {
//    FILE *fp;
//    int c, number, acc, num_counter;
//    char str_name[4];

//    fp = fopen("/home/chr1st14n_ru4/development/coursera_c_course/level1/week5/weight_northern_elephant_seal_small.txt","r");
   
//    num_counter = 1;
//    while(1) {
//       c = fgetc(fp);
//       if( feof(fp) ) {
//          break;
//       }
//       printf("%c", c);
//       printf("\n");
//       number = (int) c;
//       printf("%d", number);
//       printf("\n");
//       acc = acc + number;

//    }
//    printf("the total sum is %d", acc);
//    fclose(fp);
//    return(0);
// }

// int main()
// {
//   float f1, f2;
//   int i1, i2;
//   FILE *my_stream;
//   char my_filename[] = "/home/chr1st14n_ru4/development/coursera_c_course/level1/week5/weight_northern_elephant_seal.txt";

//   my_stream = fopen(my_filename, "w");
// //   fprintf (my_stream, "%f %f %#d %#d", 23.5, -12e6, 100, 5);

//   /* Close stream; skip error-checking for brevity of example */
//   fclose (my_stream);

//   my_stream = fopen (my_filename, "r");
//   fscanf (my_stream, "%f %f %i %i", &f1, &f2, &i1, &i2);

//   /* Close stream; skip error-checking for brevity of example */
//   fclose (my_stream);

//   printf ("Float 1 = %f\n", f1);
//   printf ("Float 2 = %f\n", f2);
//   printf ("Integer 1 = %d\n", i1);
//   printf ("Integer 2 = %d\n", i2);


//   return 0;
// }