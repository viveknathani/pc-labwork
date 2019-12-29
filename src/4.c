//print reverse of a number

/*
cases where this algorithm fails to produce accurate results:
when dealing with zeroes at the beginning and/or at the end
examples:
input: 0100
output: 1
input: 08
output: 8
input: 800
output: 8
mathematically, these are accurate results coz reverse of 0100 can be treated as 1
but if you intend to treat your input as a string, this fails.
*/

#include<stdio.h>

int main()
{
  int n, remainder, rev=0;
  scanf("%d", &n);
  while(n!=0)
  {
    rev=rev*10;
    rev=rev+n%10;
    n=n/10;
  }
  printf("%d", rev);
  return 0;
}
