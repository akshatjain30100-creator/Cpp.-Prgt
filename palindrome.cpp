#include<stdio.h>
int palindrome(int num)
{
      int rev=0, digit,camp;
      camp=num;
      while(num != 0)
      {
            digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
      }
      if(rev == camp)
            return 1;
      else
            return 0;
}
int main()
{    
      int num, res;
      printf("\n enter a number: ");
      scanf("%d",&num);
      res = palindrome(num);
      if(res == 1)
            printf("\n %d is a palindrome", res);
      else
            printf("\n %d is not a palindrome", res);
      return 0;
}
