#include <stdio.h>
/**
 *main - entry point
 */
 
int main(void)
{ 
   char alpha = 'a';
   
   while (alpha <= 'z')
   {
     putchar(alpha);
     alpha++;
   }
   putchar('\n');

   return (0);
}
