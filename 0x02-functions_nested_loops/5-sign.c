#include <stdio.h>
#include <main.h>


int print_sign(int c)
{
  if(c < 0)
    {
      putchar('-');
      return (-1);
    }
  else if(c == 0)
    {
      putchar('0');
      return (0);
    }
  else{
      putchar('1');
      return (1);
  }

} 
