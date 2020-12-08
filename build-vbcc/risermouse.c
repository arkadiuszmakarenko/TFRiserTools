#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

char *p = (char *)0xBA0006;

int main(int argc, char **argv)
{
         uint8_t sens = atoi(argv[1]);
         if (sens== 1||sens== 2||sens== 4||sens== 8||sens== 16)
         {
             p[0] = sens;
             printf("Sensitivity has been set up to: %u \n", sens);
         } 
         else
         {
             printf("Usage: risermouse <sensitivity value> \n");
             printf("Current sensitivity value %u \n",p[0]);
             printf("Please provide value 1,2,4,8,16; 1 - most sensitive, 16 - least sensitive \n");
         }
         
        exit(EXIT_SUCCESS);
}