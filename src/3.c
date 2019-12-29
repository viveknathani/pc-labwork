//Factorial of a number

#include<stdio.h>

double fac(int n)
{
  if(n==1 || n==0)
  {
    return 1;
  }
  else
  {
    return n*fac(n-1);
  }
}


int main()
{
  double f;
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  f=fac(n);
  printf("Factorial is %g\n", f);
  return 0;
}
