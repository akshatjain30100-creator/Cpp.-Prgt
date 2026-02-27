#include <stdio.h>
int main()
{
  int r, s, c;
  for ( r = 1; r <= 5; r++ )
  {
    for ( s = 1; s <= 5-r; s++ )
    {
      printf (" ");
    }
    for ( c = 1; c <= r; c++ )
    {
      if ( c % 2 == 1)
      {
      printf ("* ");
      }
    }
    printf ("\n");
  }
}
