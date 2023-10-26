/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void
TOH (int n, char src, char destn, char aux)
{
  if (n == 1)
    {
      printf ("%c-->%c\n", src, destn);
      return;
    }
  TOH (n - 1, src, aux, destn);
  printf ("%c-->%c\n", src, destn);
  TOH (n - 1, aux, destn, src);
}

int
main ()
{
  int n;
  printf ("Enter the Number of disk : \n");
  scanf ("%d", &n);
  TOH (n, 'A', 'C', 'B');

  return 0;
}
