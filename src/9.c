//string operations on two strings
#include<stdio.h>

int main()
{
  char string1[20], string2[10];
  int i, len1, len2;
  printf("String 1: ");
  gets(string1);
  printf("String 2: ");
  gets(string2);
  for(len1=0; string1[len1]!='\0'; len1++);
  for(len2=0; string2[len2]!='\0'; len2++);
  i=0;
  while(string1[i]==string2[i] && string1[i]!='\0' && string2!='\0')
  {
    i++;
  }
  if(string1[i]=='\0' && string2[i]=='\0') printf("Equal.\n");
  else
  {
    printf("Not equal.\nLonger String:");
    if(len1>len2) puts(string1);
    else puts(string2);
  }
  for(i=0; string2[i]!='\0'; i++, len1++)
  {
    string1[len1]=string2[i];
  }
  string1[len1]='\0';
  printf("Concatenated String:");
  puts(string1);
  for(i=0; string2[i]!='\0'; i++)
  {
    string1[i]=string2[i];
  }
  string1[len2]='\0';
  printf("Copying...\n");
  printf("String 1:%s String 2:%s",string1,string2);
  return 0;
}
