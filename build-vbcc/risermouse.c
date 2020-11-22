#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char **argv)
{
         uint8_t sens = atoi(argv[1]);
         if (sens>0 &&sens<17)
         {
             char *p = (char *)0xBA0006;
             p[0] = sens;

             printf("Sensitivity has been set up to: %u \n", sens);

         } 
         else
         {
             printf("Please provide value in range 1-8, Default is 2. \n");
         }
         
        exit(EXIT_SUCCESS);
}