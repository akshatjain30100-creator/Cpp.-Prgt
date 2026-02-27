#include <stdio.h>
int main()
{
  for ( r = 1; r <= 5; r++ )
  {
    for ( s = 1; s <= 5-r; s++ )
    {
      printf (" ");
    }
    for ( c = 1; c <= r; c++ )
    {
      printf ("%d",c);
    }
    for ( c = r-1; c >= r; c-- )
    {
      printf ("%d",c);
    }
    printf ("\n");
  }
  return 0;
}
