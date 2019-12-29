//to check whether a nummber is prime or not

#include<stdio.h>

int main()
{
  int n, flag=1; //flag value changes to 0 at first sign of composite nature
  printf("Enter a number: ");
  scanf("%d", &n);
  if(n==1) //check for 1
  {
    printf("The number is neither prime nor composite.\n");
  }
  else
  {
    //repeated division to check for prime, goes till n/2
    for(int i=2; i<n/2; i++)
    {
      if(n%i==0)
      {
        flag=0;
        break;
      }
    }
    if(flag==0)
    {
      printf("The number is composite.\n");
    }
    else
    {
      printf("The number is prime.\n");
    }
  }
  return 0;
}
