//a really stupid program to display linear search
#include<stdio.h>

int main()
{
  int n;
  printf("Enter size of array: ");
  scanf("%d", &n);
  int arr[n];
  int i;
  printf("Enter elements: ");
  for(i=0; i<n; i++)
  {
    scanf("%d", &arr[i]);
  }
  int e, flag=0;
  printf("Enter element to be searched for: ");
  scanf("%d", &e);
  for(i=0; i<n; i++)
  {
    if(arr[i]==e)
    {
      flag=1;
      break;
    }
  }
  if(flag==1)
  {
    printf("Element found.");
  }
  else
  {
    printf("Element does not exist.");
  }
  return 0;
}
