//use string functions
#include<stdio.h>
#include<string.h>

int main()
{
  char string1[20], string2[10];
  gets(string1);
  gets(string2);
  printf("Comparison:%d\n", strcmp(string1, string2));
  printf("Concatenation:%s\n", strcat(string1, string2));
  printf("copying...\n");
  strcpy(string1, string2);
  printf("String 1: %s, String 2: %s\n", string1, string2);
  return 0;
}
