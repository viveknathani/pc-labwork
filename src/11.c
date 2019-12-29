//sort an array using any sorting algorithm
#include<stdio.h>

void insort_ascend(int arr[], int n)
{
  int key, i;
  for(int j=1; j<n; j++)
  {
    key=arr[j];
    i=j-1;
    while(i>=0 && arr[i]>key)
    {
      arr[i+1]=arr[i];
      i=i-1;
    }
    arr[i+1]=key;
  }
}

void print_array(int arr[], int n)
{
  int i;
  for(i=0; i<n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
int main()
{
  int arr[]={10, 23, 4, 1, 98, 0};
  int n=sizeof(arr)/sizeof(arr[0]);
  print_array(arr, n);
  insort_ascend(arr, n);
  print_array(arr, n);
  return 0;
}
