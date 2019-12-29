//generate fibonacci series of n terms 
#include<stdio.h>

void fibonacci(int n)
{
  int current, prev, fprev;
  fprev=1;
  prev=1;
  current=prev+fprev;
  printf("%d %d ", fprev, prev);
  for(int i=0; i<(n-2); i++)
  {
    printf("%d ", current);
    fprev=prev;
    prev=current;
    current=prev+fprev;
  }
}


int main()
{
  fibonacci(10);
  return 0;
}
