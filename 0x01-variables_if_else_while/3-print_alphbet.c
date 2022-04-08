#include <stdio.h>

/**
 *main - print lowercase and uppercase a-za-Z using putchar
*/
int main(void)
{
  char lower = 'a';
  char upper = 'A';

  while (lower <= 'z') /*print lowercase a-z*/
  {
     putchar(lower);
     lower++;
  }

  while (upper <= 'Z') /*print uppercase A-Z*/
  {
     putchar(upper);
     upper++;
  }

  putchar('\n');
  return (0);
}
