#include <stdio.h>
int main()
{
  for ( r = 6-1; r >= 1; r++ )
  {
    for ( s = 1; s <= 5-r; s++ )
    {
      printf (" ");
    }
    for ( c = 1; c <= r; c++ )
    {
      printf ("* ");
    }
    printf ("\n");
  }
  for ( r = 2; r <= 5; r++ )
  {
    for ( s = 1; s <= 5-r; s++ )
    {
      printf (" ");
    }
    for ( c = 1; c <= r; c++ )
    {
      printf ("* ");
    }
    printf ("\n");
  }
return 0;
}
