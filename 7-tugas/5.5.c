#include <stdio.h>

void isPalindrome(int n){
  int  r = 0, tmp;
  tmp = n;

  while (tmp != 0)
  {
      r = r * 10;
      r = r + tmp % 10;
      tmp = tmp / 10;
  }

  if (n == r)
      printf("palindrome\n");
  else
      printf("bukan palindrome number\n");
}

void main()
{
  int n;

  printf("input : ");
  scanf("%d", &n);

  isPalindrome(n);
}