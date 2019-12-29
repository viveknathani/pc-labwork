//find string length, no of characters, no of vowels, print reverse
//and see if it is palindrome or not

//i know you can perform these using functions too
//but it is really nice to understand and write this code on your own

#include<stdio.h>

int main()
{
  char string1[100];
  int i, s=0;
  gets(string1);
  for(i=0; string1[i]!='\0'; i++);
  printf("Length:%d\n", i);
  for(i=0; string1[i]!='\0'; i++)
  {
    if(string1[i]==' ')
    {
      s++;
    }
  }
  printf("No. of characters:%d\n", i-s);
  int vow=0;
  for(i=0; string1[i]!='\0'; i++)
  {
    if(string1[i]=='a' || string1[i]=='e' || string1[i]=='i' || string1[i]=='o' || string1[i]=='u' || string1[i]=='A' || string1[i]=='E' || string1[i]=='I' || string1[i]=='O' || string1[i]=='U')
    {
      vow++;
    }
  }
  printf("No. of vowels:%d\n", vow);
  printf("Reverse:");
  for(i=0; string1[i]!='\0'; i++);
  int slen=i;
  for(i; i>=0; i--)
  {
    printf("%c", string1[i]);
  }
  printf("\nPalindrome?:");
  int j, flag=1;
  for(j=0; j<(slen/2); j++)
  {
    if(string1[j]!=string1[slen-j-1])
    {
      flag=0;
      break;
    }
  }
  if(flag==1) printf("Yes");
  else printf("No");
  return 0;
}
