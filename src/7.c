//matrix operations

//would be really nice if someone takes the effort to encapsulate each operation into a function
//to increase the reusability of the code
//i am too lazy to do it right now
#include<stdio.h>

int main()
{
  int matrix1[3][3], matrix2[3][3], rmatrix[3][3], i, j;
  printf("Enter values for matrix 1: ");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      scanf("%d", &matrix1[i][j]);
    }
  }
  printf("Enter values for matrix 2: ");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      scanf("%d", &matrix2[i][j]);
    }
  }
  printf("\nAddition Matrix: \n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      rmatrix[i][j]=matrix1[i][j]+matrix2[i][j];
    }
  }
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("%d ", rmatrix[i][j]);
    }
    printf("\n");
  }

  printf("\nSubtraction Matrix: \n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      rmatrix[i][j]=matrix1[i][j]-matrix2[i][j];
    }
  }
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("%d ", rmatrix[i][j]);
    }
    printf("\n");
  }

  printf("\nTranspose Matrix: \n");
  for(i=0; i<3; i++)
  {
    for(j=i; j<3; j++)
    {
      int t;
      t=matrix1[i][j];
      matrix1[i][j]=matrix1[j][i];
      matrix1[j][i]=t;
    }
  }
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("%d ", matrix1[i][j]);
    }
    printf("\n");
  }
  return 0;
}
