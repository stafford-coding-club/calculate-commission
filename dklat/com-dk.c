#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

   if (argc < 5) {
      printf("Usage: %s <base price> <num sales> <commission rate> <commission prereq>\n", argv[0]);
      return 0;
   }

   const float basep   = atof(argv[1]);
   const   int nsales  = atoi(argv[2]);
   const float comrate = atof(argv[3]);
   const float compre  = atof(argv[4]);

   const int moneymade = basep * nsales;

   if (moneymade >= compre) {

      const float comable = moneymade - compre;

      const float com = comable * comrate;

      printf("You made $%.2f!\n", com);

   } else {
      printf("You didn't make enough sales to earn commission!\n");
   }
   
   return 0;
}