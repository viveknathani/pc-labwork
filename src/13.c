//to demonstrate dynamic memory allocation using arrays

#include<stdio.h>

int main()
{
  int n, i;
  printf("Enter size of 1-D array: ");
  scanf("%d", &n);

  //dynamically allocating for three arrays
  int *A=(int)malloc(n*sizeof(int));
  int *B=(int)malloc(n*sizeof(int));
  int *C=(int)malloc(n*sizeof(int));
  printf("Resultant array: ");
  for(i=0; i<n; i++)
  {
    //feeding the arrays with random operations, you can do anything here
    A[i]=i+1;
    B[i]=i+1;
    C[i]=A[i]+B[i];
    printf("%d ", C[i]);
  }

  //dynamically de-allocating the memory for arrays
  free(A);
  free(B);
  free(C);
  return 0;
}
