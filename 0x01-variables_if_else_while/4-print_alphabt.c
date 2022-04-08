#include <stdio.h>
/**
 * main - print lowercase alpha a-z execpt q and e
 */

int main(void)
{
  char alpha = 'a';
  while (alpha <= 'z')
  {
    if ((alpha != 'q') && (alpha != 'e'))
   {
      putchar(alpha);
   }
   alpha++;
  }
   putchar('\n');
   return (0);
}
